#include <iostream>

using namespace std;

int main()
{
    int Num[2];
    
    cout <<"Hola Bienvenid@ mustrando los primeros 10 números de la sucesión de Fibonacci ---> \n";
    
    Num[0]=0;
    Num[1]=1;
    
    for(int x=0; x <= 9;x++)
    {
    cout <<Num[0]<<"\n";
    Num[0] = Num[1] + Num[0];
    Num[1] = Num[0] - Num[1];	
	}
    
    cin.get();
    cin.get();
    return 1;
}
