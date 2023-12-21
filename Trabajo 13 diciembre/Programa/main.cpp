#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

//Constantes y variables

#define MAX_Usuarios        100000
#define MAX_Actividad       500000

int Numero_Clientes = 0;
int Numero_Cuentas = 0;
int Numero_Transacciones = 0;

//Funcion gotoxy y llamado a la funcion menu();
void gotoxy(int x,int y){  
     HANDLE hcon;  
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
     COORD dwPos;  
     dwPos.X = x;  
     dwPos.Y= y;  
     SetConsoleCursorPosition(hcon,dwPos);  
}
void menu();

//estructuras inicio
struct usuario{
    char Nombre[24];
    int Num_Cliente;
    int Num_CuentaC;
    int Num_CuentaA;
    int Num_CuentaAL;
    float SaldoC;
    float SaldoA;
    float SaldoAL;
    char Telefono;
    char Cedula[20];
    char Direccion[50];
};
usuario user[MAX_Usuarios];

struct Actividad_De_cuenta{
    int Numero_Cliente;
    int Num_Cuenta;
    int TipoCuenta;//1 = corriente, 2 = ahorro, 3 activos liquidos
    int Num_Transaccion;
    int Caja_usada;
    int Actividad;//1= deposito, 2 = Retiro
    float Monto;
    float Saldo;
    int Dia;
    int mes;
    int ano;
};
Actividad_De_cuenta Act_Cuenta[MAX_Actividad];
//Estructuras fin


//muestra los saldos de las cuentas de los usuarios
int mostrar_saldos(int Numero_Cliente, int linea)
{
    if(user[Numero_Cliente].Num_CuentaC >0){
    gotoxy(15,linea); cout << "Saldo Actual cuenta Corriente: "<< user[Numero_Cliente].SaldoC;
    linea ++;
    gotoxy(15,linea); cout << "Numero cuenta Corriente: "<< user[Numero_Cliente].Num_CuentaC;
    linea ++; 
    }
    if(user[Numero_Cliente].Num_CuentaA >0){
    gotoxy(15,linea); cout << "Saldo Actual cuenta Ahorro: "<< user[Numero_Cliente].SaldoA; 
    linea ++; 
    gotoxy(15,linea); cout << "Numero cuenta Ahorro: "<< user[Numero_Cliente].Num_CuentaA;
    linea ++; 
    }
    if(user[Numero_Cliente].Num_CuentaAL>0){
    gotoxy(15,linea); cout << "Saldo Actual cuenta Activos Liquidos: "<< user[Numero_Cliente].SaldoAL; 
    linea ++; 
    gotoxy(15,linea); cout << "Numero cuenta Ahorro: "<< user[Numero_Cliente].Num_CuentaAL;
    linea ++; 
    }
    linea ++; 
    return linea;
}

//TRansacciones deposita y retiro
void Transaccion(int actividad, int Numero_Clie)
{
    float monto;
    
    for(int c = 0; c < MAX_Actividad; c++)
    {
        if(Act_Cuenta[c].Num_Cuenta == 0)
        {
            system("cls"); 
            gotoxy(25,2); cout << "Diners Bank"; 
            gotoxy(18,3); cout << "Bienvenid@: "<< user[Numero_Clie].Nombre;
                    
            int linea = 5;
                   
            linea = mostrar_saldos(Numero_Clie, linea);
             
            switch(actividad)
            {
                case 1://depositar
                {        
                    gotoxy(8,linea);cout<<"Ingrese el monto a Depositar Bs:"; 
                    break;
                }
                case 2://retirar
                {        
                    gotoxy(8,linea);cout<<"Ingrese el monto a Retirar Bs:";
                    break;
                }
            }
            cin >> monto;
            linea ++; 
                   
            gotoxy(8,linea);cout<<"Ingrese el numero de la caja:"; 
            cin >> Act_Cuenta[c].Caja_usada;
            linea ++;
                    
            gotoxy(8,linea);cout<<"Ingrese el dia de la transaccion:"; 
            cin >> Act_Cuenta[c].Dia;
            linea ++;
                    
            gotoxy(8,linea);cout<<"Ingrese el mes de la transaccion:"; 
            cin >> Act_Cuenta[c].mes;
            linea ++;
                    
            gotoxy(8,linea);cout<<"Ingrese el año de la transaccion:"; 
            cin >> Act_Cuenta[c].ano;
            linea ++;
                    
            gotoxy(8,linea);cout<<"Ingrese cual cuenta realizo la transaccion:"; 
            if(user[Numero_Clie].Num_CuentaC >0)cout<<" 1.Corriente |";
            if(user[Numero_Clie].Num_CuentaA >0)cout<<" 2.Ahorro | ";
            if(user[Numero_Clie].Num_CuentaAL >0)cout<<" 3.Activos liquidos: ";
            cin >> Act_Cuenta[c].TipoCuenta;
            linea ++;
            
            switch(actividad)
            {
                case 1://depositar
                {	
                    switch(Act_Cuenta[c].TipoCuenta)
                    {
                        case 1:
                        {
                        user[Numero_Clie].SaldoC = user[Numero_Clie].SaldoC + monto;
                        Act_Cuenta[c].Num_Cuenta = user[Numero_Clie].Num_CuentaC;
                    
                        Numero_Transacciones++;
                        Act_Cuenta[c].Num_Transaccion = Numero_Transacciones;
                        
                        Act_Cuenta[c].Monto = monto;
                        Act_Cuenta[c].Saldo = user[Numero_Clie].SaldoC;
                        gotoxy(8,linea);cout <<"Saldo actual cuenta Corriente:"<<user[Numero_Clie].SaldoC; 
                        linea++;
                        break;
                        }
                        case 2:
                        {
                        user[Numero_Clie].SaldoA = user[Numero_Clie].SaldoA + monto;
                        Act_Cuenta[c].Num_Cuenta = user[Numero_Clie].Num_CuentaA;
                    
                        Numero_Transacciones++;
                        Act_Cuenta[c].Num_Transaccion = Numero_Transacciones;
                        
                        Act_Cuenta[c].Monto = monto;
                        Act_Cuenta[c].Saldo = user[Numero_Clie].SaldoA;
                        gotoxy(8,linea);cout <<"Saldo actual cuenta Ahorro:"<<user[Numero_Clie].SaldoA;
                        linea++;
                        break;
                        }
                        case 3:
                        {
                        user[Numero_Clie].SaldoAL = user[Numero_Clie].SaldoAL + monto;
                        Act_Cuenta[c].Num_Cuenta = user[Numero_Clie].Num_CuentaAL;
                    
                        Numero_Transacciones++;
                        Act_Cuenta[c].Num_Transaccion = Numero_Transacciones;
                        
                        Act_Cuenta[c].Monto = monto;
                        Act_Cuenta[c].Saldo = user[Numero_Clie].SaldoAL;
                        gotoxy(8,linea);cout <<"Saldo actual Activos Liquidos:"<<user[Numero_Clie].SaldoAL;
                        linea++;
                        break;
                        }
                        default:
                        {
                            cout<<"\n\nLa opcion que usted ha seleccionado no esta disponible"<<endl; 
                            cout<<"Transaccion ERRONEA."<<endl; 
                            Act_Cuenta[c].Num_Cuenta = 0;
                            system("pause");  
                            menu();
                        }
                    }
                    
                    linea ++;
                    gotoxy(8,linea);cout<<"Transaccion correcta. :D"; 
                    
                    linea ++;
                    
                    Act_Cuenta[c].Numero_Cliente = Numero_Clie;
                    
                    gotoxy(8,linea);cout<<"Numero de transaccion: #"<<Act_Cuenta[c].Num_Transaccion; 
                    gotoxy(8,linea);cout<<endl;
                    system("pause"); 
                    break;
                }
                case 2://retiro
                {
                    switch(Act_Cuenta[c].TipoCuenta)
                    {
                        case 1:
                        {
                            if(monto > user[Numero_Clie].SaldoC)
                            {
                                cout<<"\n\nError usted no tiene esa cantidad de dinero a retirar"<<endl; 
                                cout<<"Transaccion ERRONEA."<<endl; 
                                Act_Cuenta[c].Num_Cuenta = 0;
                                system("pause");  
                                menu();
                            }
                            user[Numero_Clie].SaldoC = user[Numero_Clie].SaldoC - monto;
                            Act_Cuenta[c].Num_Cuenta = user[Numero_Clie].Num_CuentaC;
                        
                            Numero_Transacciones++;
                            Act_Cuenta[c].Num_Transaccion = Numero_Transacciones;
                            
                            Act_Cuenta[c].Monto = monto;
                            Act_Cuenta[c].Saldo = user[Numero_Clie].SaldoC;
                            gotoxy(8,linea);cout <<"Saldo actual cuenta Corriente:"<<user[Numero_Clie].SaldoC; 
                            linea ++;
                            break;
                        }
                        case 2:
                        {
                            if(monto > user[Numero_Clie].SaldoA)
                            {
                                cout<<"\n\nError usted no tiene esa cantidad de dinero a retirar"<<endl; 
                                cout<<"Transaccion ERRONEA."<<endl; 
                                Act_Cuenta[c].Num_Cuenta = 0;
                                system("pause");  
                                menu();
                            }
                            user[Numero_Clie].SaldoA = user[Numero_Clie].SaldoA - monto;
                            Act_Cuenta[c].Num_Cuenta = user[Numero_Clie].Num_CuentaA;
                        
                            Numero_Transacciones++;
                            Act_Cuenta[c].Num_Transaccion = Numero_Transacciones;
                            
                            Act_Cuenta[c].Monto = monto;
                            Act_Cuenta[c].Saldo = user[Numero_Clie].SaldoA;
                            gotoxy(8,linea);cout <<"Saldo actual cuenta Ahorro:"<<user[Numero_Clie].SaldoA;
                            linea ++;
                            break;
                        }
                        case 3:
                        {
                            if(monto > user[Numero_Clie].SaldoAL)
                            {
                                cout<<"\n\nError usted no tiene esa cantidad de dinero a retirar"<<endl; 
                                cout<<"Transaccion ERRONEA."<<endl; 
                                Act_Cuenta[c].Num_Cuenta = 0;
                                system("pause");  
                                menu();
                            }
                            user[Numero_Clie].SaldoAL = user[Numero_Clie].SaldoAL - monto;
                            Act_Cuenta[c].Num_Cuenta = user[Numero_Clie].Num_CuentaAL;
                        
                            Numero_Transacciones++;
                            Act_Cuenta[c].Num_Transaccion = Numero_Transacciones;
                            
                            Act_Cuenta[c].Monto = monto;
                            Act_Cuenta[c].Saldo = user[Numero_Clie].SaldoAL;
                            gotoxy(8,linea);cout <<"Saldo actual Activos Liquidos:"<<user[Numero_Clie].SaldoAL;
                            linea ++;
                            break;
                        }
                        default:
                        {
                            cout<<"\n\nLa opcion que usted ha seleccionado no esta disponible"<<endl; 
                            cout<<"Transaccion ERRONEA."<<endl; 
                            Act_Cuenta[c].Num_Cuenta = 0;
                            system("pause");  
                            menu();
                        }
                    }
                    
                    linea ++;
                    gotoxy(8,linea);cout<<"Transaccion correcta. :D"; 
                    
                    linea ++;
                    
                    gotoxy(8,linea);cout<<"Numero de transaccion: #"<<Act_Cuenta[c].Num_Transaccion; 
                    gotoxy(8,linea);cout<<endl;
                    system("pause"); 
                    break;
                }
            }
        break;
        }
    }
}


//Muestra las cuentas corriente existentes
void MostrarCaja(int Numero_Cliente)
{    
    int linea= 7, Caja;
    system("cls");
    gotoxy(10,3);cout<<"Seleccione la caja la cual desea ver sus transacciones realizadas:";
    cin >>Caja;
    gotoxy(10,4);cout<<"Numero";
    gotoxy(10,5);cout<<"Cuenta:";
    gotoxy(24,4);cout<<"Monto:";
    gotoxy(32,4);cout<<"Tipo de";
    gotoxy(32,5);cout<<"cuenta:";
    gotoxy(50,4);cout<<"Numero";
    gotoxy(50,5);cout<<"Transaccion:";
    gotoxy(66,4);cout<<"+/-";//+ o -
    gotoxy(80,4);cout<<"Fecha";
    
    for(int c = 0; c < MAX_Actividad; c++)
	{
    	if(Act_Cuenta[c].Num_Transaccion > 0)
    	{
            if(Act_Cuenta[c].Numero_Cliente == Numero_Cliente)
       	    {
            	if(Act_Cuenta[c].Caja_usada == Caja)
            	{
                    gotoxy(10,linea);cout<<Act_Cuenta[c].Num_Cuenta;   
                    gotoxy(24,linea);cout<<Act_Cuenta[c].Monto;   
                    
                    if(Act_Cuenta[c].TipoCuenta == 1)
                    {
                        gotoxy(32,linea);cout<<"Corriente";                          
                    }  
                    else if(Act_Cuenta[c].TipoCuenta == 2)
                    {
                        gotoxy(32,linea);cout<<"Ahorro"; 
                    }  
                    else if(Act_Cuenta[c].TipoCuenta == 3)
                    {
                        gotoxy(32,linea);cout<<"Activos Liquidos"; 
                    }  
                    
                    gotoxy(50,linea);cout<<Act_Cuenta[c].Num_Transaccion; 
                    
                    if(Act_Cuenta[c].Actividad == 1)
                    {
                        gotoxy(66,linea);cout<<"+";                          
                    }  
                    else
                    {
                        gotoxy(66,linea);cout<<"-";
                    }
                    gotoxy(82,linea);cout<<Act_Cuenta[c].Dia<<"/" <<Act_Cuenta[c].mes<<"/" <<Act_Cuenta[c].ano; 
                    linea++;   
                 }  
             }
         }
    }
    linea++;     
    gotoxy(17,linea);system("pause");   
}
//detecta los movimientos de una fecha hasta otra
void MovimientoFHF(int Numero_Cliente)
{
    int linea= 14, DiaI,MesI,AnoI, DiaF, MesF,AnoF;
    system("cls");
    gotoxy(10,3);cout<<"Ingrese la fecha inicial desde donde vera sus transacciones de la cuenta de ahorro:";
    gotoxy(10,5);cout<<"Dia";
    gotoxy(10,6);cin >>DiaI;
    gotoxy(12,5);cout<<"/";
    gotoxy(13,5);cout<<"Mes";
    gotoxy(13,6);cin >>MesI;
    gotoxy(15,5);cout<<"/";
    gotoxy(17,5);cout<<"Año";
    gotoxy(17,6);cin >>AnoI;
    
    gotoxy(10,7);cout<<"Ingrese la fecha Final hasta donde vera sus transacciones de la cuenta de ahorro:";
    gotoxy(10,9);cout<<"Dia";
    gotoxy(10,10);cin >>DiaF;
    gotoxy(12,9);cout<<"/";
    gotoxy(13,9);cout<<"Mes";
    gotoxy(13,10);cin >>MesF;
    gotoxy(15,9);cout<<"/";
    gotoxy(17,9);cout<<"Año";
    gotoxy(17,10);cin >>AnoF;
     
    
    gotoxy(10,11);cout<<"Numero";
    gotoxy(10,12);cout<<"Cuenta:";
    gotoxy(24,11);cout<<"Monto:";
    gotoxy(32,11);cout<<"Tipo de";
    gotoxy(32,12);cout<<"cuenta:";
    gotoxy(50,11);cout<<"Numero";
    gotoxy(50,12);cout<<"Transaccion:";
    gotoxy(66,11);cout<<"+/-";//+ o -
    gotoxy(80,11);cout<<"Fecha";
    
    for(int c = 0; c < MAX_Actividad; c++)
	{
    	if(Act_Cuenta[c].Num_Transaccion > 0)
    	{
            if(Act_Cuenta[c].Dia >= DiaI && Act_Cuenta[c].Dia <= DiaF && Act_Cuenta[c].mes >=  MesI && Act_Cuenta[c].mes <= MesF && Act_Cuenta[c].ano >= AnoI && Act_Cuenta[c].ano <= AnoF)
            {
                if(Act_Cuenta[c].Numero_Cliente == Numero_Cliente)
        	    { 
                    if(Act_Cuenta[c].TipoCuenta == 2)//Ahorro
            	    {
                    	if(user[Numero_Cliente].Num_CuentaA >0)
                    	{
                            gotoxy(10,linea);cout<<Act_Cuenta[c].Num_Cuenta;   
                            gotoxy(24,linea);cout<<Act_Cuenta[c].Monto;   
                            
                            gotoxy(32,linea);cout<<"Ahorro";  
                            
                            gotoxy(50,linea);cout<<Act_Cuenta[c].Num_Transaccion; 
                            
                            if(Act_Cuenta[c].Actividad == 1)
                            {
                                gotoxy(66,linea);cout<<"+";                          
                            }  
                            else
                            {
                                gotoxy(66,linea);cout<<"-";
                            }
                            gotoxy(82,linea);cout<<Act_Cuenta[c].Dia<<"/" <<Act_Cuenta[c].mes<<"/" <<Act_Cuenta[c].ano; 
                            linea++;   
                         }
                     }
                 }  
             }
         }
    }
    linea++;     
    gotoxy(17,linea);system("pause"); 
}     
//Menu del cliente 
void MenuCliente(int Numero_Cliente)
{
    int select;
    
    system("cls");
    
    gotoxy(25,2); cout << "Diners Bank"; 
    gotoxy(18,4); cout << "Bienvenid@: "<< user[Numero_Cliente].Nombre; 
    
    int linea = 5;
    linea = mostrar_saldos(Numero_Cliente, linea);
    
    if(user[Numero_Cliente].Num_CuentaA >0)
    {
    gotoxy(8,linea);cout<<"1. Movimientos de la cuenta ahorro desde una fecha hasta otra fecha."; 
    linea ++; 
    }
    else
    {
    gotoxy(8,linea);cout<<"-- Opcion 1 No Disponible--Movimientos de la cuenta ahorro desde una fecha. NO POSEE CUENTA DE AHORRO";
    linea ++; 
    }
    gotoxy(8,linea);cout<<"2. Registrar Retiro de Dinero";linea ++;
	gotoxy(8,linea);cout<<"3. Registrar Deposito de Dinero";linea ++;
	gotoxy(8,linea);cout<<"4. Ver depositos y retiros realizados desde una caja determinada";linea ++;
	gotoxy(8,linea);cout<<"5. Salir";linea ++;
    gotoxy(8,linea); cout << "Seleccione: [ ]";
	gotoxy(21,linea); cin >> select;//Guarda en la variable select la opcion seleccionada por el usuario
        	
    switch(select)
    {
        case 1:
        {
            if(user[Numero_Cliente].Num_CuentaA >0)
            MovimientoFHF(Numero_Cliente); 
            else
            MenuCliente(Numero_Cliente);
        break;
        }
        case 2:
        {
            Transaccion(2, Numero_Cliente);//retiro   
        break;
        }
        case 3:
        {
            Transaccion(1, Numero_Cliente);//depositar  
        break;
        }
        case 4:
        {
            MostrarCaja(Numero_Cliente);   
        break;
        }
        case 5:
        {
            menu();  
        break;
        }
    }
}

//Sistema de registro
void RegistrarCliente()
{
    char SoN[1];
    system("cls");
    for(int c = 0; c < MAX_Usuarios; c++)
    {
        if(user[c].Num_Cliente == 0)//Slot Vacio detecta el array del estruct sin uso 
        {
            gotoxy(25,2); cout << "Diners Bank"; 
            gotoxy(26,4); cout << "Registro";  
            gotoxy(10,6); cout<<"Ingrese su Nombre_Apellido: "; 
        	cin >> user[c].Nombre;
            gotoxy(10,8); cout<<"Ingrese su cedula: "; 
        	cin >> user[c].Cedula;
            gotoxy(10,10); cout<<"Ingrese su Telefono: "; 
        	cin >> user[c].Telefono;
            gotoxy(10,12); cout<<"Ingrese su Direccion: "; 
        	cin >> user[c].Direccion;
        	cin >> user[c].Direccion;
            gotoxy(10,14); cout<<"Desea tener una cuenta corriente s/n: "; 
        	cin >> SoN;
        	SoN[0] = tolower(SoN[0]);
        	int linea = 15;
        	if(strcmp(SoN, "s") == 0)
        	{
        	Numero_Cuentas++;
        	user[c].Num_CuentaC = Numero_Cuentas;
        	
        	gotoxy(10,linea); cout<<"Ingrese el saldo que tendra en la Cuenta Corriente en Bs: ";
        	cin >> user[c].SaldoC;
        	linea += 2;
            }
            
            gotoxy(10,linea); cout<<"Desea tener una cuenta Ahorro s/n: "; 
        	cin >> SoN;
        	SoN[0] = tolower(SoN[0]);
        	linea ++;
        	if(strcmp(SoN, "s") == 0)
        	{
        	Numero_Cuentas++;
        	user[c].Num_CuentaA = Numero_Cuentas;
        	
        	gotoxy(10,linea); cout<<"Ingrese el saldo que tendra en la Cuenta Ahorro en Bs: ";
        	cin >> user[c].SaldoA;
        	linea += 2;
            }
            
            gotoxy(10,linea); cout<<"Desea tener una Cuenta de Activos Liquidos s/n: "; 
        	cin >> SoN;
        	SoN[0] = tolower(SoN[0]);
        	linea ++;
        	if(strcmp(SoN, "s") == 0)
        	{
        	Numero_Cuentas++;
        	user[c].Num_CuentaAL = Numero_Cuentas;
        	
        	gotoxy(10,linea); cout<<"Ingrese el saldo que tendra en la Cuenta de Activos Liquidos en Bs: ";
        	cin >> user[c].SaldoAL;
        	linea += 2;
            }
        	
        	Numero_Clientes++;
        	user[c].Num_Cliente = Numero_Clientes;
        	
            gotoxy(10,linea);cout<<"Registro completado correctamente.";
        	linea += 2;
            
            gotoxy(10,linea);system("pause");
            
        	break;
        }
    }
}
//Sistema de ingreso para entrar como cliente
void LogearCliente()
{
    char cedula[20];
    char SoN[1];
    
    system("cls");
    
    gotoxy(25,2); cout << "Diners Bank"; 
    gotoxy(20,4); cout << "Ingresar:";  
    gotoxy(17,6);cout<<"Ingrese su cedula:"; 
	gotoxy(37,6); cin >> cedula;
	for(int c = 0; c < MAX_Usuarios; c++)
	{
    	if(strcmp(cedula, user[c].Cedula) == 0)
    	{
            MenuCliente(c);                          
        	break;
        }
        else if(c == MAX_Usuarios-1)
        {
            gotoxy(17,10);cout<<"ERROR: Cedula no encontrada."; 
            gotoxy(10,11); cout<<"Desea salir s/n: "; 
        	cin >> SoN;
        	
        	SoN[0] = tolower(SoN[0]);
        	if(strcmp(SoN, "s") == 0)
        	{
            menu();
            }
            gotoxy(17,12);system("pause");
            LogearCliente();
        	break;
        }
    }
}

//Muestra las cuentas corriente existentes
void MostrarCuentasCorrientes()
{    
    int linea= 5;
    system("cls");
    gotoxy(17,3);cout<<"Clientes con cuenta corriente";
    gotoxy(17,4);cout<<"Nombre:";
    gotoxy(27,4);cout<<"Cedula:";
    gotoxy(40,4);cout<<"Numero De cuenta:";
    
    for(int c = 0; c < MAX_Usuarios; c++)
	{
    	if(user[c].Num_CuentaC > 0)
    	{
            gotoxy(17,linea);cout<<user[c].Nombre;   
            gotoxy(27,linea);cout<<user[c].Cedula;   
            gotoxy(40,linea);cout<<user[c].Num_CuentaC;   
            linea++;     
        }
    }
    linea++;     
    gotoxy(17,linea);system("pause");   
}

//Menu principal

void menu()
{
    int select;
    
    system("cls");
    
    gotoxy(25,2); cout << "Diners Bank"; 
    gotoxy(20,4); cout << "Seleccione una opcion:";  
    gotoxy(15,6);cout<<"1. Registrar Cliente"; 
    gotoxy(15,7);cout<<"2. Entrar como Cliente";
    gotoxy(15,8);cout<<"3. Mostrar lista de clientes con cuenta corriente"; 
    gotoxy(15,9);cout<<"4. Salír"; 
	gotoxy(22,11); cout << "Seleccione: [ ]";
	gotoxy(35,11); cin >> select;
    
    switch(select)
    {
        case 1:
        {
            RegistrarCliente();
            menu();  
            break;    
        }
        case 2:
        {
            LogearCliente(); 
            menu();  
            break;    
        }
        case 3:
        {
            MostrarCuentasCorrientes();
            menu();  
            break;    
        }
        case 4:
        {
            system("cls");
            cout<<"Cerrando..."; 
            Sleep(2000);
            exit(0);
            break;    
        }
        default:
        {
            cout<<"\n\nLa opcion que usted ha seleccionado no esta disponible"<<endl; 
            cout<<"Por favor, vuelva a intentarlo"<<endl; 
            system("pause");  
            menu();
        }
    }
}

int main()
{
    menu();
    return 1;
}
