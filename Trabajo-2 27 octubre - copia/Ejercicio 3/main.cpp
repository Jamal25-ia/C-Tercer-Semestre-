#include <cstdlib>
#include <iostream>
#include <windows.h>


using namespace std; 

int Cantidad_Materias, Cantidad_Alumnos; //Declaramos las variables Cantidad_Materias,Cantidad_Alumnos En estas almacena la cantida de materias dada por el usuario y la cantidad de alumnos
    
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}

int menu(){//Carga el menu Donde muestra las opciones para elegir y retorna esa opcion seleccionada
	int opcion;
    system("cls");//Borramos el log del programa con system("cls");
	gotoxy(20,2); cout << "Elija una opcion:";
	gotoxy(25,4); cout << "1. Consultar notas y promedio de las materias de un alumno a través de cedula";
	gotoxy(25,6); cout << "2. Consultar el promedio de notas por materia dando el código de la materia.";
	gotoxy(25,8); cout << "3. Salír";
	gotoxy(28,10); cout << "Opcion: ";
	gotoxy(36,10); cin >> opcion;//Guarda en la variable opcion el valor ingresado
		
	return opcion;//Retorna la variable opcion
}

int main()
{
    int cadena[Cantidad_Materias][Cantidad_Alumnos];//Esta Array almacena las materias y las notas de los alumnos
    int Cedula[Cantidad_Materias][Cantidad_Alumnos];//Esta Array almacena el numero de materia y cedulas por materias diferentes
    int CodigoMateria[Cantidad_Materias];//Este Array almacena el CodigoMateria 
    
    gotoxy(31,2); cout <<"Hola Bienvenid@\n\n"<<endl;//Da el mensaje de bienvenida
    cout<<"Ingrese la cantidad Materias"<<endl;
    cin>>Cantidad_Materias;//Guarda la cantidad de materias insertada
    cout<<"Ingrese la cantidad Alumnos"<<endl;
    cin>>Cantidad_Alumnos;//Guarda la cantidad de alumnos insertada
    
    int y=0,X=0;//Creamos y ponemos los contados Y y X en 0
    
    for(X;X<Cantidad_Materias;X++)//creamos un ciclo para las Filas las cuales son la Cantidad_Materias
    {
        y =0;//Seteamos la columna actual en 0
        printf("\n\nIngresa el codigo de la Materia:%d \n",X+1);
        cin>>CodigoMateria[X];//Guardamos el codigo de la materia
            
        for(y;y<Cantidad_Alumnos; y++)//Creamos un ciclo para las columnas Donde almacena las notas y cedula de los alumnos
        {
            printf("\nIngrese la Cedula del Alumno %d\n",y+1);
            cin>>Cedula[X][y];//Guardamos la cedula del alumno 
            cout<<"\n";
            
            for(int O=0;O<Cantidad_Alumnos; O++)//Este ciclo es para comparar si la cedula ya fue incertada en la materia anteriormente
            {
                if(Cedula[X][y] == Cedula[X][O] && y!=O)//Detecta si el alumno ya fue ingresado anteriormente para evitar tener varios con la misma cedula.
                {
                printf("Error:Ingresaste la Cedula de un alumno el cual su cedula para esta materia ya fue ingresada.");
                printf("Esto es solo una advertencia ya despues si la vuelve a ingresar repetida el programa no le volvera a avisar y al momento de buscar por cedula el programa hagarrara la primera que coloco.");
                printf("\nIngrese la Cedula del Alumno %d\n",y+1);
                cin>>Cedula[X][y];//se sobre escribe la cedula del Alumno
                cout<<"\n";
                break;
                }            
            }
            printf("Ingrese la nota del Alumno %d. Materia: %d\n",y+1,X+1);
            cin>>cadena[X][y];//Guardamos la nota del alumno                      
        }
    }
	int opcion;//Declaramos la variable opcion en donde se almacena la opcion seleccionada del usuario
    opcion = menu();//Ejecutamos la funcion de menu y de hay este returna en la variable opcion
	do{ 
			switch(opcion)//creamos un switch el cual devuelve dependiendo del valor de la variable opcion 
            {
				case 1:
                {
					int Ced;//Creamos una variable para almacenar el numero de cedula dado por el usuario
                    system("cls");//Limpiamos el log del programa
                	gotoxy(20,2); cout << "Consultar notas y promedio del alumno";
                	printf("\nIngrese la Cedula del Alumno el cual quieres consultar sus notas y promedio\n");
                    cin>>Ced;//Guardamos en la variable Ced el numero de la cedula
                    
                    X=0;//Seteamos X en 0
                    int promedio=0,cantidad=0;//Declaramos 2 variables promedio  y cantidad y las seteamos en 0
                    for(X;X<Cantidad_Materias;X++)//Creamos un ciclo para ir por las filas
                    {
                        y =0;//Seteamos y en 0
                        for(y;y<Cantidad_Alumnos; y++)//creamos un ciclo para ir por las columnas
                        {
                            if(Cedula[X][y] == Ced)//Vamos comprando con las cedulas ingresadas por otros alumnos y si es igual a la cedula solicitada
                            {
                                promedio = promedio+cadena[X][y];//Vamos sumando la nota del alumno y la guardamos en promedio
                                cantidad = cantidad+1;//sumamos 1 por cada materia que este el alumno(Cada ves que el ciclo se repite)
                                printf("Materia:%d Nota:%d\n\n", X+1, cadena[X][y]);//Mostramos El numero de la materia y La nota del alumno
                            }                    
                        }
                    }
                    printf("Promedio de Materias:%d \n\n",promedio/cantidad);//Dividimos la suma de las notas y la dividimos por la cantidad de notas para sacar el promedio
                    
                    cout<<"Para volver al menu presiona una tecla";
                    cin.get();
                    cin.get();
                    opcion = menu();
					break;
                }
				case 2:
                {
					int Cod;//Creamos una variable para almacenar el codigo de la materia dado por el usuario
                    system("cls");//Limpiamos el log del programa
                	gotoxy(20,2); cout << "Consultar notas y promedio de materia";
                	printf("\nIngresa el codigo de la materia para ver las notas y promedio\n");
                    cin>>Cod;//Guardamos en la variable Cod el codigo de la materia
                    
                    X=0;//seteamos la variable x a 0
                    int promedio=0,cantidad=0;//Declaramos las variables promedio y cantidad y seteamos en 0
                    for(X;X<Cantidad_Materias;X++)//Creamos un ciclo para ir por filas
                    {
                        y =0;//Seteamos y en 0
                        for(y;y<Cantidad_Alumnos; y++)//creamos un ciclo para ir por las columnas
                        {
                            if(CodigoMateria[X] == Cod)//Vamos comprando con los codigos de las materias con la ingresada por el usuario
                            {
                                promedio = promedio+cadena[X][y];//SUmamos las notas
                                cantidad = cantidad+1;//Y vamos guardando la cantidad de notas
                                printf("Materia:%d Alumno: %d Nota del alumno:%d\n\n", CodigoMateria[X],y+1, cadena[X][y]);
                            }                    
                        }
                    }
                    printf("Promedio de la Materia:%d \n\n",promedio/cantidad);//Dividimos la suma de las notas y la dividimos por la cantidad de notas para sacar el promedio
                    
                    cout<<"Para volver al menu presiona una tecla";
                    cin.get();
                    cin.get();
                    opcion = menu();
					break;	
                }		
			}
	}while(opcion != 3);

    cin.get();
    cin.get();
    return 1;
}
