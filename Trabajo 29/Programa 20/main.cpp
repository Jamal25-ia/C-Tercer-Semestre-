#include <iostream>

using namespace std;

int main()
{
    int Num, Fact = 1, i;
    
    cout <<"Hola Bienvenid@ ingrese un numero ---> ";
    cin >>Num;
    
    if(Num < 0) {Fact =0;}
    else if (Num==0) {Fact=1;}
    else {
    for (i = 1; i <= Num; i++){
    Fact = Fact*i;
    }
    }
	
    cout <<"Factorial: "<<Fact;
    
    cin.get();
    cin.get();
    return 1;
}
