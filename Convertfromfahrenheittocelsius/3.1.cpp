//Ali Abdullah Al Omani
//431900303

#include <iostream>
using namespace std;

int main()
{
    double fahrenheit, celsius;
    
    cout <<"Please enter the temperature in fahrenheit :";
    cin >> fahrenheit;
    
    celsius = (5.0/9) * (fahrenheit - 32);
    
    cout <<"The temperature in celsius is = " << celsius;
    
    return 0;
}

