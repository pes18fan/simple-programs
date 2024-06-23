/* Create a class first with data member data1 and another class second with
data member data2. Display the largest number. Use friend function. */
#include <iostream>

class second;

class first {
    int data1;

  public:
    first(int a) { data1 = a; }

    friend int largest(first, second);
};

class second {
    int data2;

  public:
    second(int a) { data2 = a; }

    friend int largest(first, second);
};

int largest(first f, second s) { return f.data1 > s.data2 ? f.data1 : s.data2; }

int main() {
    first f = first(1);
    second s = second(2);

    std::cout << largest(f, s);
}
