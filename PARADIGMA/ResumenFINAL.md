Software: es un conjunto de programas, instrucciones y reglas informaticas que permite ejecutar tareas. Sistema, programacion y aplicacion

El software distribuye segun Pressman el producto mas importante: INFO


# Construccion de sw:
- Producto(programa) = A&D -> Coding -> Test -> Deploy
- Proceso
- Personal
- Proyecto = Planificacion; verificacion plan; quality control

Paradigma de programacion: propuesta tecnologica adoptada por una comunidad de programadores y su nucle no se cuestiona sino que se utiliza para resolver problemas. Modelo, patron o ejemplo

# Tipos:
- Imperativo: estructurado
- Declarativo: logico; funcional
- Orientado a objetos: POO

## Imperativo
especifica los estados de programa y sentencias que cambian el estado
secuencia ordenada de instrucciones que manipulan espacio en memoria
Base: Como se hace algo

### Estructurado
#### *Ventajas* (advantage):
- Menos esfuerzo en el disenno
- Menos esfuerzo en el testing
- La lectura de un programa suele ser mas sencilla al ser del tipo secuencial
- Se obtiene mayor productividad en general
#### *Desventaja* (disadvantage):
- Monobloque de código: imposibilidad de no producir danno colateral con nuevas funcionalidades
- Complejidad de reutilizacion
- Cantidad de lineas mayor

## Declarativo
construccion especificando un conjunto de condiciones, proposiciones, afirmaciones que describen el problema
Las variables son utilizadas con transparencia refencial
Base: Como es algo

Las sentencias no son las instruciones para resolver el problema sino que lo describen.

### Funcional
Conjutno de funciones (relaciones que cumplen con la unicidad y existencia), que pueden ser evaluadas para obtener un resultado.
Transformacion de un input en un output (la funcion es una caja negra, ya que no se necestia acceso al interior)

**Caracteristicas**:
- Unicidad: Cada elemento de A esta relacionado con uno solo de B
- Variables: valor desconocido o que todavia no fue calculado

**Ventajas**:
- Codigo elegante
- Concurrencia eficaz
- Bajo indice de errores
- Facilidad en la depuracion y pruebas
- Evaluacion diferida (valor evaluado y almacenado cuando es necesario)

**Desventajas**:
- Los valores inmutables y recursividad suelen producir reduccion en el rendimiento
- A veces, escribir fucniones puras provoca menos legibilidad
- Escribir programas recursivos en vez de bucles

#### Haskell

```
Set-ExecutionPolicy Bypass -Scope Process -Force;[System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072;Invoke-Command -ScriptBlock ([ScriptBlock]::Create((Invoke-WebRequest https://www.haskell.org/ghcup/sh/bootstrap-haskell.ps1 -UseBasicParsing))) -ArgumentList $true
```

**Definicion de funcion**:
```
nombreFunción:: Tipo_de_Dato_Entrada -> Tipo_de_Dato_Salida
```
Luego va el cuerpo
Para ejecutar:
    Aplicacion: ```:l nombreAplicacion.hs```
    Funcion: ```:t nombreFuncion```

lenguaje con chequeo estático de tipos

max x y | x > y     = x
        | otherwise = y

Sigue la logica matematica:
    un hecho que depende de otro
    variable como incognita, valor sin resolver, en lugar de posicion en memoria que puede sobre escribirse

**Composicion de funciones**:
lo que devuelve g hay que aplicarselo a f (ambas deben ser funciones)
genereando una nueva funcion

se aplica una nueva funcion que resulta de aplicar f primero y luego g (en haskell se escibe al reves g.f) y es muy importante el punto
Ejemplo:
cuadruple numero = (doble.doble) numero
doble :: Int -> Int

Listas
[]
Elementos tienen que ser del mismo tipo de dato y la cantidad varia
head (cabeza); tail (cola); length (longitud); sum (suma los elmentos); ++ (concatena); take (los primeros n elementos); drop (lista sin los primeros n elementos); !! (elemento en cierta posicion); reverse;

Tuplas
complejo(real, img)
Elementos de diferentes tipos de datso y la cantidad es fija
fst; snd;

tipos propios
```
dataPersona=PersonaStringInt deriving(Show)
Persona "Santiago" 32
nombre(Personan e) =n
edad(Personan e) =e
```
Otra manera
```
dataPersona=Persona{
nombre ::String,
edad ::Int,
domicilio ::String,
telefono::String,
fechaNacimiento::(Int, Int, Int),
buenaPersona::Bool,
plata ::Float}
```


### Logico
Conjunto de predicados definidos a traves de clausulas (hechos y reglas) que describen propiedades y relaciones entre varios individuos y sobre estos se puede consultar

## POO
Conjunto de objetos que se relacionan entre si con referencias y mensajes en un ambiente.
Tecnica de programacion que usa objetos y sus interacciones para disennar apps. Se acerca mas a la manera de expresarnos en la vida real.
Comvina datos y procedimientos en una entidad unica.

Ilusion de simplicidad

**Ventajas**:
- Flexibilidad: Se utilizan modulos independientes que son bloques con los cuales se pueden crear diferentes programas
- Reusabilidad: Una vez definida una entidad, se puede utilizar donde sea conveniente
- Mantenibilidad: Es mas facil mantener las clases que conforman una aplicacion sin afectar otros componentes
- Extensibilidad: Se puede hacer mas de lo que se piensa en un principio haciendolo mas accesible

**Desventaja**:
-  En programas simples, se requieren pasos extra.
- Se requieren mas recuros de memoria y procesos en general. <= <= <=
{ antes el HW era caro, pero hoy ya no es una limitacion }
- Necesidad de documentacion para entender la abstracion

### Objeto
Algo que puedo representar a traves de una idea o concepto. Tiene entidad
Importa el modelo mental y no el real

### Clase
Es una agrupacion o coleccion de objetos que comparten una estructura comun y comportamiento.
Consta de atributos y metodos.
Todo objeto pertenece a una clase y el objeto es una instancia del mismo.
Son estaticas, durante la ejecucion no existen
- Atributos: datos contenidos dentro de un objeto (caracteristica o propiedades) y pueden ser variables, constantes o estructuras de datos.
```<Modo de Acceso> <Tipo de Dato> <Nombre del atributo>```

Modos:
    + Publico: accesibles fuera de la clase = +
    + Privado: solo accesibles dentro de la implementacion de clase = -
    + Protegido: son accesibles para la propia clase e hijas = #

- Estado: esta determinado por los valores que poseen los atributos en un momento.

- Mensajes: mode de interactuar de los objetos. cosas que le puedo pedir a un objeto que haga. Se utiliza la abstraccion ya que no se sabe como funciona sino que solo se lo invoca
Partes: Identidad del receptor; nombre del metodo a ejecutar; lista de parametro para el metodo.

- Metodo: operaciones que se aplicacan sobre los objetos y permiten crearlos, cambiar su estado o consultar variables. secuencia de lineas de codigo con un nombre. Cuando se manda un mensaje se activa el metodo cuyo nombre coincide con el del mensaje.
methodlookup

Constructor:
inicializar objeto cuando es creado
los valores inciales son tomados del constructor.

Destructor: se eliminan los objetos que ya no se utilizan.
<variable_objeto>.<nombre_método>([<Lista de parámetros]);

- Ambiente: donde viven los objetos. imagen para smalltalk o virtual machine para java

Conceptos:
- Comportamiento: los procedimientos o metodos utilizaods por un objeto.
- Identidad: cada objeto tiene una identidad unica.
- Encapsulamiento: ocultamiento del estado de los datos miembro de un objeto y solo cambia mediante lo que este definido para ese objeto.
- Interfaz: lo publica el objeto para que otro objeto lo use.
- Implementacion: lo que el objeto encapsula para definir como se termina resolviendo el mensaje

- Cardinalidad o multiplicidad: numero de ocurrencias que se pueden dar en una relacion. Ej: una persona compra muchos autos y un auto es comprado por una sola persona.
maxima y minima

1 : uno y solo uno
0..1 : cero y uno
N..M : desde n hasta m
* : cero o varios
0..* : cero o varios
1..* : uno o varios

- Herencia: una clase se crea a partir de una existente
Herencia simple (la clase puede herdar de otra clase)
Herencia multiple (la clas ehija puede heredar de otras clases padre)

*Asociacion*: dos clases tienen dependencia de utilizacion (utilizan atributos y/o metodos) no necesariamente una es padre de la otra.
*Agregacion*: objeto como composicion de otros objetos
*Composicion*: componente es parte esencial de un elemento. si el componente se elimina desaparece la mayor



# Conceptos transversales
+ **Abstraccion**:
Forma de interpretar y conceptualizar lo mas importante de una entidad compleja, sin tener en cuenta todos los detalles.
Estruct => procedimiento
La declaratividad es otr forma que nos permite describir el conocimiento relativo a un problema sin preocuparse por los algoritmos logicos.
    + Alto nivel & Bajo nivel: La abstracion tiene niveles, siendo los altos aquellos que son mas cercanas al programador y bajos a la maquina.

+ **Declaratividad**:
Aquellas que intentan separar el conocimiento del dominio de un programa y la manipulacion de estos conocmientos.
{Se encuentran en todos excepto en la imperativa}
Sera declarativo cuando  la descripcion del problema esta separado de los algoritmos.
Esta caracteristica divide al programa en lo siguiente:
    - Objetivo
    - Conocimiento
    - Motor

+ **Expresividad**:
"nivel estetico" de un codigos
Es escribir un codigo de maner que pueda ser de facil entender para una persona.
Como se logra?
    - Buenos nombres
    - Buenas abstraciones
    - Identacion
    - Descriptivo
    - Claro y simple
    - Respetar convenciones

+ **Orden Superior**:
Se produce cuando una operacion recibe otra operacion como parametro sinedo capaz de ejecutarla internamente.
Ventajas:
    - reutilizar comportamiento comun
    - separar responsabilidades
    - partes incompletas se rellenan pasando un comportamiento como parametro

+ **Tranparencia Referencial**:
Un programa posee este cuando se puede reemplazar todas las expresiones E por el valor V sin alterar el resultado del programa sin imoprtar donde este E.
Es: *Independiente* (no dependen del estado de nada fuera de si), *Deterministica* (siempre devuelven el mismo valor dados los mismos argumentos), *No produce efecto colateral* (se produce un cambio de estado por una operacion)

+ **Asignacion Destructiva**:
es reemplazar el valor de una variable por otro valor






```
My code
```