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
*Ventajas* (advantage):
    - Menos esfuerzo en el disenno
    - Menos esfuerzo en el testing
    - La lectura de un programa suele ser mas sencilla al ser del tipo secuencial
    - Se obtiene mayor productividad en general
*Desventaja* (disadvantage):
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




### Logico
Conjunto de predicados definidos a traves de clausulas (hechos y reglas) que describen propiedades y relaciones entre varios individuos y sobre estos se puede consultar

## POO
Conjunto de objetos que se relacionan entre si con referencias y mensajes en un ambiente.

**Ventajas**:
- Flexibilidad: Se utilizan modulos independientes que son bloques con los cuales se pueden crear diferentes programas
- Reusabilidad: Una vez definida una entidad, se puede utilizar donde sea conveniente
- Mantenibilidad: Es mas facil mantener las clases que conforman una aplicacion sin afectar otros componentes
- Extensibilidad: Se puede hacer mas de lo que se piensa en un principio haciendolo mas accesible

**Desventaja**:
-  En programas simples, se requieren pasos extra.
- Se requieren mas recuros de memori y procesos en general.
{ antes el HW era caro, pero hoy ya no es una limitacion }
- Necesidad de documentacion para entender la abstracion

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