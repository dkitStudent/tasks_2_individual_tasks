#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    try
    {
        double n, y;
        cout << "Input value of n: " << endl;
        cin >> n;
        cout << "Input value of y: " << endl;
        cin >> y; 
        cout << "G = " << n * (y + 3.5) + sqrt(y) << endl;
    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}