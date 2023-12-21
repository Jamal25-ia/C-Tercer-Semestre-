#include <iostream>

using namespace std;

int main()
{
    float Numero, Numero_D, Resultado;
    cout <<"Hola Bienvenid@ ingrese el numero el cual quiere restarle el %15 ---> ";
    cin  >> Numero;
    
    Numero_D = Numero * 15 / 100;
    Resultado = Numero - Numero_D;
    
    cout <<"Al numero se le resto el 15% resultado es ---> "<< Resultado;
    
    cin.get();
    cin.get();
    return 1;
}
