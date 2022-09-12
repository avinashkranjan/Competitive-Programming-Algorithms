#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1) //checking if no is 1 or less than 1
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) //checking for factors other than 1 and itself
    {
        if (n % i == 0)
            return false;
    }
    return true; // Returning True if the above funtions didn't execute
}

int main()
{
    cout << isPrime(7); // sending value to function to check
    return 0;
}