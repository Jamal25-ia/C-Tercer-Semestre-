#include <iostream>

using namespace std;

int main()
{
    float Cantidad_D;
    int Cantidad_E;
    float Resultado;
    
    cout <<"Hola Bienvenid@ ingrese un numero decimal ---> ";
    cin >> Cantidad_D;
    cout <<"Ahora ingrese un numero Entero ---> ";
    cin >> Cantidad_E;
    
    Resultado = Cantidad_D + Cantidad_E;
    cout <<"El resultado de la suma es  ---> "<< Resultado;
    
    cin.get();
    cin.get();
    return 1;
}
