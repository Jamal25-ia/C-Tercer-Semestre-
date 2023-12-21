#include <iostream>

using namespace std;

int main()
{
    int num, ultimoDigito, total=0;
    cout <<"Hola Bienvenid@ Escribe un numero: ---> ";
    cin >>num;
    
    while(num != 0)
    {
    ultimoDigito=num%10;
    total=total+ultimoDigito;
    num=num/10;
    }
    cout<<"Suma de los digitos: "<<total;
    
    cin.get();
    cin.get();
    return 0;
}
