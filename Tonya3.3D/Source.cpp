#include "RealC.h"
#include "RealO.h"
#include <iostream>

using namespace std;

int main()
{
    Number inputNumber;
    Number tmp;

    cout << "Enter a number: ";
    cin >> inputNumber;

    RealO realNumber(inputNumber);

    cout << "Number: ";
    cout << realNumber << endl;

    int exponent;
    cout << "Enter an exponent: ";
    cin >> exponent;
    RealO powerResult = power(realNumber, exponent);
    cout << "Power result: " << powerResult.getFlo() << endl;

    RealO logResult = loga(realNumber);
    cout << "Log result: " << logResult.getFlo() << endl;

    tmp = inputNumber + realNumber;
    cout << "Add: " << tmp.getFlo() << endl;

    tmp = inputNumber / realNumber;
    cout << "Division: " << tmp.getFlo() << endl;

    return 0;

}
