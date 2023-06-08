#include <bits/stdc++.h>
using namespace std;
long long int power(int x, int y)
{
    long long int result = x;
    for (int i = 2; i <= y; i++)
    {
        result = result * x;
    }
    return result;
}
int main()
{
    int x,n;
    cin>>x>>n;
    long long int sum = 0;
    if(x == 0)
    {
        sum = 0;
    }
    else if (n == 0)
    {
        sum = 0;
    }
    else
    {
        for (int i = 2; i <= n; i= i+2)
        {
            sum = sum + power(x,i);
        }
    }
    cout<<sum;
    return 0;
}