#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s;
    int count[26]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        int value = s-'a';
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        while(count[i]!=0)
        {
            char latter = i + 'a';
            cout<<latter;
            count[i]--;
        }      
    }    
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char s[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>s[i];
//     }
//     sort(s,s+n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<s[i];
//     }
    
//     return 0;
// }