#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

struct cd
{
char titulo[30];
char artista[25];
int nro_canciones;
float precio;
char fecha_compra[10];
};
    
cd mis_cds[3];

void leer();
void mostrar();
void menu();

int main()
{
    menu();
    
    cin.get();
    cin.get();
    return 1;
}

void mostrar()
{
    int i;
    
    system("cls");
    for(i = 0; i<3; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Datos Del CD: "<< i+1<<endl;  
        cout<<"Titulo: "<< mis_cds[i].titulo<<endl;  
        cout<<"Artista: "<< mis_cds[i].artista<<endl;  
        cout<<"Numero de canciones: "<< mis_cds[i].nro_canciones<<endl;   
        cout<<"Precio: "<< mis_cds[i].precio<<endl;  
        cout<<"Fecha de compra: "<< mis_cds[i].fecha_compra<<endl;    
        cout<<"------------------------------------------\n";    
    }
    system("pause");   
}

void leer()
{
    int i;
    
    system("cls");
    for(i = 0; i<3; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Datos Del CD: "<< i+1<<endl;  
        cout<<"Titulo: "<<endl;  
        cin>> mis_cds[i].titulo;
        cout<<"Artista: "<<endl;
        cin>> mis_cds[i].artista;  
        cout<<"Numero de canciones: "<<endl; 
        cin>> mis_cds[i].nro_canciones;  
        cout<<"Precio: "<<endl; 
        cin>> mis_cds[i].precio;  
        cout<<"Fecha de compra: "<<endl; 
        cin>> mis_cds[i].fecha_compra;    
        cout<<"------------------------------------------\n";    
    }
    system("pause");   
}

void menu()
{
    int select;
    
    system("cls");
    
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Opciones Disponibles:"<<endl; 
    cout<<"1. Ingresar datos de la coleccion de cds:"<<endl; 
    cout<<"2. Ver datos almacenados de la colección de cds:"<<endl;
    cout<<"3. salír:"<<endl; 
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Seleccione: "; 
    cin>>select;
    
    switch(select)
    {
        case 1:
        {
            leer(); 
            menu();  
            break;    
        }
        case 2:
        {
            mostrar(); 
            menu();  
            break;    
        }
        case 3:
        {
            exit(0);  
            break;    
        }
        default:
        {
            cout<<"La opcion que usted ha seleccionado no esta disponible"<<endl; 
            cout<<"Por favor, vuelva a intentarlo"<<endl; 
            system("pause");  
            menu();
        }
    } 
}
