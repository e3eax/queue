# Generic Queue Class

This is a C++ implementation of a generic Queue class that implements the standard methods and functionality common in a queue data structure. The implementation focuses on efficiency, performance, and ease of use.

## Features

- **Generic**: Can hold elements of any data type.
- **Efficient**: Optimized for performance with constant-time operations.
- **Easy to Use**: Simple and intuitive interface.

## Methods

- **enqueue(T element)**: Adds an element to the back of the queue.
- **dequeue()**: Removes and returns the element at the front of the queue.
- **front()**: Returns the element at the front of the queue without removing it.
- **back()**: Returns the element at the back of the queue.
- **isEmpty()**: Returns `true` if the queue is empty, `false` otherwise.
- **size()**: Returns the number of elements in the queue.

## Usage

```cpp
#include "Queue.h"

int main() {
    Queue<int> intQueue;

    // Add elements to the queue
    intQueue.enqueue(1);
    intQueue.enqueue(2);
    intQueue.enqueue(3);

    // Remove and print elements from the queue
    while (!intQueue.isEmpty()) {
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
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```

Please note that you'll need to include the actual code for your `Queue` class in a separate file (e.g., `Queue.h`). Additionally, if you have a license file for your project, you should replace `[LICENSE](LICENSE)` with the actual path to your license file.
