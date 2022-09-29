#include <iostream>
#include <fstream>
using namespace std;

int file_history()
{
    fstream my_file;
    string line;

    cout << endl;

    my_file.open("history.txt", ios::in);
    if (!my_file)
    {
        cout << "File not Created.";
    }
    else
    {
        char info;
        while(getline(my_file,line))
        {
            cout << line << endl;
        }
        my_file.close();
    }
    cout << endl;
    return 0;
}
int file_clear()
{
    fstream my_file;
    my_file.open("history.txt", ios::out);
    if (!my_file)
    {
        cout << "File not Created.";
    }
    else
    {
        my_file << "";
        my_file.close();
    }
    return 0;

}
int file_write(double result, double a, double b, string mathfunc)
{
    fstream my_file;
    my_file.open("history.txt", ios::app);
    if (!my_file)
    {
        cout << "File not Created.";
    }
    else
    {
        my_file << a << " " + mathfunc + " " << b << " = " << result << endl;
        my_file.close();
    }
    return 0;
}
int addition(double a, double b)
{
    double result;

    result = a + b;

    cout << "Result is: " << result << endl << endl;

    file_write(result, a, b, "+");
    return 0;
}

int subtraction(double a, double b)
{
    double result;

    result = a - b;

    cout << "Result is: " << result << endl << endl;

    file_write(result, a, b, "-");
    return 0;
}

int multiplication(double a, double b)
{
    double result;

    result = a  * b;

    cout << "Result is: " << result << endl << endl;

    file_write(result, a, b, "X");
    return 0;
}

int division(double a, double b)
{

   double result;

    result = a / b;

    cout << "Result is: " << result << endl << endl;

    file_write(result, a, b, "/");
    return 0;
}

int menu()
{
    double count;
    while(count != 0)
    {
        cout << "1) Add" << endl;
        cout << "2) Subtract" << endl;
        cout << "3) Multiply" << endl;
        cout << "4) Divide" << endl;
        cout << "0) Quit" << endl << endl;
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
    double count;
    while(count != 0)
    {
        cout << "1) Mathmatical functions" << endl;
        cout << "2) See history" << endl;
        cout << "3) Clear history" << endl;
        cout << "0) quit" << endl << endl;

        cin >> count;

        if(count == 1)
        {
            menu();

        }
        if(count == 2)
        {
            file_history();
        }
        if(count == 3)
        {
            file_clear();
        }
    }
}