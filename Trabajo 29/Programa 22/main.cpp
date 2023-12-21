#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char rep[2];
    int cal, aprob = 0, SumaA = 0, cantidad = 0;
    cout <<"Hola Bienvenid@ ¿Analizar calificaciones? use S para si ---> ";
    cin >>rep;
    
    while(strcmp(rep,"S") == 0||strcmp(rep,"s") == 0)
    {
     cout <<"Calificación de un alumno:";
     cin >>cal;
     if(cal > 4)
     {
     aprob=aprob+1;
     SumaA=SumaA+cal;
     }          
     cantidad=cantidad+1;
     
     cout <<"¿Continuar? S para si:";  
     cin >>rep;     
    }
    
    cout <<"Porcentaje de alumnos aprobados: "<< (aprob*100)/cantidad <<"%";
    cout <<"Promedio de los aprobados: "<< SumaA/aprob;
    
    cin.get();
    cin.get();
    
    return 0;
}
