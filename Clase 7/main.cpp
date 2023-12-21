#include<iostream>
#include<conio.h>
#include<cstring>
#include<windows.h>

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

	for(nroE = 0 ; nroE < MAX ; nroE++){
		system("cls");
		gotoxy(25,2); cout << "* REGISTRO DE ELECTORES *";
		gotoxy(20,4); cout << "CEDULA: ";
		gotoxy(35,4); cin >> E[nroE];
		gotoxy(20,6); cout << "CENTRO: ";
		gotoxy(35,6); cin >> C[nroE];
		gotoxy(20,8); cout << "NRO MESA: ";
		gotoxy(35,8); cin >> M[nroE];
	}
}

main() {
	int opcion;
	char ced[MAX][10], centro[MAX][15], mesa[MAX];

	regElector((char*)ced,(char*)centro,(char*)mesa);
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
