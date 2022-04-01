Algoritmo superTriangulo
	//se calcula la superficie de un triangulo
	//Santiago Meracado - abril 2022
	Definir s Como Real
	Definir b como Real 
	Definir h como Real
	
	escribir "introduzca la base: "
	leer b
	escribir "Introduzca la altura: "
	leer h
	
	si b > 0 Y h > 0 Entonces
		s = (b*h)/2
		escribir "La superficie es ", s
	SiNo
		escribir "ERROR"
	FinSi
	
FinAlgoritmo
