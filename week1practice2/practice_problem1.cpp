#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char nm[], int rl, char sc, int mrk,int cl)
    {
        strcpy(name,nm);
        roll = rl;
        section = sc;
        math_marks = mrk;
        cls = cl;
    }
};

int main()
{
    char r[100]="rahim";
    Student rahim(r,41,'A',85,9);
    char k[100]="karim";
    Student karim(k,45,'B',90,10);
    char s[100]="solimullah";
    Student solim(s,51,'C',75,9);
    if (rahim.math_marks > karim.math_marks && rahim.math_marks> solim.math_marks) cout<<rahim.name;
    else if ( karim.math_marks> solim.math_marks && karim.math_marks> rahim.math_marks) cout<<karim.name;
    else cout<<solim.name;
    return 0;
}