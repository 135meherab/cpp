#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int k = 1; k <= t; k++)
    {
        int n;
        cin>>n;
        int a[n];
        int mn = INT_MAX, sum;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                sum = a[i]+ a[j]+ (j-i);
                mn = min(mn,sum);
                
            }
            
        }
        cout<<mn<<endl;
        }
    
    
    return 0;
}