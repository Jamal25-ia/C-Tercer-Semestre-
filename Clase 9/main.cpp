/*Realice un programa en C++ que permita  através de un menú
Consultar y actualizar los datos de un elector. Del elector 
se conoce su cedula, su centro de votación y la mesa donde vota.
Se cuenta con una población de 5 electores, 5 centros de votación 
y por cada centro se cuenta con 5 mesas. Los electores deben estar registrados.*/
#include<iostream>
#include<string.h>
#include<windows.h>
#include<conio.h>

using namespace std;

const int MAX = 5;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
 void regE(char E[][10],char C[][15],int M[MAX]){
 	int nroE = 0;
 	while(nroE<MAX) {
 		system("cls");
		gotoxy(25,2); cout << "* REGISTRO DE ELECTORES *";
		gotoxy(20,4); cout<<"CEDULA: ";
		gotoxy(35,4);cin>>E[nroE];
 		gotoxy(20,6);cout<<"CENTRO: ";
		gotoxy(35,6);cin>>C[nroE];
 		gotoxy(20,8);cout<<"MESA: ";
		gotoxy(35,8);cin>>M[nroE];
 		nroE++; 		
	 }		
 }
 
 void listaE(char E[][10]){
 	int nroE = 0;
 	system("cls"); 
	gotoxy(25,2); cout << "* LISTADO DE ELECTORES *";
    while(nroE<MAX){
		gotoxy(20,4+nroE); cout<<*(E+nroE++);
	}
	getche();
 }

void verE(char E[][10],char C[][15],int M[MAX]){
	char c[10], esta = 'n';
	int nroE=0;
	
	system("cls");
	gotoxy(25,2); cout << "* CONSULTA DE ELECTOR *";
	gotoxy(20,4); cout<<"CEDULA: ";
	gotoxy(35,4);cin>>c;
    while(nroE<MAX && esta == 'n'){
    	if(strcmp(*(E+nroE),c)==0){
    		esta='s';
    		gotoxy(20,6); cout<<"Centro: "<<C[nroE];
    		gotoxy(20,8); cout<<"Mesa: "<<M[nroE];
		}
		nroE++;
	}
	getche();		
}
 
void modE(char E[][10],char C[][15],int M[MAX]){
	char c[10], esta = 'n';
	int nroE=0;
	system("cls");
	gotoxy(25,2); cout << "* ACTUALIZAR ELECTOR *";
	gotoxy(20,4); cout<<"CEDULA: ";cin>>c;
    while(nroE<MAX && esta == 'n'){
    	if(strcmp(*(E+nroE),c)==0){
    		esta='s';
    		gotoxy(20,6);cout<<"Nuevo Centro: "<<C[nroE];
    		gotoxy(20,8);cout<<"Nueva Mesa: "<<M[nroE];
			gotoxy(34,6);cin>>C[nroE];
			gotoxy(32,8);cin>>M[nroE];
		}
		nroE++;
	}	
	getche();	
}
 
 int menu(){
	int opcion;

		system("cls");
		gotoxy(20,2); cout << "* ELIJA EL NRO DE SU OPCIÓN *";
		gotoxy(25,4); cout << "1. CONSULTAR ELECTOR";
		gotoxy(25,6); cout << "2. LISTAR ELECTORES";
		gotoxy(25,8); cout << "3. ACTUALIZAR ELECTOR";
		gotoxy(25,10); cout << "4. SALIR";
		gotoxy(28,12); cout << "OPCIÓN: [ ]";
		gotoxy(37,12); cin >> opcion;
		
		return opcion;
}
 
main(){
	char ced[MAX][10],centro[MAX][15];
	int mesa[MAX],opc;
	
	regE(ced,centro,mesa);	
	do{
		opc = menu();
		switch(opc){
			case 1: 
				verE(ced,centro,mesa);break;
			case 2:
				listaE(ced);break;
			case 3:
				modE(ced,centro,mesa);break;
			case 4:
				system("cls");system("color 3");
				gotoxy(24,10);cout<<"C E R R A N D O . . .";
				Sleep(1000);
				system("cls");break;
		}
	}while(opc != 4);
}
