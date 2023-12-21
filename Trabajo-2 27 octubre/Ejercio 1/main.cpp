#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int Array1[9], Array2[9], Array3[9], Array4[5];//Aqui se encuentran declarados los tres arrays y el cuarto
    
    int X=0;//Declaramos la variable 
    for(X;X<10;X++)//Creamos un cliclo para setear a 0
    {
    Array4[X]=0;//Aqui seteamos en 0 el cuarto array
    }
    
    X=0;
    for(X;X<10;X++)//Creamos un ciclo para ir almacenando los valores del array 1
    {
    printf("Ingresa el valor del array 1 Espacio: %d\n", X+1);//Aqui muestra un texto señalando el espacio donde se almacenara
    cin>>Array1[X];//Guardamos el valor ingresado en el array
    }
    
    X=0;
    for(X;X<10;X++)//Creamos un ciclo para ir almacenando los valores del array 2
    {
    printf("Ingresa el valor del array 2 Espacio: %d\n", X+1);//Aqui muestra un texto señalando el espacio donde se almacenara
    cin>>Array2[X];//Guardamos el valor ingresado en el array
    }
    
    X=0;
    for(X;X<10;X++)//Creamos un ciclo para ir almacenando los valores del array 3
    {
    printf("Ingresa el valor del array 3 Espacio: %d\n", X+1);//Aqui muestra un texto señalando el espacio donde se almacenara
    cin>>Array3[X];//Guardamos el valor ingresado en el array
    }
    
    
    X=0;
    for(X;X<10;X++)//Creamos un ciclo para ir sumando los primeros 3 areglos y los guardamos en los primeros 3 espacios del 4 areglo
    {
    Array4[0] = Array4[0] + Array1[X];
    Array4[1] = Array4[1] + Array2[X];
    Array4[2] = Array4[2] + Array3[X];
    }
    
    
    X=0;
    for(X;X<10;X++)//Creamos un ciclo y usando if vamos viendo si el valor del espacio anterior es mayor o menor si es mayor                         
    {              //Guarda en los ultimos 3 espacios del 4 array el valor del mayor de los primeros 3 arrays
        if(Array1[X] > Array4[3])
        {
        Array4[3] = Array1[X];
        }
        if(Array2[X] > Array4[4])
        {
        Array4[4] = Array2[X];
        }
        if(Array3[X] > Array4[5])
        {
        Array4[5] = Array3[X];
        }
    }
    
    //Mostramos los resultados del cuarto array
    printf("La Suma del Array 1 es de: %d\n", Array4[0]);
    printf("La Suma del Array 2 es de: %d\n", Array4[1]);
    printf("La Suma del Array 3 es de: %d\n", Array4[2]);
    
    printf("Mayor elemento del Array 1 es de: %d\n", Array4[3]);
    printf("Mayor elemento del Array 2 es de: %d\n", Array4[4]);
    printf("Mayor elemento del Array 3 es de: %d\n", Array4[5]);
    
    cin.get();
    cin.get();
    return 1;
}
