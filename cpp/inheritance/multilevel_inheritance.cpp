#include <iostream>

class Foo {
  protected:
    int val1;

  public:
    Foo() { val1 = 1; }
};

class Bar : public Foo {
  protected:
    int val2;

  public:
    Bar() { val2 = 2; }
};

class Baz : public Bar {
  public:
    void show() {
        std::cout << "val1 is " << val1 << " and val2 is " << val2 << "\n";
    }
};

int main() {
    Baz baz;
    baz.show();
}
