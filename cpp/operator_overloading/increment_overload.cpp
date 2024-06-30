#include <iostream>

class Counter {
    int value;

  public:
    Counter() { value = 0; }

    void operator++() { ++value; }

    void show() { std::cout << "Counter at: " << value << "\n"; }
};

int main() {
    Counter c;

    ++c;
    ++c;

    c.show();

    ++c;
    ++c;

    c.show();
}
