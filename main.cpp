#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p = 0;
    int t;
    cin >> t;
    while (t--)
    {
        char ch;
        cin >> ch;
        int a;
        cin >> a;
        if (ch == 'P')
        {
            p = p + a;
        }
        else
        {
            int b = a;
            if(b>p)
            {
                cout<<"YES"<<endl;
                p = 0;
            }
            else if(p==b)
            {
                 p = 0;
                cout<<"NO"<<endl;
            }
            else

                 {
                 p = p -b;
                cout<<"NO"<<endl;
            }


        }
    }

    return 0;
}
