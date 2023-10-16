# Generic Queue Class

This is a C++ implementation of a generic Queue class that implements the standard methods and functionality common in a queue data structure. The implementation focuses on efficiency, performance, and ease of use.

## Features

- **Generic**: Can hold elements of any data type.
- **Efficient**: Optimized for performance with constant-time operations.
- **Robust**: Handles edge cases and throws exceptions when appropriate.
- **Easy to Use**: Simple and intuitive interface.

## Methods

- **enqueue(T element)**: Adds an element to the back of the queue.
- **dequeue()**: Removes the element at the front of the queue.
- **front()**: Returns the element at the front of the queue without removing it.
- **rear()**: Returns the element at the back of the queue.
- **is_empty()**: Returns `true` if the queue is empty, `false` otherwise.
- **size()**: Returns the number of elements in the queue.
- **display()**: Prints each element in the queue, starting at the front.

## Usage

```cpp
#include "Queue.h"

int main() {
    Queue<int> intQueue;

    // Add elements to the queue
    intQueue.enqueue(1);
    intQueue.enqueue(2);
    intQueue.enqueue(3);

    // Print elements in the queue
    intQueue.display();

    // Remove and print elements from the queue
    while (!intQueue.is_empty()) {
        cout << intQueue.dequeue() << endl;
    }

    return 0;
}
```

## Installation

To use the Queue class in your project, simply include the header file in your source code:

```cpp
#include "Queue.h"
```
