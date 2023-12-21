#include <iostream>

using namespace std;

int main()
{
    char n[10], p[10];
    
    cout <<"Hola Bienvenid@ ingresa tu Nombre de Usuario  ---> ";
    cin >>n;
    
    cout <<"Ingresa la contraseña ---> ";
    cin >>p;
    
    if(strcmp(n,"Gwenevere") == 0 && strcmp(p,"excalibur") == 0)
    {
    cout <<"Puede ingresar a Camelot";
    }
    else
    {
    cout <<"Acceso denegado";
    }
    
    cin.get();
    cin.get();
    return 1;
}
