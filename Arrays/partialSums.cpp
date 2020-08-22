#include <iostream>

using namespace std;

const int Nmax = 100001; //defining Nmax

int s[Nmax];

void partialSums(int a[], int n)
{
    s[1] = a[1];
    for (int i = 2; i <= n; i++)
        s[i] = s[i - 1] + a[i];
}
long long Query(int x, int y)
{
    return s[y] - s[x - 1];
}

int main()
{
    int n = 10, a[100];

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    partialSums(a, n);
    cout << Query(2, 6);
    return 0;
}