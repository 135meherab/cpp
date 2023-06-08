#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int count = 0, is_word = 0;
    for ( char c:s)
    {
        if((c>='a' && c<='z')||(c>='A' && c <='Z'))
        {
            if(is_word == 0)
            {
                count++;
            }
            is_word = 1;
        }
        else
        {
            is_word = 0;
        }
        
    }
    
    cout<<count;
    return 0;
}