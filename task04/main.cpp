#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double a, t;
        cout << "Input value of a: " << endl;
        cin >> a;
        cout << "Input value of t: " << endl;
        cin >> t;
        cout << "D = " << 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5)) << endl;
    }
    catch (const std::exception &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}