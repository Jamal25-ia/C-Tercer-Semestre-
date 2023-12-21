#include <iostream>

using namespace std;

int main()
{
    char a[20];
    char b[20];
    
    cout <<"Hola Bienvenid@ ingresa una palabra ---> ";
    cin >> a;
    cout <<"Ahora ingresa otra palabra ---> ";
    cin >> b;
    
    cout<< a<<" "<< b;  
    
    cin.get();
    cin.get();
    return 1;
}
