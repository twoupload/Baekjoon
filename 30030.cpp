/*
원가 x, 부가세 10%
가격 xx = x + x * 0.1 = x * 1.1 = x * (11 / 10)
가격 xx가 주어졌을때, 원가 x = xx * (10 / 11)
*/

#include <iostream>
using namespace std;

int n;
int ori;

int main()
{
    cin >> n;

    ori = n * 10 / 11;

    cout << ori;

    return 0;
}