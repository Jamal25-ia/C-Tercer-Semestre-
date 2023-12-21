#include <iostream>
#include <string>

using namespace std;

int main()
{
    int fecha, anio, mes, dia;
    
    cout <<"Hola Bienvenid@ ingresa la fecha en formato DDMMAAAA ---> ";
    cin >>fecha;
    
    anio=fecha%10000;
    mes=(fecha/10000)%100;
    dia=fecha/1000000;
    
    cout <<dia<<"/"<<mes<<"/"<<anio;
    
    cin.get();
    cin.get();
    return 1;
}
