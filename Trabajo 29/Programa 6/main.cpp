#include <iostream>

using namespace std;

int main()
{
    float Numero[3];
    float Suma, Resultado;
    
    cout <<"Hola Bienvenid@ ingrese el primer numero ---> ";
    cin >> Numero[0];
    cout <<"Ahora ingrese el segundo numero ---> ";
    cin >> Numero[1];
    cout <<"Ahora ingrese el tercer numero ---> ";
    cin >> Numero[2];
    
    Suma = Numero[0] + Numero[1] + Numero[2];
    Resultado = Suma/3;
    
    cout <<"El promedio de estos tres numeros es: ---> "<< Resultado;
    
    cin.get();
    cin.get();
    return 1;
}
