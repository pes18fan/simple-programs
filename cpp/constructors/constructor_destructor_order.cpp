/* WAP to illustrate invocation order of constructor and destructor. */
#include <iostream>
using namespace std;

class Foo {
    int num;

  public:
    Foo(int n) {
        num = n;
        cout << "Constructor called for object " << num << "\n";
    }

    ~Foo() { cout << "Destructor called for object " << num << "\n"; }
};

int main() {
    Foo a(1);

    { Foo b(2); }

    {
        Foo c(3);
        { Foo d(4); }
    }

    Foo e(5);
}
