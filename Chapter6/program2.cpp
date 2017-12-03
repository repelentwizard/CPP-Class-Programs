#include <iostream>
#include <iomanip>
using namespace std;

int Celsius(int F)
{
        int Celsius = (( F - 32 ) * 5) / 9;
        return Celsius;
}

int main()
{
        for(int x=0; x<=20; x++)
        {
        int C = Celsius(x);
        cout << x << " degrees Fareinheit is " << C << " degrees Celsius\n";
        }
        return 0;
}
