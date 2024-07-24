/*****************************************************************************
 * @file      main.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      24-07-2024
 * @link      https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "lib.cpp"

//? --------------------------------- MAIN() INT FUNCTION DEV PART ---------------------------------

/**
 * @brief # The Main Program Function
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const* argv[]) {
  setup_io_test();
  // number of tag and query lines
  int N,
      Q;
  scanf("%d %d\n", &N, &Q);

  // stack object for parsing document
  vector<string> tag_stack;

  // parsing sentinals
  string endtag_sentinal = "/";

  // container for fully qualified attributes
  map<string, map<string, string>> document_map;

  // accumulate information from the document
  string tag;
  for (int i = 0; i < N; i++) {
    // read in a tag line
    getline(cin, tag);

    // strip the < and >
    tag = tag.substr(1);
    tag.pop_back();

    // initialize tag's stream
    stringstream tag_stream;
    tag_stream << tag;

    // pop tag stack if endtag
    if (tag.substr(0, 1) == endtag_sentinal) {
      tag_stack.pop_back();
      continue;
    }

    // otherwise push onto tag stack
    else {
      tag.clear();
      tag_stream >> tag;
      tag_stack.push_back(tag);
    }

    // move on if not attributes or handle them
    if (tag_stream.eof())
      continue;

    // initialize attribute map
    map<string, string> attributes;

    // extract and format attribute keys and values
    string key, equal_operator, value;
    while (!tag_stream.eof()) {
      tag_stream >> key >> equal_operator >> value;
      value = value.substr(1);
      value.pop_back();
      attributes.insert(pair<string, string>(key, value));
    }

    // update document map with a new key-value pair
    stringstream key_path;
    for (string& t : tag_stack) {
      key_path << t;
      if (t != tag)
        key_path << ".";
    }
    document_map.insert(
        pair<string, map<string, string>>(key_path.str(), attributes));
  }

  // query parsing regular expression
  regex query_regex("([a-zA-Z0-9\\.]+)~([_a-zA-Z0-9]+)");

  // answer queries
  string query;
  for (int i = 0; i < Q; i++) {
    // print not found if no document
    if (document_map.size() == 0) {
      cout << "Not Found!" << endl;
      continue;
    }

    // read the query
    getline(cin, query);

    // initialize regex match container
    smatch query_smatch;

    // exit if no match at all
    if (!regex_match(query, query_smatch, query_regex)) {
      return -1;
    }

    // print not found if query not in document
    if (document_map.find(query_smatch[1]) == document_map.end()) {
      cout << "Not Found!" << endl;
      continue;
    }

    // print not found if no attributes
    if (document_map[query_smatch[1]].size() == 0) {
      cout << "Not Found!" << endl;
      continue;
    }

    // print not found if no attribute or print attribute
    auto ptr = document_map[query_smatch[1]].find(query_smatch[2]);
    if (ptr == document_map[query_smatch[1]].end())
      cout << "Not Found!" << endl;
    else
      cout << ptr->second << endl;
  }

  return 0;
}