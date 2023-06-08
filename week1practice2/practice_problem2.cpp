#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
        int jersy_no;
        char country[20];

};
int main()
{
    char cntry[20]="India";
    Cricketer * dhoni = new Cricketer ;
    dhoni->jersy_no = 18;
    strcpy(dhoni->country,cntry);
    cout<<"before deleting dhoni info: "<<endl;
    cout<<dhoni->jersy_no<<" "<<dhoni->country<<endl;
    Cricketer * kholi = new Cricketer;
    kholi->jersy_no = dhoni->jersy_no;
    strcpy(kholi->country,dhoni->country);
    cout<<"kholi info after copy: "<<endl;
    cout<<kholi->jersy_no<<" "<<kholi->country<<endl;
    delete dhoni;
    cout<<"after deleting dhoni info: "<<endl;
    cout<<dhoni->jersy_no<<" "<<dhoni->country<<endl;
    
    return 0;
}