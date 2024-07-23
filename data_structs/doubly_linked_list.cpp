#include <iostream>

using std::cout, std::invalid_argument;

template <typename T> struct Node {
    T value;
    Node<T>* prev;
    Node<T>* next;
};

template <typename T> class DoublyLinkedList {
  private:
    Node<T>* head;
    Node<T>* tail;

    Node<T>* get_at(int idx) {
        auto curr = this->head;

        for (int i = 0; curr != nullptr && i < idx; i++) {
            curr = curr->next;
        }

        return curr;
    }

    T remove_node(Node<T>* node) {
        this->len--;

        if (this->len == 0) {
            auto out = this->head == nullptr ? nullptr : &this->head->value;
            this->head = this->tail = nullptr;
            return *out;
        }

        if (node->prev != nullptr) {
            node->prev->next = node->next;
        }

        if (node->next != nullptr) {
            node->next->prev = node->prev;
        }

        if (node == this->head) {
            this->head = node->next;
        }
        if (node == this->tail) {
            this->tail = node->prev;
        }

        T val = node->value;
        node->prev = node->next = nullptr;
        delete node;
        return val;
    }

  public:
    int len;

    DoublyLinkedList() {
        this->len = 0;
        this->head = nullptr;
        this->tail = nullptr;
    }

    ~DoublyLinkedList() {
        while (this->head != nullptr) {
            this->remove_node(this->head);
        }
    }

    void append(T item) {
        auto node = new Node<T>{item};
        this->len++;

        if (this->tail == nullptr) {
            this->head = this->tail = node;
            return;
        }

        node->prev = this->tail;
        this->tail->next = node;
        this->tail = node;
    }

    void insert_at(T item, int idx) {
        if (idx > this->len) {
            throw invalid_argument("Oopsie: Index too big");
        } else if (idx == this->len) {
            this->append(item);
            return;
        } else if (idx == 0) {
            this->prepend(item);
            return;
        }

        this->len++;
        auto curr = this->get_at(idx);
        auto node = new Node<T>{item};

        node->next = curr;
        node->prev = curr->prev;
        curr->prev = node;

        if (node->prev != nullptr) {
            node->prev->next = node;
        }
    }

    void prepend(T item) {
        auto node = new Node<T>{item};
        this->len++;

        if (this->head == nullptr) {
            this->head = this->tail = node;
            return;
        }

        node->next = this->head;
        this->head->prev = node;
        this->head = node;
    }

    T remove(T item) {
        auto curr = this->head;
        for (int i = 0; curr != nullptr && i < this->len; i++) {
            if (curr->value == item) {
                break;
            }
            curr = curr->next;
        }

        if (curr == nullptr) {
            throw invalid_argument("Oopsie: Item not found");
        }

        return this->remove_node(curr);
    }

    T remove_at(int idx) {
        auto node = this->get_at(idx);
        if (node == nullptr) {
            throw invalid_argument("Oopsie: Index too big");
        } else
            return this->remove_node(node);
    }

    T get(int idx) {
        auto got = this->get_at(idx);
        if (got == nullptr) {
            throw invalid_argument("Oopsie: Index too big");
        } else
            return got->value;
    }
};

int main() {
    auto list = new DoublyLinkedList<int>();

    list->append(1);
    list->append(2);

    cout << list->get(0) << "\n";
    cout << list->get(1) << "\n";

    list->insert_at(3, 1);
    cout << list->get(1) << "\n";
    cout << list->get(2) << "\n";

    list->prepend(0);
    cout << list->get(0) << "\n";

    list->remove_at(0);
    list->remove(3);

    return 0;
}
