#include <cstdlib>
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <iomanip>

using namespace std;
/*    
Dado el siguiente código:
A) ¿Qué hace este programa?
R=Reordena los valores de un vector, del menor al mayor usando el metodo de burbuja.

B)Explique claramente el uso de las funciones
R=
-La funcion f1(int *arreglo, int tamanio): 
Verifica si el espacio almacenado en el vector es menor al espacio almacenado en el 
espacio anterior Ejemplo: j=i+1 seria el espacio 1, minimo seria el espacio 0 el programa 
compara el espacio 1 con el 0 para ver si es menor
y llama a la funcion f3.       

-La funcion f2( int *a, int tamanioArreglo):
Se encarga de mostrar todos los valores de los espacios del vector
      
-La funcion f3( int *aPtr, int *bPtr):
Mueve los valores dentro del vector y almacena en una tercera variable la direcion *aPtr para establecer la variable con ese valor dado
luego de eso se pasa el valor de *bPtr a *aPtr a travéz de direcion de memoria y *bPtr = aux;
luego Establecemos *bPtr como aux la cual definimos arriba como el valor del array *aPtr que tenia antes de esta forma intercambia los valores del vector

C)Muestre visualmente paso a paso los cambios que ocurren en el arreglo a cuando se ejecuta la funcion f1

D)Comente cada linea de codigo indicando claramente que hace en el programa:


Se agregaron cosas faltantes al codigo incluyendo la libreria iomanip que requiere la funcion de setw esta modifica la anchura del
campo únicamente para la siguiente entrada o salida. Por defecto es 0, pero esta funcion expande cuanto sea necesario.
*/

void f1(int *arreglo, int tamanio);
void f2(int *a, int tamanioArreglo);
void f3(int *aPtr, int *bPtr);

int main(){
   int tamanioArreglo = 4;
   //int a[tamanioArreglo] = {54, 2 , 46 , 7};//Declara el vector a con los valores a[0] = 54; a[1] = 2; a[2] = 46; a[3] = 7;
   
   //En el Dev-C++ me tiraba error al ponerlo así int a[tamanioArreglo] = {54, 2 , 46 , 7}; asi que lo puse de esta otra forma:
   int a[tamanioArreglo];//Declara el vector a
   a[0] = 54;
   a[1] = 2;
   a[2] = 46;
   a[3] = 7;
   
   f1(a, tamanioArreglo);//LLama a la funcion f1 diciendole el vector y el tamaño
   f2(a, tamanioArreglo);//LLama a la funcion f2 diciendole el vector y el tamaño
   getch();
   return 0;
}

void f1(int *arreglo, int tamanio)//Declara la funcion f1 la cual comprueba si los valores dentro del arreglo son de mayor a menor y si es llama a una funcion
{ 
  int minimo; //Declara la variable minimo
  for(int i = 0; i < tamanio; i++)//Se crea un siclo para comparar un primer espacio ejemplo espacio 0 
  {
    minimo = i;//la variable minimo se le asigna el numero del primer espacio
    for( int j = i + 1; j < tamanio; j++)//Se crea un siclo para comparar un segundo espacio ejemplo espacio 1 
    {
        if( arreglo[j] < arreglo[minimo])//El areglo en el espacio j y minimo estaria comparando ejemplo primera vuelta minimo = espacio 0 mientras que J = espacio 1
            minimo = j;//Seteamos minimo como j   
    }
    f3(&arreglo[i] , &arreglo[minimo]);//Llamamos la funcion la cual almacena int a = arreglo[i]; arreglo[i] = arreglo[minimo] Y  arreglo[minimo] = a 
  }
}

void f3(int *aPtr, int *bPtr)//Declaramos la funcion f3 que mueve los valores dentro del vector
{
   int aux = *aPtr;//Creamos una tercera variable la cual almacena la direcion *aPtr para establecer la variable con ese valor dado en la funcion
   *aPtr = *bPtr;//Pasamos el valor de *bPtr a *aPtr a travéz de direcion de memoria
   *bPtr = aux;//Establecemos *bPtr como aux la cual definimos arriba como el valor del array *aPtr que tenia antes
}

void f2( int *a, int tamanioArreglo)//Declaramos la funcion f2 la cual se encarga de imprimir el vector
{
   for(int i = 0; i < tamanioArreglo; i++)//Creamos un ciclo para movernos por los espacios del vector 
   cout<<setw(5)<<a[i];//Mientras se mueve por los espacios del vector va imprimiendo el contenido de los espacios del vector
}
