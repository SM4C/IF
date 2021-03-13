#include <iostream>
using namespace std;
int main ()
{
    float secondi,tariffa15,tariffa9;
    cout<<"inserisci il numero dei secondi in cui sei stato in chiamata:";
    cin>>secondi;
    if (secondi<=80)
    {
        tariffa15=secondi*0.15+0.1;
        cout<<"il costo della chiamata è:"<<tariffa15<<endl;
    }
    else
    {
        tariffa9=secondi*0.9+0.1;
        cout<<"il costo della chiamata è:"<<tariffa9<<endl;
    }
    system ("pause");
    return 0;
}
