#include <iostream>

using namespace std;

int main()
{
    int Numero[2];
    int Resultado_Suma;
    int Resultado_Mult;
    
    cout <<"Hola Bienvenid@ ingrese el primer numero ---> ";
    cin >> Numero[0];
    cout <<"Ahora ingrese el segundo numero ---> ";
    cin >> Numero[1];
    
    Resultado_Suma = Numero[0] + Numero[1];
    cout <<"El resultado de la suma de estos dos numeros es ---> "<< Resultado_Suma;
    cout <<"\nAhora ingrese el numero que se multiplicara por la suma anterior ---> ";
    cin >> Numero[2];
    
    Resultado_Mult = Resultado_Suma * Numero[2];
    cout <<"El resultado es ---> "<< Resultado_Mult;
    
    cin.get();
    cin.get();
    return 1;
}
