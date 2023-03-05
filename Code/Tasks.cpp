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

bool Tasks::Task8(double& a, double& b, double& number)
{
    return number >= a && number < b;
}

unsigned int Tasks::Task9(unsigned int& hours, unsigned int& minutes)
{
    return hours * 60 + minutes;
}

double Tasks::Task10(double& x, double& y)
{
    return sqrt(pow(y, 2) + pow(y, 2));
}

double Tasks::Task11(double& salary, unsigned int& days)
{
    return salary / 30 * days;
}

double Tasks::Task12(unsigned int& duration, double& cost)
{
    return duration * cost;
}

double Tasks::Task13(int& integerPart, unsigned int& fractionalPart, double& number)
{
    double wholeNumber = integerPart + fractionalPart / pow(10, int(log10(fractionalPart) + 1));
    return wholeNumber * number;
}