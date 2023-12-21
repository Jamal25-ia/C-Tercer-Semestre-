#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int Num, Num2,contador;
    
    cout << "Bienvenid@ ingrese el numero a invertir ---> ";
    cin >> Num;
    while(Num>0)
    {
    Num2 = Num/10;
    contador = contador +1;
    }
    cout << "Numero de digitos ---> "<<contador;
    cin.get();
    cin.get();
    return 1;    
}


