#include <iostream>

using namespace std;

int main()
{
    int ShowM;
    
    cout <<"Hola Bienvenid@ ingresa cuántos shows musicales ha visto en el último año  ---> ";
    cin >> ShowM;
    
    if(ShowM > 3)
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
