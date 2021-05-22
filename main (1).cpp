#include <iostream>
using namespace std;

int main()
{

    int s;
    cin >> s;

    while (s--)
    {
        int n;
        cin >> n;
        int a[n], count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n % 2 == 0)
        {
            cout << "no" << endl;
        }
        else if (a[0] != 1 || a[n - 1] != 1)
        {
            cout << "no" << endl;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                if (a[i + 1] - a[i] == 1)
                    count1++;
            }
            for (int i = n / 2; i < n; i++)
            {
                if (a[i] - a[i + 1] == 1)
                    count2++;
            }
            if (count1 == n / 2 && count2 == n / 2)
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}