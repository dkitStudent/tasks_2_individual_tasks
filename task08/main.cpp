#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double y;
        cout << "Input value of y: " << endl;
        cin >> y;
        cout << "T = " << sqrt(fabs(6 * pow(y, 2) - 0.1 * y + 4)) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}