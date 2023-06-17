/* Stack.
 * A stack is more or less the opposite of a queue. It is
 * a last-in, first-out (LIFO) data structure. Stacks provide
 * a "push" method to push a value to the top, a "pop" method
 * to remove a value from the top and a "peek" method to see
 * what value is at the top.
 * If this is a queue:
 *
 * hd -> A -> B -> C -> D <- tl
 *
 * This is a stack:
 *
 * tl -> A <- B <- C <- D <- hd
 *
 * The last element is the head. */

// a stack node.
class Node<T> {
    final T value;
    Node<T>? prev;

    Node(this.value, this.prev);
}

class Stack<T> {
    Node<T>? _head;
    int len = 0;

    Stack() {
        this._head = null;
    }

    void push(T item) {
        final node = Node<T>(item, null);

        this.len++;
        if (this._head == null) {
            this._head = node;
            return;
        }

        final hed = this._head;
        this._head = node;
        this._head?.prev = hed;
    }

    T? pop() {
        if (this._head == null) {
            return null;
        };

        final hed_value = this._head?.value;
        this._head = this._head?.prev;
        // prevent len from being less than zero
        this.len = this.len < 0 ? 0 : this.len - 1;

        return hed_value;
    }

    T? peek() {
        if (this._head == null) {
            return null;
        }
        else return this._head?.value;
    }
}

void main() {
    final stuff = Stack<int>();
    stuff.push(69);
    stuff.push(420);

    print(stuff.peek()); // => 420
    print(stuff.len); //=> 2

    stuff.pop();
    stuff.pop();
    print(stuff.pop() ?? "how you gonna pop an empty stack bruv");
}
