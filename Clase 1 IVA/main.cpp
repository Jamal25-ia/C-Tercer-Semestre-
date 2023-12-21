#include <cstdlib>
#include <iostream>

#define IVA 16

using namespace std;

int main()
{
    //IVA INICIO
    
    float m, P = 0;
    cout <<"Hola ingresa el monto del producto  \n";
    cin  >> P;
    
    m = P * IVA;
    cout <<"El monto del producto con el IVA es Bs:  \n"<< m<<"\n";
    
    //IVA FIN
    
    //USO del if
    /*
    if(m == 50)
    {
    cout <<"El monto total es igual a 50 \n";    
    }
    else
    {
    cout <<"El monto total NO es igual a 50 \n";       
    }
    
    if(m == 500)
    {
    cout <<"El monto total es igual a 500 \n";    
    }
    else if(m == 100)
    {
    cout <<"El monto total NO es igual a 100\n";       
    }
    
    if(m >= 100) cout <<"El monto total excede o es igual a 100 \n";    
    */
    
    //swhitch inicio
    /*
    int Dia_semana;
    switch(Dia_semana)//VALOR Int o caracter 
    {
         case 1://lunes
         
          
         break;// Final de cada   
         
         case 2://martes
         
          
         break;// Final de cada        
    }*/
    //swhitch Fin
    /*
    //for inicio
    int i;
    for(i= 0; i <10; i=i+1)//for(-;-;-) 3 intrucciones separadas por ; //intruccion 1 se ejecuta 1 la 2 se ejecuta cada vez  intruccion3 se ejecuta al final
    (
    cout <<"Vuelta Numero :  \n"<< i<<"\n";
    )
    */
    system("pause");//Evita que se cierra solo al finalizar
    
    return 1;
}
