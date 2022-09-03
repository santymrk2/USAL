### Trabajo Practico N° 1
Alumno: Santiago Mercado
Materia: Paradigmas de programación

1.	¿Qué es un paradigma de programación? Explique las diferencias entre los diferentes paradigmas

Un paradigma de programación es un modelo o patrón tecnológico que es adoptado por una comunidad sin que se cuestione el funcionamiento interno, sino que se utiliza y aplica para poder resolver distintas problemáticas que están determinadas.
Entre las diferencias que poseen los distintos paradigmas, podemos encontrar que cada uno nos brinda una capa de abstracción distinta a las otras, las cuales, dependiendo de la problemática, podrán ser eficientes o no, y podrán ser más eficaces.

2.	¿Qué es declaratividad?

Es una característica de algunas herramientas que permite o fuerza la separación entre el conocimiento del dominio de un programa y la manipulación de este. La declaratividad contrapone la idea de la programación imperativa en el cual el conocimiento y la lógica están mezclados y no se puede ver puramente el objetivo de la problemática, en cambio la declaratividad intenta describir el problema de la forma mas abstracta posible.

3.	¿Qué es expresividad del código? Ejemplifique

La expresividad habla de cuan complejo es un código fuente de entender por una persona. Por ejemplo, en C, si queremos sumar tres números y guardarlos en una variable, debemos escribir lo siguiente:

```
Int num = n1+n2+n3;
```

En este código existen diferentes syntaxis que pueden no ser entendidas por todos como el int.
En cambio, en Haskell hacer la suma puede ser mucho mas sencillo y entendible, como en el siguiente ejemplo:

```
Sum n1 n2 n3
```

4.	Explique el concepto de Orden superior

Orden sucperior es una caracteristica que se le atribuye a una operacion, cuando recibe a otra operacion por parametro, siendo capaz de ejecutarla internamente.

5.	Explique el concepto de Transparencia Referencial

Hablamos de transparencia referencial cuando en un programa podemos reemplazar todas la expresiones E por el valor V sin alterar el resultado del programa, sin importar el lugar donde aparezca E.

6.	Explique el concepto de Efecto Colateral

Se conoce a efecto colateral al cambio de estado que se produce por la realizacion de una operacion.

7.	Definir la función esMultiploDeTres que devuelve True si un número es múltiplo de tres. Por ejemplo esMultiploDeTres 9 -> True

```
esMultiploDeTres :: Integral a => a -> Bool
esMultiploDeTres x | (mod x 3) == 0 = True
                   | otherwise = False
```

8.	Definir la función esMultiploDeDos que recibe dos parámetros y devuelve True si el segundo es múltiplo del primero.
Por ejemplo esMultiploDeDos 9 3 -> True

```
esMultiploDeDos x y | (mod x y) == 0 = True
                    | otherwise = False
```

9.	Definir la función cubo que devuelve el cubo de un número

```
cubo x = x*x*x
```

10.	¿Qué es una variable en Haskell?
En Haskell las variables no existen en sí mismas, pero existe la posibilidad de simularlas declarando una función e ingresándole un valor. De esta manera cuando se llame a la función devolverá el valor ingresado de la misma manera que funciona una variable.
