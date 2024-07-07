#include <iostream>

class Foo {
  protected:
    int val1;

  public:
    Foo() { val1 = 1; }
    Foo(int val) { val1 = val; }
};

class Bar : public Foo {
  public:
    Bar(int val) : Foo(val) {}

    void show() { std::cout << "val1 for Bar: " << val1 << "\n"; }
};

class Baz : public Foo {
  public:
    Baz(int val) : Foo(val) {}

    void show() { std::cout << "val1 for Baz: " << val1 << "\n"; }
};

int main() {
    Bar bar(2);
    bar.show();

    Baz baz(3);
    baz.show();
}
