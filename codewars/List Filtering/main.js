/** @format */

/**
 * Returns a new list with the strings filtered out.
 * @param {Array} l
 * @returns {Array}
 */
function filter_list(l) {
	let res = Array();
	l.forEach((e) => {
		if (typeof e === "number") res.push(e);
	});

	return res;
}

console.log(filter_list([1, 2, "a", "b"]));

/*
  function filter_list(l) {
    return l.filter(function(v) {return typeof v == 'number'})
  }
*/
