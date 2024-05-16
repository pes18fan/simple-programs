#include <iostream>
using namespace std;

class TwoNumbers {
  private:
    int a, b;

  public:
    void setData() {
        cout << "Enter two numbers\n";
        cin >> a >> b;
    }

    int getLarger() { return (a > b ? a : b); }
};

int main() {
    TwoNumbers tn;
    tn.setData();
    cout << "Larger number is " << tn.getLarger() << "\n";

    return 0;
}
