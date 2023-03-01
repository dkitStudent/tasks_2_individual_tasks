#include <iostream>
#include <string>
#include "Tasks.h"


using namespace std;

int main()
{
    try
    {
        Tasks tasks;

        //1st task
        {
            double first, second;
            cout << "First value: " && cin >> first;
            cout << "Second value: " && cin >> second;

            cout << "The answer is: " <<  tasks.Task1(first, second) << endl;
        }

        //2st task
        {
            double first, second;
            cout << "First value: " && cin >> first;
            cout << "Second value: " && cin >> second;

            cout << "The answer is: " <<  tasks.Task2(first, second) << endl;
        }
        //3rd task
        {
            unsigned int first, second;
            cout << "First value: " && cin >> first;
            cout << "Second value: " && cin >> second;

            cout << "Extracted number: " <<  tasks.Task3(first, second) << endl;
        }
        //4th task
        {
            unsigned int denomination, count;
            const unsigned int DENOMINATIONS_COUNT = 7;
            int denominations[DENOMINATIONS_COUNT] = {50, 100, 500, 1000, 2000, 5000};
            cout << "Denomination: " && cin >> denomination;
            cout << "Count: " && cin >> count;
            bool isDenominationCorrect = false;
            for (int i = 0; i < DENOMINATIONS_COUNT; i++)
            {
                if (denomination == denominations[i])
                {
                    cout << "Sum of money is: " << tasks.Task4(denomination, count) << endl;
                    isDenominationCorrect = true;
                    break;
                }
            }
            if (!isDenominationCorrect)
            {
                cout << "Wrong denomination!!" << endl; 
            }  
        }
        //5th task
        {
            double price;
            unsigned int count;
            cout << "Enter price: " && cin >> price;
            cout << "Enter count: " && cin >> count;

            cout << "Total cost is: " << tasks.Task5(price, count) << endl;
        }
        //6th task
        {
            unsigned int calorificValue;
            double mass;

            cout << "Enter calorific value: " && cin >> calorificValue;
            cout << "Enter mass: " && cin >> mass;

            cout << "Total calorific value is: " << tasks.Task6(calorificValue, mass) << endl;
        }
        //7th task
        {
            double leftEnd, rightEnd, userInput;
            cout << "Enter left end of range: " && cin >> leftEnd;
            cout << "Enter right end of range: " && cin >> rightEnd;

            cout << "Enter your number: " && cin >> userInput;

            string output;
            cout << tasks.Task7(leftEnd, rightEnd, userInput) << endl;

        }

    }
    catch(const std::exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    system("pause");
    return 0;
}