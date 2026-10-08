# Teoría
## Ejercicio 1
### A
```*var = 1;``` No se puede porque está intentando acceder a el contenido de var como si este fuese un puntero y apuntando a su contenido.
### B
Este código es correcto ya que desde ```*ptr = 1;``` está cambiando el valor de var.
### C
El código dará error porque declara un puntero "ptr" que es constante (No puede cambiar a donde apunta) sin definir la dirección de memoria al declararlo. También, después intenta cambiarle la dirección a la que apunta, por lo que daría otro error.
### D

