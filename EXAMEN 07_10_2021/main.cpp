#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int Edad1[29], Edad2[29], Edad3[29], Edad4[29], Edad5[29], Edad6[29], Edad7[29];
    int EdadM1=0, EdadM2=0, EdadM3=0, EdadM4=0, EdadM5=0, EdadM6=0, EdadM7=0;
    int CalificacionM1[29], CalificacionM2[29], CalificacionM3[29], CalificacionM4[29], CalificacionM5[29], CalificacionM6[29], CalificacionM7[29];
    int Cont_M1 =0, Cont_M2 =0, Cont_M3 =0, Cont_M4 =0, Cont_M5 =0, Cont_M6 =0, Cont_M7 =0;
    int CalcPromN1=0, CalcPromN2=0, CalcPromN3=0, CalcPromN4=0, CalcPromN5=0, CalcPromN6=0, CalcPromN7=0;
    int CalcPromE1=0, CalcPromE2=0, CalcPromE3=0, CalcPromE4=0, CalcPromE5=0, CalcPromE6=0, CalcPromE7=0;
    
    int cal, aprob = 0, SumaA = 0, cantidad = 0;
    cout <<"Hola Bienvenid@ Valla ingresando los datos solicitados.";
    
    while(Cont_M1< 30)
    {
     cout <<"\nCalificación de la materia 1 del alumno Numero---> " <<Cont_M1 <<":\n";
     cin >>CalificacionM1[Cont_M1];
     CalcPromN1= CalcPromN1+CalificacionM1[Cont_M1];
     cout <<"\nIngresa la Edad del estudiante de la materia 1 del alumno Numero---> " <<Cont_M1 <<":\n";
     cin >>Edad1[Cont_M1];
     CalcPromE1= CalcPromE1+Edad1[Cont_M1];
     
     if(Edad1[Cont_M1]>=18)
     {
     EdadM1=EdadM1+1;
     }
     Cont_M1++;
    }
    cout <<"\nPromedio de los Alumnos de materia 1: " <<CalcPromN1/30 <<"\n";
    cout <<"\nPromedio de los Edad de materia 1: " <<CalcPromE1/30 <<"\n";
    cout <<"\nAlumnos mayor de edad: " <<EdadM1 <<"\n";
    
    
    cin.get();
    cin.get();
    return 1;
}
