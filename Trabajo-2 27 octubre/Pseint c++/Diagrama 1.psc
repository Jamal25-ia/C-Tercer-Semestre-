Algoritmo Ejercio_1
	Definir X Como Entero
	Dimension Array1[10]
	Dimension Array2[10]
	Dimension Array3[10]
	Dimension Array4[6]
	Para X<-0 Hasta 10 Hacer
		Array4[0] <- 0
	FinPara
	Para X<-0 Hasta 10 Hacer
		Escribir 'Ingresa el valor del Array1 espacio',X+1
		Leer Array1[X]
	FinPara
	Para X<-0 Hasta 10 Hacer
		Escribir 'Ingresa el valor del array2 espacio',X
		Leer Array2[X]
	FinPara
	Para X<-0 Hasta 10 Hacer
		Escribir 'Ingresa el valor del Array3 espacio',X
		Leer Array3[X]
	FinPara
	Para X<-0 Hasta 10 Hacer
		Array4[0] <- Array4[0]+Array1[X]
		Array4[1] <- Array4[1]+Array2[X]
		Array4[2] <- Array4[2]+Array3[X]
	FinPara
	Para X<-0 Hasta 10 Hacer
		Si Array1[X]>Array4[3] Entonces
			Array4[3] <- Array1[X]
		FinSi
		Si Array2[X]>Array4[4] Entonces
			Array4[4] <- Array2[X]
		FinSi
		Si Array3[X]>Array4[5] Entonces
			Array4[5] <- Array3[X]
		FinSi
	FinPara
	Escribir 'La Suma del Array 1 es de: %d\n',Array4[0]
	Escribir 'La Suma del Array 2 es de: %d\n',Array4[1]
	Escribir 'La Suma del Array 3 es de: %d\n',Array4[2]
	Escribir 'Mayor elemento del Array 1 es de: %d\n',Array4[3]
	Escribir 'Mayor elemento del Array 2 es de: %d\n',Array4[4]
	Escribir 'Mayor elemento del Array 3 es de: %d\n',Array4[5]
FinAlgoritmo
