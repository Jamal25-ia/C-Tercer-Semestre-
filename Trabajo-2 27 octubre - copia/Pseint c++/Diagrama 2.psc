Algoritmo Ejercio_2
	Definir Filas,Columnas,x,y_ Como Entero
	Escribir 'Ingresa la cantidad de Filas\n'
	Leer Filas
	Escribir 'Ingresa la cantidad de Columnas\n'
	Leer Columnas
	Dimension matriz[Filas,Columnas]
	Definir Suma_F,Suma_C Como Entero
	Para x<-0 Hasta Filas Hacer
		Para y_<-0 Hasta Columnas Hacer
			Escribir 'Posicion Columna[%d] Filas[%d]: \n',x,y_
			Leer matriz[x,y_] // Guardamos los valores en la matriz
		FinPara
	FinPara
	Para x<-0 Hasta Filas Hacer
		Suma_F <- 0
		Para y_<-0 Hasta Columnas Hacer
			Suma_F <- Suma_F+matriz[x,y_]
		FinPara
		Escribir 'La suma del vector de la fila %d es: %d\n',x,Suma_F
	FinPara
	Para y_<-0 Hasta Columnas Hacer
		Suma_C <- 0
		Para x<-0 Hasta Filas Hacer
			Suma_F <- Suma_F+matriz[x,y_]
		FinPara
		Escribir 'La suma del vector de las %d columnas es: %d\n',y_,Suma_C
	FinPara
FinAlgoritmo
