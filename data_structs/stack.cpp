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
#include <iostream>
#include <optional>

using
    std::cout,
    std::nullopt,
    std::make_optional,
    std::optional;

// a stack node.
template <typename T>
struct Node {
    T value;
    optional<Node<T>*> prev;
};

template <typename T>
class Stack {
    private:
        optional<Node<T>*> head;

    public:
        int len;

        Stack() {
            this->head = nullopt;
            this->len = 0;
        }

        ~Stack() {
            while (this->head.has_value()) {
                pop();
            }
        }
        
        // add an item to the stack. O(1).
        void push(T item) {
            auto node = new Node<T>{ item, nullopt };
            
            if (!this->head) {
                this->head = node;
                return;
            }

            Node<T>* hed = this->head.value();
            this->head = node;
            this->head.value()->prev = hed;
            this->len++;
        }
        
        // pop a value from the stack. O(1).
        optional<T> pop() {
            if (!this->head) return nullopt;

            Node<T>* hed = this->head.value();
            auto hed_value = hed->value;
            this->head = this->head.value()->prev;
            delete hed;
            // prevent len from being less than 0
            this->len = this->len < 0 ? 0 : this->len - 1;
            
            return make_optional(hed_value);
        }

        optional<T> peek() {
            if (!this->head) return nullopt;
            else return this->head.value()->value;
        }
};

int main() {
    Stack<int> stuff;
    stuff.push(1);
    stuff.push(2);

    cout << stuff.peek().value_or(69420) << "\n";

    stuff.pop();
    stuff.pop();
    if (!stuff.pop()) {
        cout << "How you gonna pop an empty stack bruv\n";
    }

    return 0;
}
