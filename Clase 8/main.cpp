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
 
void verElectores(char *E){
	for(int i=0; i<MAX;i++){
		cout << E[i] << " ";
	}
}
void regElector(char *E, char *C, char *M){
	int nroE = 0;
	char salir = 'n';

	while(nroE < MAX && salir != 's'){
		system("cls");
		gotoxy(25,2); cout << "* REGISTRO DE ELECTORES *";
		gotoxy(20,4); cout << "CEDULA: ";
		gotoxy(35,4); cin >> E[nroE];
		gotoxy(20,6); cout << "CENTRO: ";
		gotoxy(35,6); cin >> C[nroE];
		gotoxy(20,8); cout << "NRO MESA: ";
		gotoxy(35,8); cin >> M[nroE];
		nroE++;
		gotoxy(20,10);cout << "Desea dejar de registrar electores? s/n: ";
		gotoxy(60,10);salir = tolower(getche());
	}
}

void consultarE(char E[][10],char C[][15],char M[]){
	char ced[10];
	system("cls");
	gotoxy(25,2); cout << "* CONSULTAR ELECTOR *";
	gotoxy(20,4); cout << "CEDULA: ";
	gotoxy(35,4); cin >> ced;
	
    for(int i=0; i<MAX;i++)
    {
        strcmp(E[i][10], ced[i])
		{
        
        }
	}
	
}

main(){
	char ced[MAX][10],centro[MAX][15],mesa[MAX];
	int opcion;
	
	regElector((char*)ced,(char*)centro,(char*)mesa);
	verElectores((char*)ced);
	consultarE(ced,centro,mesa);
	/*do{
		opcion = menu();
	
		switch(opcion){
			case 1:
				cout << "* CONSULTA DE ELECTOR *";
				break;
			case 2:
				cout << "* ACTUALIZAR ELECTOR *";
				break;
		}
	}while(opcion != 3);
	cin.getch();
	cin.getch();*/

}
/*#include<iostream>
#include<conio.h>
#include<cstring>
#include<windows.h>


//tolower(getcher());//El getcher obtiene el texto escrito por el usuario

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

void verElectores(char *E){
     for(int i=0; i<MAX;i++)
     {
          cout<<E[i]<<"";
     }
}

int menu(){
	int opcion;

		system("cls");
		gotoxy(20,2); cout << "* ELIJA EL NRO DE SU OPCIÓN *";
		gotoxy(25,4); cout << "1. CONSULTAR ELECTOR";
		gotoxy(25,6); cout << "2. ACTUALIZAR ELECTOR";
		gotoxy(25,8); cout << "3. SALIR";
		gotoxy(28,10); cout << "OPCIÓN: [ ]";
		gotoxy(37,10); cin >> opcion;
		
		return opcion;
}

void regElector(char *E, char *C, char *M){
	int nroE;
    char salir[1];
	for(nroE = 0 ; nroE < MAX && salir != "s";){
		system("cls");
		gotoxy(25,2); cout << "* REGISTRO DE ELECTORES *";
		gotoxy(20,4); cout << "CEDULA: ";
		gotoxy(35,4); cin >> E[nroE];
		gotoxy(20,6); cout << "CENTRO: ";
		gotoxy(35,6); cin >> C[nroE];
		gotoxy(20,8); cout << "NRO MESA: ";
		gotoxy(35,8); cin >> M[nroE];
	    nroE++;
		gotoxy(20,10); cout << "Desea dejar de registrar electores? s/n:";
		gotoxy(60,18); salir= tolower(getche());
	}
}

main() {
	int opcion;
	char ced[MAX][10], centro[MAX][15], mesa[MAX];

	regElector((char*)ced,(char*)centro,(char*)mesa);
	verElectores((char*)ced);
	opcion = menu();
	do{
			switch(opcion){
				case 1:
					//verElector(ced,centro,mesa);
					break;
				case 2:
					//actElector((char*)ced[0],(char*)centro,(char*)mesa);
					break;			
			}
	}while(opcion != 3);
	
}
*/
