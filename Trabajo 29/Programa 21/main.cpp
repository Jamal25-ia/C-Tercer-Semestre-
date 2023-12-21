#include <iostream>

using namespace std;

int main()
{
    int Num[5];
    int SumatoriaP = 0, SumatoriaN = 0, cantidadP;
    
    cout <<"Hola Bienvenid@ Ingrese el primer numero ---> ";
    cin  >>Num[0];
    cout <<"Ingresa el segundo numero ---> ";
    cin  >>Num[1];
    cout <<"Ingresa el tercer numero ---> ";
    cin  >>Num[2];
    cout <<"Ingresa el cuarto numero ---> ";
    cin  >>Num[3];
    cout <<"Ingresa el quinto numero ---> ";
    cin  >>Num[4];
    cout <<"Ingresa el sexto numero ---> ";
    cin  >>Num[5];
    
    for(int x=0; x <= 5;x++)
    {
        if(Num[x]>0)
        {
        SumatoriaP=SumatoriaP + Num[x];
        cantidadP=cantidadP+1;          
        }
        else
        {
        SumatoriaN=SumatoriaN + Num[x];
        }        	
	}
	
	if(cantidadP!=0)
    {
    cout <<"Sumatoria de los positivos: "<<SumatoriaP;
    }
    else
    {
    cout <<"No se ingresaron números positivos";
    }
    cout <<"\nSumatoria de los negativos: "<<SumatoriaN;
    cin.get();
    cin.get();
    return 1;
}
