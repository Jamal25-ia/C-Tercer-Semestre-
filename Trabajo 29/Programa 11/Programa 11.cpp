#include <iostream>

using namespace std;

int main()
{
    int Num;
    
    cout <<"Hola Bienvenid@ ingresa un numero ---> ";
    cin >>Num;
    Num = Num%2;
    
    if(Num == 0)
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
