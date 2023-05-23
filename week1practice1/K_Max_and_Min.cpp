#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn,mx;
    if(a>=b && a>=c) mx = a;
    if(b>=c && b>=a) mx = b;
    if(c>=a && c>=b) mx = c;
    if(a<=b && a<=c) mn = a;
    if(b<=c && b<=a) mn = b;
    if(c<=a && c<=b) mn = c;
    
    cout<<mn<<" "<<mx;
    return 0;
}