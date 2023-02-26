#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double m;
        cout << "Input value of m: " << endl;
        cin >> m;
        cout << "N = " << pow(m, 2) + 2.8 * fabs(m) + 0.55 << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}