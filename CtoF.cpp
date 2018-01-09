//
// program to convert tmeperature from Celius
// to Fahrenheit units
// Fahrenheit = Celsius* (212-32)/100 +32
//

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
// enter the temperature in celsius
    int celsius;
    cout << "Enter the temperature in celsius, please:";
    cin >> celsius;
    
// calculate conversion factor for celsius to fahrenheit
    int factor;
    factor = 212 - 32;
    
//use conversion factor to convert celsius into fahrenheit values
    int fahrenheit;
    fahrenheit = factor * celsius/100 +32;
    
// output the results, followed by a new line
cout << "Fahrenheit value is:";
    cout << fahrenheit << endl;
    
    // wait until the user is ready before terminating the program
    // to allow the user to see the program results
    system("pause");
    return 0;
}

