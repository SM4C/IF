#include <iostream>
using namespace std;
int main ()
{
    int voto1, voto2, voto3;
    string p1, p2, p3;
    cout<<"inserisci il nome del primo partito: ";
    cin>> p1;
    cout<<"inserisci il nome del secondo partito: ";
    cin>> p2;
    cout<<"inserisci il nome del terzo partito: ";
    cin>> p3;
    cout<<"inserisci i voti ottenuti dal primo partito: ";
    cin>> voto1;
    cout<<"inserisci i voti ottenuti dal secondo partito: ";
    cin>> voto2;
    cout<<"inserisci i voti ottenuti dal terzo partito: ";
    cin>> voto3;
    if (voto1>voto2>voto3)
    {
        cout<<"il vincitore dell'elezioni è "<<p1<<"con numero voti: "<<voto1<<endl;
        cout<<"il vincitore dell'elezioni è "<<p2<<"con numero voti: "<<voto2<<endl;
        cout<<"il vincitore dell'elezioni è "<<p3<<"con numero voti: "<<voto3<<endl;
    }
    if (voto1>voto3>voto2)
    {
        cout<<"il vincitore dell'elezioni è "<<p1<<"con numero voti: "<<voto1<<endl;
        cout<<"il vincitore dell'elezioni è "<<p3<<"con numero voti: "<<voto3<<endl;
        cout<<"il vincitore dell'elezioni è "<<p2<<"con numero voti: "<<voto2<<endl;
    }
    if (voto3>voto2>voto1)
    {
        cout<<"il vincitore dell'elezioni è "<<p3<<"con numero voti: "<<voto3<<endl;
        cout<<"il vincitore dell'elezioni è "<<p2<<"con numero voti: "<<voto2<<endl;
        cout<<"il vincitore dell'elezioni è "<<p1<<"con numero voti: "<<voto1<<endl;
    }
    if (voto3>voto1>voto2)
    {
        cout<<"il vincitore dell'elezioni è "<<p3<<"con numero voti: "<<voto3<<endl;
        cout<<"il vincitore dell'elezioni è "<<p1<<"con numero voti: "<<voto1<<endl;
        cout<<"il vincitore dell'elezioni è "<<p2<<"con numero voti: "<<voto2<<endl;
    }
    if (voto2>voto1>voto3)
    {
        cout<<"il vincitore dell'elezioni è "<<p2<<"con numero voti: "<<voto2<<endl;
        cout<<"il vincitore dell'elezioni è "<<p1<<"con numero voti: "<<voto1<<endl;
        cout<<"il vincitore dell'elezioni è "<<p3<<"con numero voti: "<<voto3<<endl;
    }
    if (voto2>voto3>voto1)
    {
        cout<<"il vincitore dell'elezioni è "<<p2<<"con numero voti: "<<voto2<<endl;
        cout<<"il vincitore dell'elezioni è "<<p3<<"con numero voti: "<<voto3<<endl;
        cout<<"il vincitore dell'elezioni è "<<p1<<"con numero voti: "<<voto1<<endl;
    }
    system ("pause");
    return 0;
}
