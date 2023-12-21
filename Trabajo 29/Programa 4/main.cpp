#include <iostream>

using namespace std;

int main()
{   
    int KM_recorridos;
    float Combustible;
    float Resultado;
    
    cout <<"Hola Bienvenid@ ingrese la cantidad de kilometros recorridos por una moto ---> ";
    cin >> KM_recorridos;
    cout <<"Ahora ingrese la cantidad de litros de combustible que consume durante ese recorrido ---> ";
    cin >> Combustible;
    
    Resultado = KM_recorridos / Combustible;
    cout <<"El consumo por kilometro es de ---> "<< Resultado;
    
    cin.get();
    cin.get();
    return 1;
}
