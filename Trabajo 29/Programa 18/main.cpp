#include <iostream>

using namespace std;

int main()
{
    char Texto[20];
    int vocales = 0;
    
    cout <<"Hola Bienvenid@ ingresa una frase ---> ";
    cin >>Texto;
    
    for(int x=0;Texto[x] !='\0' && Texto[x] !='\n';x++)
    {
        Texto[x]=tolower(Texto[x]);
		switch(Texto[x]){
			case 'A': vocales++; break;
			case 'E': vocales++; break;
			case 'I': vocales++; break;
			case 'O': vocales++; break;
			case 'U': vocales++; break;
		}
	}
    
    cout <<"Numero de vocales: "<<vocales;
    
    cin.get();
    cin.get();
    return 1;
}

