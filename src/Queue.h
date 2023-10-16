#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::runtime_error;
using std::string;
using std::vector;

template <typename T>
class Queue {
 private:
  size_t q_rear = -1;
  size_t q_front = -1;
  vector<T> _vector = {};

 public:
  // Constructor
  Queue(const vector<T>& _v = {}) : _vector(std::move(_v)) {
    if (_vector.size()) {
      q_front = 0;
      q_rear = _vector.size() - 1;
    }
  }

  // Get the front element
  T front() const {
    if (is_empty()) {
      throw runtime_error("[front] Queue is empty - cannot get front element.");
    }
    return _vector[q_front];
  }

  // Get the rear element
  T rear() const {
    if (is_empty()) {
      throw runtime_error("[rear] Queue is empty - cannot get rear element.");
    }
    return _vector[q_rear];
  }

  // Check if the queue is empty
  bool is_empty() const { return q_rear == -1 && q_front == -1; }

  // Reset the queue
  void reset() {
    q_rear = -1;
    q_front = -1;
  }

  // Enqueue an element
  void enqueue(T val) {
    if (is_empty()) {
      ++q_front;
      ++q_rear;
      _vector.at(q_rear) = val;
      return;
    }

    ++q_rear;

    if (_vector.size() - 1 < q_rear) {
      _vector.push_back(val);
    } else {
      _vector[q_rear] = val;
    }
  }

  // Dequeue an element
  void dequeue() {
    if (is_empty()) {
      throw runtime_error("[dequeue] Queue is empty - cannot dequeue.");
    }

    ++q_front;

    if (q_front > q_rear) {
      reset();
    }
  }

  // Get the size of the queue
  size_t size() const {
    if (is_empty()) {
      return 0;
    }

    return q_rear - q_front + 1;
  }

  // Display the elements in the queue
  void display() const {
    if (is_empty()) {
      cout << "[display] Queue is empty nothing to display" << endl;
      return;
    }

    for (size_t i = q_front; i <= q_rear; i++) {
      cout << _vector[i] << endl;
    }
  }
};

#endif
