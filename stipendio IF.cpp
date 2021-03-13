#include <iostream>
using namespace std;
int main ()
{
    float paga,orario,stipendio,tassa,roba;
    cout<<"inserire la paga";
    cin >> paga;
    cout<<"inserire l'orario";
    cin >> orario;
    stipendio=paga*orario;
    cout << "lo stipendio è:" << stipendio << endl;
    if(stipendio>1000);
    {
                 roba=stipendio*0.88;
    }    
    cout << "la tassa da sottrarre è:" << roba << endl;
    system ("pause");
    return 0;
}
