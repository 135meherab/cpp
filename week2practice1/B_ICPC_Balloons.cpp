#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n, sum = 0;
        cin>>n;
        char s[n];
        cin>>s;
        int count[26] = {0};
        for (int j = 0; j < n; j++)
        {
            int value = s[j] - 'A';
            if(count[value]==0)
            {
                sum = sum + 2;
                count[value]++;
            }
            else
            {
                sum = sum + 1;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}