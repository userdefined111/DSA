#include <iostream>
using namespace std;

// 1. Sum of first n natural numbers
void sumOfNaturalNumbers()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "The sum is: " << sum << endl;
}

// 2. Print numbers from 10 to 25
void printNumbers10To25()
{
    int i = 10;

    while (i <= 25)
    {
        cout << i << " ";
        i++;
    }

    cout << endl;
}

// 3. Print star pattern
void starPattern()
{
    int n;

    cout << "Enter the number of lines: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// 4. Sum of odd digits of a number
void sumOfOddDigits()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int digitSum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;

        if (lastDigit % 2 != 0)
        {
            digitSum = digitSum + lastDigit;
        }

        n = n / 10;
    }

    cout << "The sum of odd digits is: " << digitSum << endl;
}

// 5. Factorial of a number
void factorialOfNumber()
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    int factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    cout << "The factorial is: " << factorial << endl;
}

// 6. Reverse number by printing digits
void reverseNumberByPrinting()
{
    int n;

    cout << "Enter the number to reverse: ";
    cin >> n;

    cout << "Reversed number is: ";

    while (n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit;
        n = n / 10;
    }

    cout << endl;
}

// 7. Reverse number and store result
void reverseNumberStored()
{
    int n;

    cout << "Enter the number to reverse: ";
    cin >> n;

    int result = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        result = result * 10 + lastDigit;
        n = n / 10;
    }

    cout << "Reversed number is: " << result << endl;
}

// 8. Do while loop example
void doWhileExample()
{
    int n = 1;

    do
    {
        cout << "Hello world in do-while loop" << endl;
    } while (n > 5);
}

// 9. Continue example, skip numbers ending with 0
void continueExample()
{
    int n;

    while (true)
    {
        cout << "Enter the number: ";
        cin >> n;

        if (n % 10 == 0)
        {
            continue;
        }

        cout << "The number is: " << n << endl;
    }
}

// 10. Check prime number
void checkPrimeNumber()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if (n <= 1)
    {
        isPrime = false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << n << " is a prime number" << endl;
    }
    else
    {
        cout << n << " is not a prime number" << endl;
    }
}

// 11. Multiplication table
void multiplicationTable()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Multiplication table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

// 12. Fibonacci series
void fibonacciSeries()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    int first = 0;
    int second = 1;
    if (n <= 0)
    {
        cout << "Invalid input" << endl;
    }
    else if (n == 1)
    {
        cout << first << endl;
    }
    else
    {
        cout << first << " " << second << " ";
        for (int i = 2; i < n; i++)
        {
            int third = first + second;
            cout << third << " ";
            first = second;
            second = third;
        }
        cout << endl;
    }
}

int main()
{
    int choice;

    cout << "Choose an operation:" << endl;
    cout << "1. Sum of first n natural numbers" << endl;
    cout << "2. Print numbers from 10 to 25" << endl;
    cout << "3. Star pattern" << endl;
    cout << "4. Sum of odd digits" << endl;
    cout << "5. Factorial" << endl;
    cout << "6. Reverse number by printing digits" << endl;
    cout << "7. Reverse number and store result" << endl;
    cout << "8. Do-while loop example" << endl;
    cout << "9. Continue example" << endl;
    cout << "10. Check prime number" << endl;
    cout << "11. Multiplication table" << endl;
    cout << "12. Fibonacci series" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        sumOfNaturalNumbers();
        break;
    case 2:
        printNumbers10To25();
        break;
    case 3:
        starPattern();
        break;
    case 4:
        sumOfOddDigits();
        break;
    case 5:
        factorialOfNumber();
        break;
    case 6:
        reverseNumberByPrinting();
        break;
    case 7:
        reverseNumberStored();
        break;
    case 8:
        doWhileExample();
        break;
    case 9:
        continueExample();
        break;
    case 10:
        checkPrimeNumber();
        break;
    case 11:
        multiplicationTable();
        break;
    case 12:
        fibonacciSeries();
        break;
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}