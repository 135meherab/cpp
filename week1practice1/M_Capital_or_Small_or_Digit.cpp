#include <bits/stdc++.h>
using namespace std;
int main()
{
    char mychar;
    cin>>mychar;
    if(mychar >= '0' && mychar <= '9')
    {
        cout<<"IS DIGIT";
    }
    else
    {
        cout<<"ALPHA"<<endl;
        if(mychar >= 'A' && mychar <= 'Z')
        {
            cout<<"IS CAPITAL";
        }
        else
        {
            cout<<"IS SMALL";
        }
    }
    return 0;
}