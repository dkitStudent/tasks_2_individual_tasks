#include <iostream>
#include "Fraction.h"


using namespace std;

int main()
{
    try
    {
        Fraction frac;
        unsigned int first, second;
        cout << "First value: " && cin >> first;
        cout << "Second value: " && cin >> second;

        cout << "Extracted number: " <<  frac.ExtractIntegerNumber(first, second) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}