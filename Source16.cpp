#include<iostream>
using namespace std;

double f(double);
int main()
{
    double light;
    cout << "Enter the number of light years : ";
    cin >> light;
    cout << endl;
    cout << light << " light years = " << f(light) << " astronomical units. ";
    return 0;
}
double f(double b)
{
    return b * 63240;
}