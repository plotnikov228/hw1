#include <iostream>
using namespace std;
double f(double);

int main()
{
    setlocale(0, "russian");
    double D;
    cout << "Please enter a Celsius value: ";
    cin >> D;
    cout << D << " degrees Celsius is " << f(D) << " degrees Fahrenheit";
    system("pause");
    return 0;
}

double f(double c)   // функция расчета 
{
    return 1.8 * c + 32;
}