#include "Tasks.h"
#include <cmath>

double Tasks::Task1(double& a, double&b )
{
    return pow(a, b);
}
double Tasks::Task2(double& a, double& b)
{
    return pow(a, b);
}
int Tasks::Task3(unsigned int& a, unsigned int&b )
{
    if (b == 0)
    {
        return -1;
    }
    return a / b;
}
unsigned int Tasks::Task4(unsigned int& denomination, unsigned int& count)
{
    return denomination * count;
}

double Tasks::Task5(double &price, unsigned int& count)
{
    return price * count;
}
double Tasks::Task6(unsigned &calorificalValue, double& mass)
{
    double massInGm = mass / 1000;
    return massInGm / 100 * calorificalValue;
}
bool Tasks::Task7(double& a, double& b, double& number)
{
    return number >= a && number <= b;
}