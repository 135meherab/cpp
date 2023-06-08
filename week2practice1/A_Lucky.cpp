#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int k = 1; k <= t ; k++)
    {
        string s;
        cin>>s;
        int num,sum1=0,sum=0;
        for (int i = 0; i < 6; i++)
        {
            num = s[i]-48;
            if (i<3)
            {
                sum = sum + num;
            }
            else
            {
                sum1 = sum1 + num;
            }
            }
        (sum == sum1)? cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    
    
    return 0;
}