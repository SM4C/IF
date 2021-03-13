#include <iostream>
using namespace std;
int main ()
{
    float x; 
    int a, valore_finale;
    cout<<"inserisci un numero con la virgola";
    cin>>x;
    a=int(x);
    if(x-a<=0.50)
    {
                 valore_finale=a+1;
                 cout<<"valore_finale"<<valore_finale<<endl;
            }
            else
            {
                 valore_finale=a;
                 cout<<"valore_finale"<<valore_finale<<endl;
            }
    system ("pause");
    return 0;
}
