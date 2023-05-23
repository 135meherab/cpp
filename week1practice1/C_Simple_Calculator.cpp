#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,sum,sub,mul;
    cin>>a>>b;
    sum = a + b;
    sub = a - b;
    mul = a * b;
    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    cout<<a<<" * "<<b<<" = "<<mul<<endl;
    cout<<a<<" - "<<b<<" = "<<sub<<endl;
    return 0;
}