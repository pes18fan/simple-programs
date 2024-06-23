#include <iostream>
using namespace std;

class Farenheit;
class Centigrade {
    float value;

  public:
    Centigrade();
    Centigrade(float v);
    Centigrade(Farenheit f);
    float get_value();
    void display();
};

class Farenheit {
    float value;

  public:
    Farenheit();
    Farenheit(float v);
    Farenheit(Centigrade c);
    float get_value();
    void display();
};

Centigrade::Centigrade() { value = 0; }
Centigrade::Centigrade(float v) { value = v; }
Centigrade::Centigrade(Farenheit f) { value = (f.get_value() - 32) / 1.8; }

float Centigrade::get_value() { return value; }

Farenheit::Farenheit() { value = 0; }
Farenheit::Farenheit(float v) { value = v; }
Farenheit::Farenheit(Centigrade c) { value = (c.get_value() * 1.8) + 32; }

float Farenheit::get_value() { return value; }

int main() {
    Centigrade c(50);
    Farenheit f(50);

    Farenheit from_c(c);
    Centigrade from_f(f);

    cout << "50C is equal to " << from_c.get_value() << "F\n";
    cout << "50F is equal to " << from_f.get_value() << "C\n";
}
