Algoritmo promedioIngresado
	Definir N,suma,promedio,number,i Como Entero
	i <- 0
	Escribir 'Cuantos numeros desea ingresar?'
	Leer N
	Escribir 'Comienze a ingresar los numeros seguidamente: '
	Mientras i<N Hacer
		Leer number
		Si number<=0 Entonces
			Escribir 'Ingrese un numero mayor a 0'
			Leer number
			suma <- suma+number
		SiNo
			suma <- suma+number
		FinSi
		i <- i+1
	FinMientras
	promedio <- suma/N
	Escribir 'el promedio es igual a ',promedio
FinAlgoritmo
