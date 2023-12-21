#include <cstdlib>
#include <iostream>

using namespace std;


/*//Nota este codigo es de mi servidor de gta NO tiene nada que ver con C++. Att:Jamal
new Float:Camara[6][2] = {
    {1681.5,1845.5},//Unity
    {1718.5,1836.5},//Taller unity
    {1353.5,1592.5},//Concensionaria+spawn+Renta
    {1381.5,1582.5},//LSPD
    {1086.5,1285.5},//Hospital Central LS
    {1270.5,1370.5}//Banco central LS
    };
*/
int main()
{
    int cantidad_matrixX, cantidad_matrixY;
    
    cout<<"Ingrese la matrix X(filas)"<<endl;
    cin>>cantidad_matrixX;
    cout<<"Ingrese la matrix Y(columnas)"<<endl;
    cin>>cantidad_matrixY;
    cout<<"\n";
    
    int cadena[cantidad_matrixX][cantidad_matrixY];
    int Valor_Temp;
    
    int y =0,X=0;
    for(X;X<cantidad_matrixX;X++)
    {
        y =0;
        //printf("Ingrese la cadena X:%d \n",X);
        //cout<<"Ingrese la cadena X:"<<X<<endl;
        //cin>>cadena[X][y];
        
        for(y;y<cantidad_matrixY; y++)
        {
        printf("Ingrese la cadena X:%d-Y:%d \n",X,y);
        cin>>cadena[X][y];
        }
    }
    
    y=0;
    X=0;
    for(X;X<cantidad_matrixX;X++)
    {
        y=0;
        printf("\nFila: X:%d \n",X);
        //printf("Ingresaste la cadena Fila: X-%d:%d \n",X,cadena[X][y]);
        
        for(y;y<cantidad_matrixY; y++)
        {
        printf("Ingresaste la cadena Fila: X:%d Columna: Y:%d \n",X, cadena[X][y]);
        }
    }
    
    y=0;
    X=0;
    int suma_result=0;
    for(X;X<cantidad_matrixX;X++)
    {
        y=0;
        
        for(y;y<cantidad_matrixY; y++)
        {
        suma_result += cadena[X][y];
        }
    }
    
    printf("\nResultado de la suma de las cadenas: %d \n",suma_result);
    
    cin.get();
    cin.get();
    return 1;
}
