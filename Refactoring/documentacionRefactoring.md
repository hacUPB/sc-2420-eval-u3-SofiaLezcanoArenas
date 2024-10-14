# Documentación proceso de refactoring juego pista en C

## Plan de acción
- Crear clases
- Crear archivos .h
- Crear atributos y clases siguiendo el diagrama del clases
- Generar herencia
- Crear las instancias en Game.c
- Pasar el código a su clase correspondiente y adaptarlo a necesidad
- Generar la agregación
- Generar la composición
- Revisar el Game.c para que todo se ejecute correctamente

## Ejecución
### Crear clases
Organizadas en la carpeta de archivos de origen, se crearon correctamente los archivos .c correspondientes a cada clase identificada en el proceso de creación del mapa.

### Crear archivos .h
Organizados en la carpeta de archivos de encabezado del proyecto, se creó un archivo .h para cada clase generada anteriormente.

### Crear atributos y clases siguiendo el diagrama del clases
En esta etapa hubo algunos problemas porque como era de esperarse, el diagrama no cubría todas las necesidades del proyecto. Es así que me vi en la necesidad de modificar ciertas clases y agregar una nueva.

- **Entidad**: en esta clase olvidé por completo que la posición se compone por dos valores, uno para x y otro para y, por lo que tenía una única variable llamada posición. Al momento de crear la instancia en Game.c, me di cuenta del error, así que eliminé la variable ***posicion*** y en reemplazo, creé ***x*** y ***y***. Esto llevó a hacer cambios en las dos clases que heredan de esta, Cubito y Chocolate para que todo concordara.

- **Ventana**: Al momento de ir revisando pedazos claves del código, me di cuenta que la ventana también podía ser tratada como un objeto, pues posee atributos y métodos. Es por esto que incluí esta clase.

### Generar herencia
En esta etapa no hubo mayor problema, sin embargo, con las clases **Detector**, **Pista** y **Meta** existió confusión pues mientras que Meta era una sola línea, Pista era un conjunto de líneas.

En un principio pensaba simplemente que cada una tuviera sus variables para crear sus instancias, sin embargo, esto tal vez podría terminar en redundancia. Por sugerencia del profesor, intenté implementar una estructura con múltiples estructuras internas para únicamente crear una instancia de la pista y no 16 que es la cantidad de líneas que la componen. Al desarrollar esta idea, primero la vi como una salvación y luego como clavarme un puñal, pues la creación de la instancia dentro de Game.c se estaba complicando demasiado. Finalmente decidí incluir las cuatro variables necesarias para crear una línea dentro de la clase **Detector**, de la cual heredan **Pista** y **Meta**. De esta manera, crearé una instancia de **Pista** por cada línea que la compone y aunque parece más largo, considero que será menos complejo.

### Crear las instancias en Game.c
Este punto ha sido clave en cuanto a encontrar problemas. Pues al intentar asignar los datos iniciales se observa claramente si algo no concuerda, como fue el caso de algunos atributos de la clase **Cubito**

### Conclusión
Los pasos mencionados en el plan de acción no son excluyentes de los demás, se deben ir desarrollando prácticamente en simultáneo para ir conectando las funcionalidades del código y evitar errores al momento de realizar pruebas de algunas funcionalidades.

En esta ocasión, no logré el objetivo de dejar el juego funcional en lo más mínimo, sin embargo, me llevo aprendizajes, como el terminar de comprender cómo se aplica el polimorfismo y que las funciones en las clases hijas deben tener nombres diferentes, que una estructura no puede volverse privada, pero que eso no quita el hecho de que el encapsulamiento se puede mantener usando métodos getters y setters, y que no se puede ser perfecto en todo y no hay nada de malo en ello.