Algoritmo Ejercio_3
	Definir Cantidad_Materias,Cantidad_Alumnos Como Entero
	Escribir 'Hola Bienvenid@'
	Escribir 'Ingrese la cantidad Materias'
	Leer Cantidad_Materias
	Escribir 'Ingrese la cantidad Alumnos'
	Leer Cantidad_Alumnos
	Dimension cadena_[Cantidad_Materias,Cantidad_Alumnos]
	Dimension Cedula[Cantidad_Materias,Cantidad_Alumnos]
	Dimension CodigoMateria[Cantidad_Materias]
	Definir y_,X Como Entero
	Para X<-0 Hasta Filas Hacer
		y_ <- 0
		Escribir '\n\nIngresa el codigo de la Materia:%d \n',X
		Leer CodigoMateria[X]
		Para y_<-0 Hasta Columnas Hacer
			Escribir '\nIngrese la Cedula del Alumno %d\n',y_+1
			Leer cadena_[X,y_] // Guardamos los valores en la matriz
			Definir O_ Como Entero
			Para O_<-0 Hasta Cantidad_Alumnos Hacer
				Escribir '\nIngrese la Cedula del Alumno %d\n',y_+1
				Si Cedula[X,y_]==Cedula[X,O_] Entonces
					Escribir 'Error:Ingresaste la Cedula de un alumno el cual su cedula para esta materia ya fue ingresada.'
					Escribir 'Esto es solo una advertencia ya despues si la vuelve a ingresar repetida el programa no le volvera a avisar y al momento de buscar por cedula el programa hagarrara la primera que coloco.'
					Escribir '\nIngrese la Cedula del Alumno %d\n',y_+1
					Leer Cedula[X,y_]
				FinSi
				Escribir 'Ingrese la nota del Alumno %d. Materia: %d\n',y_+1,X+1
				Leer cadena_[X,y_]
			FinPara
		FinPara
	FinPara
	Definir opcion_ Como Entero
	// opcion_ = menu()
	Repetir
		Segun opcion_ Hacer
			1:
				definir Ced Como Entero;
				//system("cls");
				Escribir "Consultar notas y promedio del alumno";
				Escribir"\nIngrese la Cedula del Alumno el cual quieres consultar sus notas y promedio\n";
				Leer Ced;
				
				X=0;
				Definir promedio,cantidad Como Entero
				
				Para X<-0 Hasta Cantidad_Materias Hacer
					y_ =0;
					Para y_<-0 Hasta Cantidad_Alumnos Hacer
						si Cedula[X,y_] == Ced
							promedio = promedio+cadena_[X,y_];
							cantidad = cantidad+1;
							Escribir"Materia:%d Nota:%d\n\n", X+1, cadena_[X,y_];
						FinSi
					FinPara
					Escribir"Promedio de Materias:%d \n\n",promedio/cantidad;
				FinPara
				escribir"Para volver al menu presiona una tecla";
			2:
				definir Cod Como Entero;
				Escribir"Consultar notas y promedio de materia";
				Escribir"\nIngresa el codigo de la materia para ver las notas y promedio\n";
				Leer Cod;
				
				X=0;
				Definir promedio,cantidad Como Entero//Declaramos las variables promedio y cantidad y seteamos en 0
				Para X<-0 Hasta Cantidad_Materias Hacer
					y_ =0;
					Para y_<-0 Hasta Cantidad_Alumnos Hacer
						si CodigoMateria[X] == Cod
							promedio = promedio+cadena_[X,y_];
							cantidad = cantidad+1;
							Escribir "Materia:%d Alumno: %d Nota del alumno:%d\n\n", CodigoMateria[X],y_+1, cadena_[X,y_];
						FinSi
					FinPara
					Escribir"Promedio de Materias:%d \n\n",promedio/cantidad;
					Escribir"Para volver al menu presiona una tecla";
				FinPara
		FinSegun
	Hasta Que opcion_ != 3
FinAlgoritmo
