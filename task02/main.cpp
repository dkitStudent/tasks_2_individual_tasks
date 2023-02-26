#include <iostream>
#include <cmath>
#include "Test.h"

using namespace std;

int main()
{
    try
    {
        Test t;
        int a, b;
        cout << "Input value of a: " << endl;
        cin >> a;
        cout << "Input value of b: " << endl;
        cin >> b; 
        cout << "Task 1 = " << t.Task1(a, b) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}