#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    ss>>word;
    for (int i = 0,j = word.size()-1; i < j; i++,j--)
        {
            char tmp = word[i];
            word[i]=word[j];
            word[j]= tmp;
        }
    cout<<word;
    while(ss>>word)
    {
        
        for (int i = 0,j = word.size()-1; i < j; i++,j--)
        {
            char tmp = word[i];
            word[i]=word[j];
            word[j]= tmp;
        }
        cout<<" "<<word;
    }
    return 0;
}