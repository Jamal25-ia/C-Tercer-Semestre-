#include <cstdlib>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>

using namespace std;

int menu()
{
    int opc;
    system("cls");
    cout<<"xxMENUxx"<<endl;
    cout<<"1.Agregar producto"<<endl;
    cout<<"2.Ver listado de productos"<<endl;
    cout<<"3.Buscar producto"<<endl;
    cout<<"4.Modificar producto"<<endl;
    cout<<"5.Salir del programa"<<endl;
    cout<<"Opcion elegida:"<<endl;
    cin>>opc;
    
    return opc;
}

bool validar(string cod)
{
     ifstream FP("producto.txt",ios::in);
     string Nomb,codp;
     float precio;
     
     FP>>Nomb;
     while(!FP.eof())
     {
         FP>>codp;
         FP>>precio;
         if(codp == cod)
         {
            FP.close();
            return false;
         }
         FP>>Nomb;
     }
     FP.close();
     return true;
}
/*
void agregarp(ofstream &fp){
     system("cls");
     string nomp, CodP;
     float precio;
     //FP.open("productos.txt", ios::outlios::app);
     fp.open("productos.txt", ios::out | ios::app);
     cout<<"Nombre del producto:";cin>>nomp;
     cout<<"Codigo del producto:";cin>>CodP;
     cout<<"precio del producto:";cin>>precio;
     
     if(validar(CodP))
     {
     fp<<nomp<<" "<<CodP<<" "<<precio<<"\n";
     }
     else 
     {
     cout<<"Advertencia registro no realizado debido a que el codigo ya fue usado anteriormente";
     system("pause");
     }
     fp.close();        
}
*/

void agregarp(ofstream &fp){
     system("cls");
     string nomp, CodP;
     float precio;
     //FP.open("productos.txt", ios::outlios::app);
     fp.open("productos.txt", ios::out | ios::app);
     cout<<"Nombre del producto:";cin>>nomp;
     cout<<"Codigo del producto:";cin>>CodP;
     cout<<"precio del producto:";cin>>precio;
     
     fp<<nomp<<" "<<CodP<<" "<<precio<<"\n";
     
     fp.close();        
}

void Listadp(ifstream &FP){
    system("cls");
    string Nomp,CodP;
    float precio;
    FP.open("productos.txt");
    cout<<"Listado de productos registrados"<<endl;
    FP>>Nomp;
    while(!FP.eof()){
    FP>>CodP;
    FP>>precio;
    cout<<"Nombre del producto: "<<Nomp<<endl;
    cout<<"Codigo: "<<CodP<<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<<endl;
    FP>>Nomp;
    }
    FP.close();
    system("pause");
}

void BuscarP(ifstream &fp)
{
     system("cls");
     fp.open("productos.txt", ios::in);
     bool esta = false;
     string Nomp, CodP,cod;
     float precio;
     
     cout<<"Codigo del producto a Buscar: ";cin>>cod;
     fp>>Nomp;
     while(!fp.eof() && !esta)
     {
         fp>>CodP;
         fp>>precio;
         if(CodP == cod)
         {
             cout<<"Producto: "<<Nomp<<endl;
             cout<<"Codigo: "<<CodP<<endl;
             cout<<"Precio: "<<precio<<endl;
             esta = true;
         }  
         fp>>Nomp;              
     }
     fp.close();
     if(!esta)
         cout<<"Producto no encontrado"<<endl;
     system("pause");
}

void ModificarP(ifstream &fp)
{
    system("cls");
    string Nomp, CodP, n, c;
    float precio, p;
    
    fp.open("productos.txt",ios::in);
    ofstream ese("otro.txt",ios::out);
    
    if(fp.is_open())
    {
        cout<<"Codigo del producto a modificar";
        cin>>c;
        fp>>Nomp;
        while(!fp.eof())
        {
            fp>>CodP;
            fp>>precio;
            if(CodP == c)
            {
                cout<<"Nombre de Producto: "<<Nomp<<endl;
                cout<<"Nuevo nombre: ";
                cin>>n;
                if(int(n[0]) == 13)
                {
                   ese<<Nomp;
                }
                else
                {
                ese<<n<<" ";
                }
                cout<<"Codigo: "<<CodP<<endl;
                cout<<"Nuevo Codigo: ";
                cin>>c;
                if(int(c[0]) == 13)
                {
                    ese<<CodP<<" ";
                }
                else
                {
                    ese<<c<<" ";
                }
                cout<<"Precio: "<<precio<<endl;
                cout<<"Nuevo Precio: ";
                cin>>p;
                /*
                string Pstr(string(p));
                if(int(Pstr[0] == 13))
                {
                    ese<<precio<<"\n";
                }
                else
                {
                    ese<<p<<"\n";
                }*/
            }
            fp>>Nomp;
        }
        fp.close();
        ese.close();
    }
    else
    cout<<"No se pudo abrir el archivo: "<<endl;
    system("pause");
    remove("productos.txt"); 
    rename("otro.txt", "productos.txt");
}

int main()
{
    ofstream escp;
    ifstream Lect;
    int op;
    while(op != 5)
    {
       system("cls");
       op=menu();
       switch(op)
       {
           case 1:
                agregarp(escp);
                break;
           case 2:
                Listadp(Lect);
                break;
           case 3:
                BuscarP(Lect);
                break;
           case 4:
                ModificarP(Lect);
                break;
           case 5:
                break;
       }
    }
    
    return 1;
}
