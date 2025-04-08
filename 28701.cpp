#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n, sum = 0, sum2 = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    for (int i = 1; i <= n; i++)
    {
        sum2 += pow(i, 3);
    }

    cout << sum << endl;
    cout << sum * sum << endl;
    cout << sum2 << endl;

    return 0;
}