#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

long long a, b, c;
long long p, pp, ppp;

int cal()
{


    while (1)
    {
        cin >> a >> b >> c;

        vector<long long> n = { a, b, c };
        sort(n.begin(), n.end());

        if (n[0] == 0 && n[1] == 0 && n[2] == 0)
        {
            return 0;
        }
        else
        {
            p = pow(n[0], 2);
            pp = pow(n[1], 2);
            ppp = pow(n[2], 2);

            if (p + pp == ppp)
                cout << "right" << endl;
            else
                cout << "wrong" << endl;
        }
    }
}

int main()
{
    cal();
}

