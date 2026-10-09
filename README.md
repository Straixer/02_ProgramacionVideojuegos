# Teoría
## Ejercicio 1
### A
```*var = 1;``` No se puede porque está intentando acceder a el contenido de var como si este fuese un puntero y apuntando a su contenido.
### B
Este código es correcto ya que desde ```*ptr = 1;``` está cambiando el valor de var.
### C
El código dará error porque declara un puntero "ptr" que es constante (No puede cambiar a donde apunta) sin definir la dirección de memoria al declararlo. También, después intenta cambiarle la dirección a la que apunta, por lo que daría otro error.
### D
Falla en la última línea porque intenta cambiar el valor al que apunta el puntero, pero no puede porque se ha declarado constante
### E
No funciona porque en ```int* ptr = new int(&var)``` le pasas como argumento un puntero, pero lo que pide es un int.
### F
EL código funciona, crea una variable de int, un puntero de int reservando memoria con new, pero después cambia la dirección del puntero a la dirección de la variable de int y le cambia el valor del int mediante el puntero. Pero hay un leak de memoria porque no se borra la memoria reservada por el puntero inicialmente antes de cambiar su dirección, por lo que habría un bloque de memoria reservado al que se ha perdido el acceso.
## Ejercicio 2
Es preferible usar el ´´´const &´´´ porque evitas cambiar los datos originales de la estructura
## Ejercicio 3
```int* const p``` No permite modificar la dirección de memoria a donde apunta. En cambio ```const int* p``` si q ue permite cambiar la dirección de memoria, pero no el contenido de donde está apuntado.
