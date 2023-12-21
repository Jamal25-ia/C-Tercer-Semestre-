#include <iostream>

using namespace std;

int main()
{
    int Num, i= 1;
    
    cout <<"Hola Bienvenid@ ingresa un numero  ---> ";
    cin >>Num;
    
    while(i!=Num+1)
    {
    cout <<i<<"\n";
    i++;
    }
    
    cin.get();
    cin.get();
    return 1;
}

