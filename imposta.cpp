#include <iostream>
using namespace std; 
int main()
{
   float imposta, reddito;
   cout<<"reddito=";
   cin>>reddito;
   imposta=0;
   if (reddito>5000)
{
	if(reddito>30000)
	{
		imposta=imposta+25000*27/100+(reddito-30000)*39/100;
	
	}
	else
	{
		imposta=imposta+(reddito-5000)*27/100;
	}
	cout<<"imposta dovuta="<<imposta<<endl;
}
else
{
	cout<<"non paghi le tasse"<<endl;
}
    system ("pause");
    return 0;
}
