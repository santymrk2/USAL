# Clase 10/08

Paradigma: marco de referencia sobre el cual vamos a construir software

Dato: cualquier cosa de la naturaleza que se puede medir
Informacion: se procesan los datos para hacerlos aplicables
Cuando a una empresa u organizacion tiene problemas con la informacion es cuando entramos nosotros

Paradigmas:
Estructurado: estructura de datos (), sentencias (imperativo, una receta de cocina se hace la mezcla y despues se mete en el horno), control (condicionales: if/switch, bucles:for/while/dowhile), operaciones (acciones que podemos realizar sobre los datos, Funciones: agrupar funcionalidades en comun)

Funciones basicas:
- void helloWorld(); //sin retorno, sin argumentos
- void sumarMostrar(int a, int b); //sin retorno, con argumentos
los argumentos o entradas pueden ser: valor o referencia (puntero, tiene efecto colateral. Ojo con modificar variables globales en las funciones)
vitacora: archivo en el que se declara todo lo que se hizo
- int getPi(); //retorno, sin argumentos
int >>> It use a structure to give many type of variables.
int sumar(int a, int b);
void sumar(int a, int b, int*t); >>> esto cambia una varaible del main

### Estructura:
struct es un tipo de dato nuevo (en este caso es Persona)
struct PERSONA{
	char[100] nombre;
	int edad;
	int dni;
}
en el main:
struct PERSONA p;
p.dni : 31......;
p.edad : 37;

#  Clase 24-08

Puedo programar muy bien, pero sino entiendo las necesidades del cliente no me sirve de nada. 
En la ingenieria lo importante es el diseño y la arquitectura, no lo que hace el plomero o el albanil. 
No es tan tecnico es mas resolver lo q quiere el negocio

Haskell

functions

puedoAvanzar :: String -> String -> Bool 
// el ultimo dato es la salida y los que se encuentran antes 
puedoAvanzar color | color == "verde" = True
				   | otherwise = False
// la parte de las barras verticales se llama guardas
puedoAvanzar2 


aprobo :: (Integral a) => a -> >String
aprobo 7 = "Aprobo"
aprobo 8 = "Aprobo"
aprobo 9 = "Aprobo"
aprobo 10 = "Aprobo"
aprobo x = "No aprobo"

doble x = x * 2
sumar x y = x + y
:t function
devuelve la definicion

multiplicacion de funciones  (haskell = ".")
Compound functions


`mod`
para sacar el resto de una division

aplicacion parcial
obtener otra funcion que necesita menos parametros que la original 
muchas veces no es necesario recorrer o mostrar muchas pantallas sin que necesito recorrer algun dato o ve una sola pantalla. 
Manejo de recursos


#  Clase 31-08


Vectores ≠ listas enlazadas simples
vectores: mueble con muchos cajones, nodo por un lado y el dato con el puntero en el otro.
listas enlazadas simples: gran mueble con varias cosas, cada bloque tiene el valor o dato y el puntero al siguiente.
generar 
[2..10]                    ==                    [2, 3, 4, 5, 6, 7, 8, 9, 10] 
[1,5..10]                 ==                    [1, 5, 9]
haskell lo ve como saltos

tail [] no devuelve el primero
head [] devuleve el primero
last [] devuelve el ultimo
length []
concatenar listas (++)
traer un indice (!!)
reverse []

tupla
(almacenar con distintos tipos de datos)
syntaxis:      (VALOR, VALOR)
trabajar con hasta dos elementos, sino es recomendable usar POO

Funciones para tuplas:
fst (primer elemento de la tupla)
snd (segundo elemento de la tupla)


tipos propios
data Persona = Persona String Int deriving(Show)

"el tipo de dato Persona utiliza un constructor de nombre persona, que recibe un string y un int"

record syntax
definir la syntaxis de una manera muchos mas expresiva y declarativa

data Persona = Persona {
	nombre :: String, 
	edad :: Int,
	domicilio:: String, 
	telefono :: String,
	plata:: Float }




paradigma estructurado 
-> secuencia
-> condicion 
-> bucle

funcional
-> incognitas

POO