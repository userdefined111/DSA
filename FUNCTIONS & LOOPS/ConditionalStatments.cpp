#include <iostream>
using namespace std;

// 1. Check greater number between two numbers
void greaterOfTwoNumbers()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << "First number is greater: " << a << endl;
    }
    else if (b > a)
    {
        cout << "Second number is greater: " << b << endl;
    }
    else
    {
        cout << "Both numbers are equal" << endl;
    }
}

// 2. Check even or odd
void evenOrOdd()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}

// 3. Calculate income tax
void incomeTax()
{
    int income;

    cout << "Enter your income in lakhs: ";
    cin >> income;

    if (income < 5)
    {
        cout << "No tax" << endl;
    }
    else if (income >= 5 && income < 10)
    {
        cout << "20% tax is: " << income * 0.2 << " lakhs" << endl;
    }
    else
    {
        cout << "30% tax is: " << income * 0.3 << " lakhs" << endl;
    }
}

// 4. Find largest of three numbers
void largestOfThreeNumbers()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "A is the largest number: " << a << endl;
    }
    else if (b > c)
    {
        cout << "B is the largest number: " << b << endl;
    }
    else
    {
        cout << "C is the largest number: " << c << endl;
    }
}

// 5. Check adult using ternary operator
void checkAdult()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    bool isAdult = age >= 18 ? true : false;

    cout << "Is adult: " << isAdult << endl;
}

// 6. Print day name using switch
void printDayName()
{
    int day;

    cout << "Enter day number from 1 to 7: ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tuesday" << endl;
        break;

    case 3:
        cout << "Wednesday" << endl;
        break;

    case 4:
        cout << "Thursday" << endl;
        break;

    case 5:
        cout << "Friday" << endl;
        break;

    case 6:
        cout << "Saturday" << endl;
        break;

    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid day number" << endl;
    }
}

// 7. Calculator
void calculator()
{
    int a, b;
    char op;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+')
    {
        cout << "a + b = " << a + b << endl;
    }
    else if (op == '-')
    {
        cout << "a - b = " << a - b << endl;
    }
    else if (op == '*')
    {
        cout << "a * b = " << a * b << endl;
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            cout << "a / b = " << a / b << endl;
        }
        else
        {
            cout << "Cannot divide by zero" << endl;
        }
    }
    else
    {
        cout << "Invalid operator" << endl;
    }
}

// 8. Check positive, negative, or zero
void positiveNegativeZero()
{
    int a;

    cout << "Enter a number: ";
    cin >> a;

    if (a > 0)
    {
        cout << "Number is positive" << endl;
    }
    else if (a < 0)
    {
        cout << "Number is negative" << endl;
    }
    else
    {
        cout << "Number is zero" << endl;
    }
}

// 9. Check leap year
void leapYear()
{
    int year;

    cout << "Enter year: ";
    cin >> year;

    if (year % 400 == 0)
    {
        cout << "It is a leap year" << endl;
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "It is a leap year" << endl;
    }
    else
    {
        cout << "It is not a leap year" << endl;
    }
}

// 10. Check Armstrong number
void armstrongNumber()
{
    int n;

    cout << "Enter a 3 digit number: ";
    cin >> n;

    int num = n;

    int d1 = num % 10;
    num = num / 10;

    int d2 = num % 10;
    num = num / 10;

    int d3 = num;

    int cubeSum = (d1 * d1 * d1) + (d2 * d2 * d2) + (d3 * d3 * d3);

    if (cubeSum == n)
    {
        cout << "It is an Armstrong number" << endl;
    }
    else
    {
        cout << "It is not an Armstrong number" << endl;
    }
}

int main()
{
    int choice;

    cout << "Choose an operation:" << endl;
    cout << "1. Greater of two numbers" << endl;
    cout << "2. Even or odd" << endl;
    cout << "3. Income tax" << endl;
    cout << "4. Largest of three numbers" << endl;
    cout << "5. Check adult" << endl;
    cout << "6. Print day name" << endl;
    cout << "7. Calculator" << endl;
    cout << "8. Positive, negative, or zero" << endl;
    cout << "9. Leap year" << endl;
    cout << "10. Armstrong number" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        greaterOfTwoNumbers();
        break;

    case 2:
        evenOrOdd();
        break;

    case 3:
        incomeTax();
        break;

    case 4:
        largestOfThreeNumbers();
        break;

    case 5:
        checkAdult();
        break;

    case 6:
        printDayName();
        break;

    case 7:
        calculator();
        break;

    case 8:
        positiveNegativeZero();
        break;

    case 9:
        leapYear();
        break;

    case 10:
        armstrongNumber();
        break;

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}

// Question6:
// typedef: keyword in C++ is used for aliasing existing datatypes, user-defined datatypes, and pointers to a more meaningful name.
//  Eg: typedef int myInt
// This allows us to declare new integers using myInt, instead of int.

// Macros: can be of any type. Macros can even be any code block containing statements, loops, function calls etc. They are expanded by the preprocessor before compilation takes place.
//  const keyword is used to define the constant value that cannot changed during program execution.