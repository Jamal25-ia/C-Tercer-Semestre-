#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int Filas, Columnas;//Definimos las variables
    
    cout<<"Ingresa la cantidad de Filas\n";
    cin>>Filas;//Guardamos en la variable fila el dato ingresado
    cout<<"Ingresa la cantidad de Columnas\n";
    cin>>Columnas;//Guardamos en la variable columnas el dato ingresado
    
    int matriz[Filas][Columnas];//Creamos el array de la matriz
    int Suma_F,Suma_C;//creamos las variables las cuales van a guardar la sumatoria
    
    int x=0, y=0; //Seteamos 0 las variables x y y
    
    for(x=0; x<Filas; x++)//creamos un ciclo para ir almacenando en la matriz los valores
    {
        for(y=0; y<Columnas ; y++)
        {
        printf("Posicion Columna[%d] Filas[%d]: \n", x, y);
        cin>>matriz[x][y];//Guardamos los valores en la matriz
        }
    }
      
    for(x=0;x<Filas;x++)//creamos un ciclo para sumar las Columnas
    {
        Suma_F=0;
        for(int y=0;y<Columnas;y++)
        {
            Suma_F=Suma_F+matriz[x][y];//Guardamos la suma de las columnas de la matriz
        }
        printf("La suma del vector de la fila %d es: %d\n",x, Suma_F);
    } 
    cout<<endl;

    for(int y=0;y<Columnas;y++)//creamos un ciclo para sumar las Filas
    {
        Suma_C=0;
        for(int x=0;x<Filas;x++)
        {
        Suma_C=Suma_C+matriz[x][y];//Guardamos la suma de las filas de la matriz
        }
        printf("La suma del vector de las %d columnas es: %d\n", y, Suma_C);//se el acumulado de cada una de las columnas de la matriz
    }
        
    cin.get();
    cin.get();
    return 1;
}
