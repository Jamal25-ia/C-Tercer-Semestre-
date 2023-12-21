#include <cstdlib>
#include <iostream>
#include<fstream>
#include<windows.h>
#include<conio.h>

using namespace std;

int menu() {
	int op;
	system("cls");

	cout << "MENU DE OPCIONES\n";
	cout << "1. Registrar Persona\n";
	cout << "2. Buscar Persona\n";
	cout << "3. Salír\n";
	cout << "Seleccione: ";

	cin >> op;
	return op;
}

bool validar(string c) {
	ifstream f("Personas.txt",ios::in);
	//string ced,nom,ape;
	struct persona{
    string nom;
    string ced;
    };
    persona pers;
    
	f>>pers.ced;
	while(!f.eof()) {
		if(c==pers.ced) {
			f.close();
			return false;
		}
		f>>pers.nom;
		f>>pers.ced;
	}
	f.close();
	return true;
}

void Registrar(ofstream &f) {
	system("cls");
	
	struct persona{
    string ced;
    string nom;
    };
    persona pers;
    
	f.open("Personas.txt",ios::out|ios::app);
	cout << "Cedula : ";
	cin >> pers.ced;
	if(validar(pers.ced)) {
		cout << "Nombre: ";
		cin >> pers.nom;
		f << pers.ced << " " << pers.nom <<"\n";
		cout <<"Registrado con exito\n";
	}
	f.close();
	getch();
}

void buscar(ifstream &f) {
	//string ced,nom,cedb;
	struct persona{
    string ced;
    string nom;
    string cedb;
    };
    persona pers;
    
	system("cls");
	bool esta=false;
	f.open("Personas.txt",ios::in);
	cout << "Ingrese la Cedula de la persona a buscar : ";
	cin >> pers.cedb;
	f >> pers.ced;
	while(!f.eof()) {
		if(pers.ced == pers.cedb) {
			cout << "Cedula   : " << pers.ced << endl;
			f >> pers.nom;
			cout << "Nombre   : " << pers.nom << endl;
			esta = true;
			break;
		}
		f >> pers.ced;
	}
	if(!esta)
		cout << "Esta Persona no esta registrada\n";
	getch();
	f.close();
}

int main()
{
	ofstream EscP;//escp
	ifstream Lect;//lect
	int opc;
	do {
		opc = menu();
		switch(opc) {
			case 1:
				Registrar(EscP);
				break;
			case 2:
				buscar(Lect);
				break;
			case 3:
                system("cls");
                cout<<"Cerrando..."; 
                Sleep(2000);
                exit(0);
				break;
		}
	} while(opc != 3);
    return 1;
}
