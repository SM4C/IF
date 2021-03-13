#include <iostream>
using namespace std;
int main ()
{
    float mc, costo4, costo10, costo8;
    cout<<"\e[1minserisci i metri cubi utilizzati di gas: ";
    cin>>mc;
    if (mc<10)
    {
        if (mc<4)
        {
            costo4=mc*0.50;
            cout<<"il costo della bolletta è: "<<costo4<<endl;
        }
    }
    else
    {
        if (mc>10)
        {
            costo8=mc*0.80;
            cout<<"il costo della bolletta è: "<<costo8<<endl;
        }
        else
        {
            costo10=mc*0.70;
            cout<<"il costo della bolletta è: "<<costo10<<endl;
        }
    }
    system ("pause");
    return 0;
}
