#include <iostream>

using namespace std;

int main()
{
    int Num[3];
    
    cout <<"Hola Bienvenid@ ingresa un numero  ---> ";
    cin >>Num[0];
    
    cout <<"Ingresa el segundo numero  ---> ";
    cin >>Num[1];
    
    cout <<"Ingresa el tercer numero  ---> ";
    cin >>Num[2];
    
    if(Num[0] < Num[1] && Num[0] < Num[2])
    {
    cout <<"Menor es: "<<Num[0];
    }
    else if(Num[1] < Num[0] && Num[1] < Num[2])
    {
    cout <<"Menor es: "<<Num[1];
    }
    else if(Num[2] < Num[0] && Num[2] < Num[1])
    {
    cout <<"Menor es: "<<Num[2];  
    }
    
    cin.get();
    cin.get();
    return 1;
}
