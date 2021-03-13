#include <iostream>
using namespace std;
int main ()
{
    float paga,ore,stipendio,tasse;
    cout<<"Paga oraria:";
    cin>>paga;
    cout<<"ore lavorate";
    cin>>ore;
    stipendio=paga*ore;
    if(stipendio>1000)
    {
                      tasse=stipendio*12/100;
                      stipendio=stipendio-tasse;
                      cout<<"Paghi una tassa di="<<tasse<<endl;
    }
    else
    {
        cout<<"NON PAGHI LE TASSE"<<endl;
        }
    cout<<"stipendio="<<stipendio<<endl;
    system ("pause");
    return 0;
}
