#include <iostream>
using namespace std;
int main ()
{
    float numerobiglietti,sconto10,sconto15,importo;
    cout<< "inserisci il nuemero di biglietti da comprare:";
    cin>>numerobiglietti;
    cout<<"inserici l'importo del biglietto";
    cin>>importo;
    if (numerobiglietti>=3)
    {
        if (numerobiglietti>10)
        {
            sconto15=importo-(importo*15/100);
            cout<<"sconto del 15%:"<<sconto15<<endl;
        }
        else
        {
            sconto10=importo-(importo*10/100);
            cout<<"prezzo scontato al 10%:"<<sconto10<<endl;
        }
    }
    else
    {
        cout<<"nessuno sconto applicabile"<<endl;
    }
    system ("pause");
    return 0;
}
