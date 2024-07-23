/* Queue.
 * A queue is a data structure that can be thought of as a specific
 * implemetation of a linked list. It is a first in, first out data
 * structure (FIFO). It's pretty much just like a line that you'd see when
 * you apply for something. How do you get into a line? You go at the
 * back of it. Thus, you insert stuff in the queue at its back, a process
 * called "enqueueing". Then, if you're using a queue for a linked list,
 * you'd make `tail` point to the new element. To pop something out of
 * a queue, you point head to the second item and free the first one. That's
 * "dequeueing". Queue's also offer a "peek" operation, that returns the
 * value of the `head`. */
#include <iostream>
#include <optional>

using std::cout, std::optional, std::make_optional, std::nullopt;

// a node in the queue.
// can enclose a value of type T.
template <typename T> struct Node {
    T value;
    optional<Node<T>*> next;
};

// a queue made up of nodes generic
// over the type T.
template <typename T> class Queue {
  private:
    // pointers to the first and last element of the
    // queue. Enclosed in optional to allow conscise
    // handling of empty queues.
    optional<Node<T>*> head, tail;

  public:
    int len;

    // constructor, initializes head and tail to null
    Queue() {
        this->head = nullopt;
        this->tail = nullopt;
        this->len = 0;
    }

    // destructor, frees the entire queue when the instance goes
    // out of scope
    ~Queue() {
        while (this->head.has_value()) {
            deque();
        }
    }

    // adds a new item of type T to the queue. O(1) operation.
    void enqueue(T item) {
        Node<T>* node = new Node<T>{item, nullopt};
        this->len++;

        // if the tail is null then assign `node` to it and
        // to the head
        if (!this->tail.has_value()) {
            this->tail = node;
            this->head = node;
            return;
        }

        // set the `next` of the current tail to the
        // new node and then set the new node as the new tail
        this->tail.value()->next = make_optional(node);
        this->tail = make_optional(node);
    }

    // remove an item from the front of the queue. O(1) operation.
    // returns an optional of type T, since the queue may be empty.
    optional<T> deque() {
        // return the null option if the head has no value, i.e.
        // the queue is empty.
        if (!this->head.has_value()) {
            return nullopt;
        }

        this->len--;

        // keep the current head in a temporary variable, then
        // assign the current head's next head as the current head.
        // then, delete what the temporary variable points to.
        auto hed = this->head.value();
        auto hed_val = hed->value;
        this->head = this->head.value()->next;
        delete hed;

        if (this->len == 0)
            this->tail = nullopt;

        // wrap up `hed`'s value in a pretty little optional
        // and return it to the caller.
        return make_optional(hed_val);
    }

    // return the head's value. Also O(1).
    // will return nullopt if the queue is empty.
    optional<T> peek() {
        if (!this->head.has_value()) {
            return nullopt;
        }
        return make_optional(this->head.value()->value);
    }
};

int main() {
    Queue<int> q;
    q.enqueue(6);
    q.enqueue(7);

    cout << q.peek().value_or(69420) << "\n";

    q.deque();
    cout << q.deque().value_or(69420) << "\n";
    if (!q.deque()) {
        cout << "You tried to deque an empty queue bruh\n";
    }

    return 0;
}
