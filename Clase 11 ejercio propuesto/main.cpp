#include <cstdlib>
#include <iostream>
#include <string.h>
#include<windows.h>

using namespace std;

#define Num_Provedores 3
#define Num_Clientes 3
#define Num_Empleados 3
#define Num_Productos 3

void menuPrincipal();
void menuProvedores();
void menuClientes(); 
void menuEmpleados();
void menuProductos();

void RegProvedores();
void MostrarProvedores();

void RegClientes(); 
void MostrarClientes();

void RegEmpleados(); 
void MostrarEmpleados(); 

void NuestrosProv(); 
void NuestraGente();
void NuestrosProduc();

struct Provedores{
char NombreProvedor[20];
char FechaDeRegistro[20];
};
Provedores Prov[Num_Provedores];

struct Clientes{
    char NombreProvedor[20];
    char FechaDeRegistro[20];
    char FechaDeNacimiento[20];
    char NumerodeCedula[20];
};
Clientes clientes[Num_Clientes];

struct Empleados{
    char NombreEmpleado[20];
    char FechaDeIngreso[20];
    char FechaDeNacimiento[20];
    char NumerodeCedula[20];
};
Empleados empleado[Num_Empleados];

struct Productos{
    char NameProducto[20];
    int Cantidad[20];
    bool EnVenta;//SI y no los boleanos solo aceptan 0 y 1 osea NO y SI
    int Precio;
};
Productos productos[Num_Empleados];

#define Nuestros_Provedores "Nuestra empresa esta comprometida a blindar los mejores productos que ofrecemos, esto a través de nuestro personal capacitado.\n"
#define Nuestra_Gente "Nuestra empresa tiene los mejores trabajadores capacitados.\n"
#define Nuestros_Productos "Nuestra empresa tiene como objetivo blindar los mejores productos de excelente calidad.\n"

int main()
{
    menuPrincipal();
    return 1;
}

void NuestrosProv()
{
    cout<<Nuestros_Provedores<<endl;    
    system("pause");   
}

void NuestraGente()
{
    cout<<Nuestra_Gente<<endl;    
    system("pause");   
}

void NuestrosProduc()
{
    cout<<Nuestros_Productos<<endl;    
    system("pause");   
}

void RegProvedores()
{
    int i;
    
    system("cls");
    for(i = 0; i<Num_Provedores; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Provedor: "<< i+1<<endl;  
        cout<<"Nombre: ";  
        cin>> Prov[i].NombreProvedor;
        cout<<"Fecha de Registro: "; 
        cin>> Prov[i].FechaDeRegistro;    
        cout<<"------------------------------------------\n";    
    }
    system("pause");   
}

void MostrarProvedores()
{
    int i;
    
    system("cls");
    for(i = 0; i<Num_Provedores; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Provedor: "<< i+1<<endl;  
        cout<<"Nombre: "<< Prov[i].NombreProvedor <<endl;
        cout<<"Fecha de Registro: "<< Prov[i].FechaDeRegistro <<endl;    
        cout<<"------------------------------------------\n";    
    }
    system("pause");   
}

void menuProvedores()
{
    int select;
    
    system("cls");
    
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Opciones De provedores Disponibles "<<endl; 
    cout<<"1. Nuestros Provedores"<<endl; 
    cout<<"2. Registrar Provedores"<<endl;
    cout<<"3. Mostrar lista de proveedores"<<endl; 
    cout<<"4. Volver al menú inicial"<<endl; 
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Seleccione: "; 
    cin>>select;
    
    switch(select)
    {
        case 1:
        {
            NuestrosProv(); 
            menuProvedores();  
            break;    
        }
        case 2:
        {
            RegProvedores(); 
            menuProvedores();  
            break;    
        }
        case 3:
        {
            MostrarProvedores(); 
            menuProvedores();  
            break;    
        }
        case 4:
        {
            menuPrincipal(); 
            break;    
        }
        default:
        {
            cout<<"La opcion que usted ha seleccionado no esta disponible"<<endl; 
            cout<<"Por favor, vuelva a intentarlo"<<endl; 
            system("pause");  
            menuProvedores();
        }
    }      
}

void RegClientes()
{
    int i;
    
    system("cls");
    for(i = 0; i<Num_Clientes; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Provedor: "<< i+1<<endl;  
        cout<<"Nombre: ";  
        cin>> clientes[i].NombreProvedor;
        cout<<"Fecha de Registro: "; 
        cin>> clientes[i].FechaDeRegistro;    
        cout<<"Fecha de Nacimiento: "; 
        cin>> clientes[i].FechaDeNacimiento;  
        cout<<"Numero de Cedula: "; 
        cin>> clientes[i].NumerodeCedula; 
        cout<<"------------------------------------------\n\n";    
    }
    system("pause");   
}

void MostrarClientes()
{
    int i;
    
    system("cls");
    for(i = 0; i<Num_Clientes; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Provedor: "<< i+1<<endl;  
        cout<<"Nombre: "<< clientes[i].NombreProvedor <<endl;
        cout<<"Fecha de Registro: "<< clientes[i].FechaDeRegistro <<endl;    
        cout<<"Fecha de Nacimiento: "<< clientes[i].FechaDeNacimiento <<endl;  
        cout<<"Numero de Cedula: "<< clientes[i].NumerodeCedula <<endl; 
        cout<<"------------------------------------------\n\n";   
    }
    system("pause");   
}

void menuClientes()
{
    int select;
    
    system("cls");
    
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Opciones De Clientes Disponibles "<<endl; 
    cout<<"1. Registrar Clientes"<<endl;
    cout<<"2. Mostrar lista de Clientes"<<endl; 
    cout<<"3. Volver al menú inicial"<<endl; 
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Seleccione: "; 
    cin>>select;
    
    switch(select)
    {
        case 1:
        {
            RegClientes(); 
            menuClientes();  
            break;    
        }
        case 2:
        {
            MostrarClientes(); 
            menuClientes();  
            break;    
        }
        case 3:
        {
            menuPrincipal(); 
            break;    
        }
        default:
        {
            cout<<"La opcion que usted ha seleccionado no esta disponible"<<endl; 
            cout<<"Por favor, vuelva a intentarlo"<<endl; 
            system("pause");  
            menuClientes();
        }
    }      
} 

void RegEmpleados()
{
    int i;
    
    system("cls");
    for(i = 0; i<Num_Empleados; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Empleado : "<< i+1<<endl;  
        cout<<"Nombre: ";  
        cin>> empleado[i].NombreEmpleado;
        cout<<"Fecha de Ingreso: "; 
        cin>> empleado[i].FechaDeIngreso;    
        cout<<"Fecha de Nacimiento: "; 
        cin>> empleado[i].FechaDeNacimiento;  
        cout<<"Numero de Cedula: "; 
        cin>> empleado[i].NumerodeCedula; 
        cout<<"------------------------------------------\n\n";    
    }
    system("pause");   
}

void MostrarEmpleados()
{
    int i;
    
    system("cls");
    for(i = 0; i<Num_Empleados; i++)  
    {
        cout<<"------------------------------------------"; 
        cout<<"\n\n Empleado : "<< i+1<<endl;  
        cout<<"Nombre: "<< empleado[i].NombreEmpleado <<endl;
        cout<<"Fecha de Ingreso: "<< empleado[i].FechaDeIngreso <<endl;    
        cout<<"Fecha de Nacimiento: "<< empleado[i].FechaDeNacimiento <<endl;  
        cout<<"Numero de Cedula: "<< empleado[i].NumerodeCedula <<endl;  
        cout<<"------------------------------------------\n\n";   
    }
    system("pause");   
}

void menuEmpleados()
{
    int select;
    
    system("cls");
    
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Opciones De Empleados Disponibles "<<endl;
    cout<<"1. Nuestra Gente"<<endl; 
    cout<<"2. Registrar Empleados"<<endl;
    cout<<"3. Mostrar lista de Empleados"<<endl; 
    cout<<"4. Volver al menú inicial"<<endl; 
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Seleccione: "; 
    cin>>select;
    
    switch(select)
    {
        case 1:
        {   
            NuestraGente();
            menuEmpleados();  
            break;    
        }
        case 2:
        {   
            RegEmpleados(); 
            menuEmpleados();  
            break;    
        }
        case 3:
        {
            MostrarEmpleados(); 
            menuEmpleados();  
            break;    
        }
        case 4:
        {
            menuPrincipal(); 
            break;    
        }
        default:
        {
            cout<<"La opcion que usted ha seleccionado no esta disponible"<<endl; 
            cout<<"Por favor, vuelva a intentarlo"<<endl; 
            system("pause");  
            menuEmpleados();
        }
    }
}

/*
struct Productos{
    char NameProducto[20];
    int Cantidad[20];
    bool EnVenta;//SI y no los boleanos solo aceptan 0 y 1 osea NO y SI
    int Precio;
};
Productos productos[Num_Empleados];*/

void menuProductos()
{
    int select;
    
    system("cls");
    
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Opciones De Productos Disponibles "<<endl;
    cout<<"1. Nuestros Productos"<<endl; 
    cout<<"2. Registrar Productos"<<endl;
    cout<<"3. Mostrar lista de Productos"<<endl; 
    cout<<"4. Volver al menú inicial"<<endl; 
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Seleccione: "; 
    cin>>select;
    
    switch(select)
    {
        case 1:
        {   
            NuestrosProduc();
            menuProductos();  
            break;    
        }
        case 2:
        {   
            RegProduc(); 
            menuProductos();  
            break;    
        }
        case 3:
        {
            MostrarProduc(); 
            menuProductos();  
            break;    
        }
        case 4:
        {
            menuPrincipal(); 
            break;    
        }
        default:
        {
            cout<<"La opcion que usted ha seleccionado no esta disponible"<<endl; 
            cout<<"Por favor, vuelva a intentarlo"<<endl; 
            system("pause");  
            menuProductos();
        }
    }
}

void menuPrincipal()
{
    int select;
    
    system("cls");
    
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Opciones Disponibles:"<<endl; 
    cout<<"1. Proveedores"<<endl; 
    cout<<"2. Clientes"<<endl;
    cout<<"3. Empleados"<<endl; 
    cout<<"4. Productos"<<endl; 
    cout<<"5. Salir"<<endl; 
    cout<<"-------------------------------------------------"<<endl; 
    cout<<"Seleccione: "; 
    cin>>select;
    
    switch(select)
    {
        case 1:
        {
            menuProvedores(); 
            menuPrincipal();  
            break;    
        }
        case 2:
        {
            menuClientes(); 
            menuPrincipal();  
            break;    
        }
        case 3:
        {
            menuEmpleados(); 
            menuPrincipal();  
            break;    
        }
        case 4:
        {
            menuProductos(); 
            menuPrincipal();  
            break;    
        }
        case 5:
        {
            cout<<"Cerrando..."; 
            Sleep(5000);//Detiene el programa por 5 segundos luego sigue ejecutando requiere libreria windows.h
            exit(0);//Cierra el programa
            break;    
        }
        default:
        {
            cout<<"La opcion que usted ha seleccionado no esta disponible"<<endl; 
            cout<<"Por favor, vuelva a intentarlo"<<endl; 
            system("pause");  
            menuPrincipal();
        }
    } 
}
