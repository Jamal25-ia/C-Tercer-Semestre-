#include <cstdlib>
#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    /*
    //struct puede almacenar varias variables
    struct cd
    {
    char titulo[30];
    char artista[25];
    int nro_canciones;
    float precio;
    string fecha_compra[10];
    }cd_1,cd_2, cd_3;//Forma 1 para definir conjunto
    //cd cd_1,cd_2, cd_3;forma 2 para definir
    //cd_1,cd_2, cd_3;//aqui pues usa la estructura es la misma.pero los datos son diferentes cd_1, cd_2, cd_3
    
    //cd_1={"mis_canciones", "varios", 20, 70.5, "09/10/12"};//Asigna los valores de cada uno de la estructura pero para cd_1
    
    strcpy(cd_1.titulo, "Titulo_de_mi_cd");//Para almacenar un dato dentro de una estructura
    cd_1.precio = 2.5;
    */
    
    
    //estruc por arreglo
    /*
    struct cd
    {
    char titulo[30];
    char artista[25];
    int nro_canciones;
    float precio;
    string fecha_compra[10];
    }
    
    cd mis_cds[3];
    
    strcpy(mis_cds[0].titulo, "titulo_de_mi_cd");
    mis_cds[0].nro_canciones = 20;
    
    */
    
    //ejemplo
    
    
    struct cd
    {
    char titulo[30], artista[25];
    int nro_canciones;
    float precio;
    string fecha_compra[10];
    };
    
    cin.get();
    cin.get();
    return 1;
}
