#include <iostream>
using namespace std;

int c, n, t = 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (1)
    {
        cin >> c;

        if (c == 0)
            break;
        else
        {
            for (int i = 0; i < c; i++)
            {
                cin >> n;
            }
            cout << "Case " << t << ": " << "Sorting... done!" << endl;
            t += 1;
        }
    }

    return 0;
}