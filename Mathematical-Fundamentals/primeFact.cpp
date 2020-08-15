#include <iostream>

using namespace std;

int f[100], expo[100], len; // global variables

void primeFact(int n)
{
    if (n == 1) //for corner case 1
    {
        len++;
        f[len] = 2;
        expo[len] = 0;
    }
    int d = 2;
    while (n > 1 && d * d <= n) // checking for prime factors and checking if the no is already prime
    {
        int k = 0;
        while (n % d == 0)
        {
            k++;
            n /= d;
        }
        if (k > 0) //if the given no is not prime
        {
            len++;
            f[len] = d;
            expo[len] = k;
        }
        d++;
    }
    if (n > 1) // if the given no is prime
    {
        len++;
        f[len] = n;
        expo[len] = 1;
    }
}

int main()
{
    primeFact(1);                  //Sending value to the function
    for (int i = 1; i <= len; i++) //Printing Output
    {
        cout << f[i] << "^" << expo[i] << "\n";
    }
    return 0;
}