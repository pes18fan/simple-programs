/* Assume that employee will have to pay 10 percent income tax to the
government. Ask user to enter the employee salary. Use inline function to
display the net payment to the employee by the company. */
#include <iostream>

inline void print_net_salary(float salary) {
    std::cout << "Net salary is " << (90.0 / 100.0) * salary;
}

int main() {
    float salary;

    std::cout << "Enter employee salary\n";
    std::cin >> salary;

    print_net_salary(salary);
}
