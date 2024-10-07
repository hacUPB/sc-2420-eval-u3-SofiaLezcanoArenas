# Diagrama de clases UML

## Elementos adicionales para el juego
Lo que pienso implementar para agregar mayor dificultad al juego son objetos que sumen puntos al colisionar con ellos, que desaparezcan al detectar la colisión y que si el jugador no recoge todos los objetos (a los que llamaré chocolates) no puede pasar la meta. Sería necesario también incluir una tecla que al presionarla reinicie el juego, puesto que no pienso implementar el movimiento del jugador hacia la izquierda, cosa que hará dificultoso el recolectar todo si no se calcula bien.

## Diagrama de casos de uso
Para crear el diagrama de clases UML, primero decidí hacer un diagrama de casos de uso para esclarecer mejor el comportamiento del juego. Desde que vi el curso de POO, me ha sido de gran ayuda hacer este paso extra.

![casos_de_uso]()

Cabe aclarar que la línea azul la hice así y no que fuera un solo módulo saliendo hacia los actores que la necesitan, porque no estaba segura de si realmente podría generalizar tanto la detección de colisiones o no.

Aquí se observan algunas de las futuras clases del juego, que serían Cubito, Pista, Chocolate y Meta, además de algunos de sus métodos.

## Descripción diagrama de clases UML
![clases]()

Tomando en cuenta la guía del profesor, añadí dos clases, Game y Entidad. Al principio no tenía claro como aplicar la herencia, pero encontré algunas características y comportamientos que podían generalizarse para poder reutilizar código, como la detección de colisiones, que por supuesto variará un poco para las clases que la usan, pero que en esencia, se utiliza un condicional, y el ser una entidad, pues ambos objetos serán cuadrados, por lo que comparten características como posición y comportamientos como el dibujar el elemento u obtener la información de sus variables que son privadas.

Los únicos elementos que tienen una relación de composición serían la meta y los chocolates con la pista, pues si no hay pista, no tendría porqué haber ninguno de esos elementos en la ventana. Todas las clases tienen una relación de agregación con game y Cubito, mantiene una relación de agregación también con las demás clases, exceptuando de la que hereda y Detector.

Hay algunas clases que no poseen atributos, además, en este momento ningún método recibe parámetros, cosa que creo que deberé modificar luego pero que no alcanzo a dimensionar sin haber empezado con el código.