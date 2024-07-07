#include <iostream>

class Foo {
  protected:
    int val1;

  public:
    Foo() { val1 = 1; }

    void show() { std::cout << "val1 is " << val1 << "\n"; }
};

class Bar : public Foo {
  public:
    Bar() { val1 = 2; }
};

int main() {
    Bar bar;
    bar.show();
}
