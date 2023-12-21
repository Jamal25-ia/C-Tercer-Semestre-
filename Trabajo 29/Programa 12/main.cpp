#include <iostream>

using namespace std;

int main()
{
    char Nombre1[15], Nombre2[15];
    
    cout <<"Hola Bienvenid@ ingresa un nombre  ---> ";
    cin >>Nombre1;
    
    cout <<"Ingresa otro nombre  ---> ";
    cin >>Nombre2;
    
    if(Nombre1[0] == Nombre2[0])
    {
    cout <<"True";
    }
    else
    {
    cout <<"False";  
    }
    
    cin.get();
    cin.get();
    return 1;
}

