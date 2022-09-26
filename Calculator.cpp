#include <iostream>
using namespace std;

int addition(double a, double b)
{
    double result;

    result = a + b;

    cout << "Result is: " << result << endl << endl;

    return 0;
}

int subtraction(double a, double b)
{
    double result;

    result = a - b;

    cout << "Result is: " << result << endl << endl;

    return 0;
}

int multiplication(double a, double b)
{
    double result;

    result = a  * b;

    cout << "Result is: " << result << endl << endl;

    return 0;
}

int division(double a, double b)
{

   double result;

    result = a / b;

    cout << "Result is:" << result << endl << endl;

    return 0;
}

int menu()
{
    double count;
    while(count != 5)
    {
        cout << "1) Add" << endl;
        cout << "2) Subtract" << endl;
        cout << "3) Multiply" << endl;
        cout << "4) Divide" << endl;
        cout << "5) Quit" << endl << endl;
        cin >> count;

        if(count == 1)
        {
            double number1;
            double number2;

            cout << "Please input two numbers for addition: " << endl;
            cin >> number1 >> number2;
            addition(number1, number2);
        }
        else if(count == 2)
        {
            double number1;
            double number2;

            cout << "Please input two numbers for subtraciton: " << endl;
            cin >> number1 >> number2;
            subtraction(number1, number2);
        }
        else if(count == 3)
        {
            double number1;
            double number2;

            cout << "Please input two numbers for multiplication: " << endl;
            cin >> number1 >> number2;
            multiplication(number1, number2);
        }
        else if(count == 4)
        {
            double number1;
            double number2;

            cout << "Please input two numbers for division: " << endl;
            cin >> number1 >> number2;
            division(number1, number2);
        }
    }

    return 0;
}

int main()
{
    menu();
}