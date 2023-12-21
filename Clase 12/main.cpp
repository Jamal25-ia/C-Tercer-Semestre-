#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

//Lo que antes era la estructura Cliente,
//Ahora se llama Persona.
struct Persona{
     char nombre[20], apellido[20];
     int edad, numeroIdentificacion;
     long telefono;
};

//Una estructura para representar la
//Fecha de nacimiento de una persona.
struct Fecha{
     int dia,mes,anio;
};

//Esta estructura representa el registro
//De una persona a una centro educativo.
//¡Dentro de ella están todos lo campos 
//Solicitados! 
struct Registro{
     Persona persona;
     Fecha fec;
};

int main()
{
     char resp[10];
     //resp = "s";
     strcpy(resp, "s");//PARA MODIFICAR LA VARIABLE CHAR :D
     int i = 0, cc = 0;
     Registro nuevoIngreso[100];//Almacenar varias sola persona
     
     //while(i<100 && resp == "s")
     //while(i<100 && strcmp(resp, "n") == 0);
     while(i < 100 && strcmp(resp, "s") == 0 && strcmp(resp, "S") == 0);
     {
         cout << "Cliente N: "<< i << endl;
         
         cout << "Ingrese el nombre" << endl;
         cin.getline(nuevoIngreso[i].persona.nombre,20);
         
         cout << "Ingrese apellido" << endl;
         cin.getline(nuevoIngreso[i].persona.apellido,20);
         
         cout << "Ingrese edad" << endl;
         cin >> nuevoIngreso[i].persona.edad;
         
         cout << "Ingrese numero de identificacion" << endl;
         cin >> nuevoIngreso[i].persona.numeroIdentificacion;
         
         cout << "Ingrese telefono" << endl;
         cin >> nuevoIngreso[i].persona.telefono;
         
         cout << "Ingrese Dia de nacimiento" << endl;
         cin >> nuevoIngreso[i].fec.dia;
         
         cout << "Ingrese Mes de nacimiento" << endl;
         cin >> nuevoIngreso[i].fec.mes;
         
         cout << "Ingrese año de nacimiento" << endl;
         cin >> nuevoIngreso[i].fec.anio;
         
         cout << "Continuara regristrando cliente? s/n" << endl;
         cin >> resp;
         
         i++;
         cc++;
     
    }
    system("cls");
    
    for(i = 0; i<cc;i++)
    {
        cout << "Cliente N: "<< i << endl;
        
        cout<<"Nombre:"<<nuevoIngreso[i].persona.nombre<< endl;
             
        cout << "Ingrese apellido" << nuevoIngreso[i].persona.apellido<< endl;
             
        cout << "Ingrese edad" << nuevoIngreso[i].persona.edad << endl;
             
        cout << "Ingrese numero de identificacion" << nuevoIngreso[i].persona.numeroIdentificacion << endl;
             
        cout << "Ingrese telefono" << nuevoIngreso[i].persona.telefono << endl;
             
        cout << "Ingrese Dia de nacimiento" << nuevoIngreso[i].fec.dia << endl;
             
        cout << "Ingrese Mes de nacimiento" << nuevoIngreso[i].fec.mes << endl;;
             
        cout << "Ingrese año de nacimiento" << nuevoIngreso[i].fec.anio << endl<< endl;   
    }
        
    cin.get();
    cin.get();
    return 1;
}

/*

//Lo que antes era la estructura Cliente,
//Ahora se llama Persona.
struct Persona{
     char nombre[20], apellido[20];
     int edad, numeroIdentificacion;
     long telefono;
};

//Una estructura para representar la
//Fecha de nacimiento de una persona.
struct Fecha{
     int dia,mes,anio;
};

//Esta estructura representa el registro
//De una persona a una centro educativo.
//¡Dentro de ella están todos lo campos 
//Solicitados! 
struct Registro{
     Persona persona;
     Fecha fec;
};

int main(){
     Registro nuevoIngreso;//Almacena una sola persona
     //Registro nuevoIngreso[20];//Almacenar varias sola persona
     
     cout << "Ingrese el nombre" << endl;
     cin.getline(nuevoIngreso.persona.nombre,20);
     
     cout << "Ingrese apellido" << endl;
     cin.getline(nuevoIngreso.persona.apellido,20);
     
     cout << "Ingrese edad" << endl;
     cin >> nuevoIngreso.persona.edad;
     
     cout << "Ingrese numero de identificacion" << endl;
     cin >> nuevoIngreso.persona.numeroIdentificacion;
     
     cout << "Ingrese telefono" << endl;
     cin >> nuevoIngreso.persona.telefono;
*/
