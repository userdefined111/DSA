#include <iostream>
using namespace std;

// 1. Check even or odd
bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// 2. Factorial function
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

// 3. Binomial coefficient nCr
int binomialCoeff(int n, int r)
{
    int num = fact(n);
    int deno = fact(r) * fact(n - r);
    int result = num / deno;
    return result;
}

// 4. Sum of two integers
int sum(int a, int b)
{
    return a + b;
}

// 5. Sum of two double values
double sum(double a, double b)
{
    return a + b;
}

// 6. Sum of three integers
int sum(int a, int b, int c)
{
    return a + b + c;
}

// 7. Check prime number
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// 8. Print all prime numbers from 2 to n
void allPrimes(int n)
{
    cout << "Prime numbers from 2 to " << n << " are: ";
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n, r;
    // isEven function call
    n = 5;
    if (isEven(n))
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }
    // factorial function call
    n = 5;
    cout << "Factorial of " << n << " is: " << fact(n) << endl;
    // binomial coefficient function call
    n = 5;
    r = 2;
    cout << "Binomial coefficient " << n << "C" << r << " is: " << binomialCoeff(n, r) << endl;
    // function overloading examples
    cout << "Sum of 5 and 10 is: " << sum(5, 10) << endl;
    cout << "Sum of 5.5 and 10.5 is: " << sum(5.5, 10.5) << endl;
    cout << "Sum of 5, 10 and 15 is: " << sum(5, 10, 15) << endl;
    // isPrime function call
    n = 17;
    if (isPrime(n))
    {
        cout << n << " is prime" << endl;
    }
    else
    {
        cout << n << " is not prime" << endl;
    }
    // allPrimes function call
    allPrimes(20);
    return 0;
}