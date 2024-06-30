#include <iostream>
using namespace std;

class Value {
    int v;

  public:
    Value() { v = 0; }

    Value(int value) { v = value; }

    void show() { cout << "Value: " << v << "\n"; }

    friend Value operator-(Value& value);
};

Value operator-(Value& value) { return Value(-value.v); }

int main() {
    Value value(1);

    cout << "Original value is:\n";
    value.show();

    Value negated = -value;
    cout << "Negated value is:\n";
    negated.show();
}
