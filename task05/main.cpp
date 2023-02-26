#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double x;
        cout << "Input value of x: " << endl;
        cin >> x;
        cout << "L = " << 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}