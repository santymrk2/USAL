Algoritmo esParOImpar
	Definir num Como Entero
	Escribir "ingresen un numero: "
	leer num
	mientras num<0 o num>1 Hacer
		num = num - 2
	FinMientras
	si num = 1 Entonces
		Escribir "el numero es impar"
	SiNo
		Escribir "el numero es par"
	FinSi 
FinAlgoritmo
