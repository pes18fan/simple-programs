/* An ArrayList combines the speed of arrays with the
 * growability of a linked list. It includes a `length`
 * and a `capacity`, where the length is the number of
 * items in the array and the `capacity` is the actual
 * number of items it is capable of holding. 
 * ArrayLists have a "get" method which will return whatever 
 * item is at the "idx" arg of the method, so long as its not
 * above `length`, since that's an error and out of bounds.
 * A "push" method exists that pushes an item to the list,
 * and a "pop" method that removes the last element and returns
 * it.
 *
 * But what if the capacity is exceeded, and I try to "push"?
 * Well, we create a new array with a higher capacity and copy
 * every item from the original array into the new one. */
#include <iostream>
#include <optional>

using
    std::cout,
    std::nullopt,
    std::make_optional,
    std::optional;

template <typename T>
class ArrayList {
    private:
        int capacity;
        T* arr;

        T* grow() {
            int new_capac = 
                this->capacity < 8 ? 8 : this->capacity * 2;
            T* new_arr = new T[new_capac];
            
            for (int i = 0; i < this->capacity; i++) {
                new_arr[i] = this->arr[i];
            }

            delete[] this->arr;
            this->capacity = new_capac;
            return new_arr;
        }

    public:
        int len;

        ArrayList() {
            this->arr = nullptr;
            this->len = 0;
            this->capacity = 0;
        }

        ~ArrayList() {
            delete[] this->arr;
        }

        optional<T> get(int idx) {
            if (idx > this->len - 1) return nullopt;
            else return make_optional(
                    this->arr[this->len - 1]);
        }

        void push(T item) {
            if (this->len <= this->capacity) {
                this->arr = grow();
            }

            this->arr[this->len] = item;
            this->len++;
        }

        optional<T> pop() {
            if (this->len == 0) return nullopt;

            T item = this->arr[this->len - 1];
            this->len--;
            return make_optional(item);
        }
};

int main() {
    ArrayList<int> items;

    cout << items.len << "\n";

    items.push(1);

    cout << items.get(0).value() << "\n";

    items.pop();

    cout << items.get(0).value_or(69420) << "\n";

    return 0;
}
