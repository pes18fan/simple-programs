// TODO!!!!!!!!!!!!!

/* Array Buffer / Ring Buffer
 * They're similar to arraylists since the underlying type is
 * still an array, but unlike them, these don't use index 0 of 
 * the array as the head and `len` as the tail. Instead, they
 * have a `head` and a `tail` at two particular indices in the
 * list. So, if you need to remove from the front, which you
 * wouldn't quite be able to do in arraylists, here you can
 * just do a `head + 1` and there you go, job done. That makes
 * it a O(1) operation. Same thing with inserting at the back
 * too.
 *
 * But what if you go off the edge of the underlying array? */
#include <iostream>

template <typename T>
class ArrayBuffer {
    private:
        T* arr;
        int head;
        int tail;

    public:
        ArrayBuffer() {
            this->arr = nullptr;
        }

        ~ArrayBuffer() {
            delete[] this->arr;
        }
};
