#include <iostream>

using namespace std;

int main()
{
    float F;
    float C;
    
    cout <<"Hola Bienvenid@ ingrese la temperatura en escala Fahrenheit para convertir a celsius ---> ";
    cin >> F;
    C = (F-32)* 5/9; 
    
    cout <<"En celsius son ---> "<<C;
    
    cin.get();
    cin.get();
    return 1;
}
