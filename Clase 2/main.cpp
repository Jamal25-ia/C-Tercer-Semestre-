#include <iostream>
#include <iostream>

#include <ctype.h>
#include <stdlib.h>
//Tolower transforma un caracter a miniscula
//Toupper transforma un caracter a mayuscula

using namespace std;

int main()
{ 
    /*
    char x[2] = "h";
    char e[2];
    e = toupper(x);//transforma mayuscula
    
    
    respuesta = toupper(x); 
    if(respuesta == S)//EJECUTA LA FUNCION SOLO SI ES MAYUSCULA Si estuviera en minuscula el toupper la cambia a mayuscula
    {
                 
    }
    if(Tolower(x) == s)//EJECUTA LA FUNCION SOLO SI ES MAYUSCULA Si estuviera en minuscula el toupper la cambia a mayuscula
    {
                 
    }
    */
    //NOTA:la tercera intruccion de for puede estar vacia 
    /*y for se puede repetir en vacio osea SIN NADA ABAJO for(x=0; x == 100; x++)
    
    
    for( ;   ; ) //INFINITO
    {
         
    } 
    
    */
    
    //inicio while() MIentras
    /*
    int rep;
    rep = 0;
    
    while(rep < 100)
    {
    rep++;//VARIABLE contador x=x+1; x++; acumulador x =5; x= x+10; x+= y;
    cout<<"Repeticion:"<<rep<<"\n"; 
    }
    
    //FIN WHILE
    
    do{
    cout<<"Hola DO 1:"<<rep<<"\n"; 
    }while(rep < 110);//ejecuta una vez y luego verifica si se tiene que volver a ejecutar
    */
    
    int c =1,n;
    cout<<"Ingrese repet:"; 
    cin >>n;
    cout <<"1"; 
    
    while(c < n)
    {
    cout<<"+1/"<<c+1; 
    c++;
    }
    cin.get();//para que no aparesca el mensaje al final color 2 veces ya no necesita el sistem pause
    cin.get();
    //stem("PAUSE");//para que el programa no se cierre al finalizar
    return 1;
}


