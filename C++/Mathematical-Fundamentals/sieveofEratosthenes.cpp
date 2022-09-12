#include <iostream>

using namespace std;

const int Nmax = 100001; //defining Nmax

bool isPrime[Nmax];

void sieveofEratosthenes(int limit)
{
    for (int i = 2; i <= limit; i++) //changing all nos prime
        isPrime[i] = true;
    for (int i = 2; i <= limit / 2; i++) // chekcing for prime nos.
        if (isPrime[i])
            for (int j = i * 2; j <= limit; j += i)
                isPrime[j] = false;
}

int main()
{
    sieveofEratosthenes(100);
    for (int i = 2; i <= 100; i++)
        if (isPrime[i] == true)
            cout << i << " ";
    return 0;
}