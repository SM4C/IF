#include <iostream>
using namespace std;
int main ()
{
    int sala, interi, u18, o65, prezzo1, prezzo2;
    cout<<"inserisci il numero della sala: ";
    cin>>sala;
    cout<<"Inserisci il numero di persone sotto i 18 anni: ";
    cin>>u18;
    cout<<"inserisci numero bigliettti interi: ";
    cin>>interi;
    cout<<"inserisci il numero di persone supra i 65 anni: ";
    cin>>o65;
    if (sala==1)
    {
        prezzo1=(u18+o65)*6+(interi*8);
        cout<<"il costo complessivo è: "<<prezzo1<<endl;
    }
    else
    {
        prezzo2=(u18+o65)*7+(interi*10);
        cout<<"il costo complessivo è: "<<prezzo2<<endl;
    }
    system ("pause");
    return 0;
}
