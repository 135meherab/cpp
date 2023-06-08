#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        int cnt_even = 0, cnt_odd = 0;
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        for (int j = 0; j < n; j++)
        {
            (a[j]%2==0) ? cnt_even++:cnt_odd++;
        }
        int mn = min(cnt_even,cnt_odd);
        int equal = n/2;
        
        if (n%2!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            if(cnt_even == cnt_odd) cout<<"0"<<endl;
            else cout<<equal-mn<<endl;
        }
    }
    
    return 0;
}