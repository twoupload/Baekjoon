#include <iostream>
using namespace std;

int n;
long long sum = 1;

int main()
{
    cin >> n;

    if(n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            sum *= i;
        }
    }

    cout << sum;

    return 0;
}