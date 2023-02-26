#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y, k, x;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "Input value of k: " << endl;
        cin >> k;
        cout << "Input value of x: " << endl;
        cin >> x; 
        cout << "U = " << 3 * exp(y) + 7.355 * pow(k, 2) + pow(sin(x), 2) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}