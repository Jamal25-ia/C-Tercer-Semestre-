#include <iostream>

using namespace std;

int main()
{
    int anio;
    
    cout <<"Hola Bienvenid@ ingresa un a�o  ---> ";
    cin >>anio;
    
    if(anio%4 == 0 && anio%100 != 0 || anio%400 == 0)
    {
    cout <<"Bisiesto";
    }
    else
    {
    cout <<"No es Bisiesto";
    }
    
    cin.get();
    cin.get();
    return 1;
}
