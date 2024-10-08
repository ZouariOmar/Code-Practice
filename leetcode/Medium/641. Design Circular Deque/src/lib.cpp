/*****************************************************************************
 * @file      lib.cpp
 * @author    @ZouariOmar (zouariomar20@gmail.com)
 * @brief     IDE__VSC
 * @version   0.1
 * @date      28-09-2024
 * @link      https://leetcode.com/problems/design-circular-deque
 * @copyright Copyright (c) 2024
 *****************************************************************************/

//? ------------------------------ INCLUDE PROTOTYPE DECLARATION PART ------------------------------
#include "../inc/inc.hpp"

//? ----------------------------- FUNCTIONS/CLASSES PROTOTYPE DEV PART -----------------------------
/**
 * @brief Construct a new MyCircularDeque::MyCircularDeque object
 * @param k int
 */
MyCircularDeque::MyCircularDeque(int k)
    : len(k) {
}

bool MyCircularDeque::insertFront(int value) {
  if (isFull()) return false;
  dq.push_front(value);
  return true;
}

bool MyCircularDeque::insertLast(int value) {
  if (isFull()) return false;
  dq.push_back(value);
  return true;
}

bool MyCircularDeque::deleteFront() {
  if (dq.empty()) return false;
  dq.pop_front();
  return true;
}

bool MyCircularDeque::deleteLast() {
  if (dq.empty()) return false;
  dq.pop_back();
  return true;
}

int MyCircularDeque::getFront() {
  if (dq.empty()) return -1;
  return dq.front();
}

int MyCircularDeque::getRear() {
  if (dq.empty()) return -1;
  return dq.back();
}

bool MyCircularDeque::isEmpty() {
  return dq.empty();
}

bool MyCircularDeque::isFull() {
  return dq.size() == len;
}

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */

/*
* Other Solution
#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize ("-ffloat-store")
#pragma GCC optimize ("O3", "unroll-loops")
auto _=[]()noexcept{ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);return 0;}();

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }


    Node(int x){
        this->data = x;
        this->prev = NULL;
        this->next = NULL;
    }

};

class MyCircularDeque {
    Node* left = new Node(-1);
    Node* right = new Node(-1);
    int size = 0, capacity = 0;
public:

    void remove(Node* temp){

        // Remove the node from between
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->next = NULL;
        temp->prev = NULL;


    }

    void add(Node* dummy, Node* temp){

        dummy->prev->next = temp;
        temp->prev = dummy->prev;
        temp->next = dummy;
        dummy->prev = temp;

    }

    MyCircularDeque(int k) {
        left->next = right;
        right->prev = left;
        capacity = k;
    }

    bool insertFront(int value) {

        if(isFull()) return false;

        Node* element = new Node(value);
        add(left->next, element);
        size++;
        return true;
    }

    bool insertLast(int value) {
        if(isFull()) return false;

        Node* element = new Node(value);
        add(right, element);
        size++;
        return true;
    }

    bool deleteFront() {
        if(isEmpty()) return false;

        remove(left->next);
        size--;
        return true;
    }

    bool deleteLast() {
        if(isEmpty()) return false;

        remove(right->prev);
        size--;
        return true;
    }

    int getFront() {
        if(isEmpty()) return -1;

        return left->next->data;
    }

    int getRear() {
        if(isEmpty()) return -1;

        return right->prev->data;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};

*/