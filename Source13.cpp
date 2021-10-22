#include<iostream>
using namespace std;

void MyFunc_1();
void MyFunc_2();
int main()
{
    MyFunc_1();
    MyFunc_1();
    MyFunc_2();
    MyFunc_2();
    return 0;
}
void MyFunc_1()
{
    cout << "Three blind mice " << endl;
}
void MyFunc_2()
{
    cout << "See how they run " << endl;