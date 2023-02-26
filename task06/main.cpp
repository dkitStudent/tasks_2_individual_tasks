#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, x;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of x: " << endl;
        cin >> x; 
        cout << "M = " << cos(2 * y) + 3.6 * exp(x) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}