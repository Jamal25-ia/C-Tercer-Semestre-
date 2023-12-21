#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i,n[9999];
    char s;
    cout<<"Desea ingresar un numero";
    cin>>s;
    for( ;s == "s"||s == "S" && i<99;i++)
    {
    cout<<"ingrese un numero";
    cin>>n[i];
    cout<<"Desea ingresar otro numero";
    cin>>s;
      
    }
    
    for(int a;a == i;a++)
    {
    cin>>n[a];
      
    }
    cin.get();
    cin.get();
    return EXIT_SUCCESS;
}
