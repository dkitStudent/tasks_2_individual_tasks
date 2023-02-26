#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double t, l;
        cout << "Input value of t: " << endl;
        cin >> t;
        cout << "Input value of l: " << endl;
        cin >> l; 
        cout << "R = " << 3 * pow(t, 2) + 3 * pow(l, 5) + 4.9 << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}