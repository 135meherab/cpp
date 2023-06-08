#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char s, e;
    cin>>a>>s>>b>>e>>c;
    int sum = a + b, sub = a - b, mul = a * b;
    if (s == '+')
    {
        (sum == c) ? cout<<"Yes":cout<<sum;
    }
    else if ( s == '-')
    {
        (sub == c)? cout<<"Yes": cout<<sub;
    }
    else
    {
        (mul == c) ? cout<<"Yes": cout<<mul;
    }
    return 0;
}