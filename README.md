# Javax

Para realizar el make hay que correr la siguiente línea:

make -f makefile

Esto crea el compilador (compiler).

Para correr uno de los 10 programas, se puede utilizar el programita compileAndRun, que recibe como argumento el nombre del programa a correr. Ejemplo:

./compileAndRun tateti

Este archivo compila y corre el programa tateti cuyo código fuente está en src/example_programs.

De crear un nuevo archivo .javax, se lo puede compilar con la siguiente línea:

./compileProgram PATH NOMBRE

donde PATH es el path del archivo .javax y nombre es el nombre del programa a correr.

Para correrlo, basta con correr la siguiente línea:

./runProgram NOMBRE

donde NOMBRE es el nombre utilizado anteriormente. En la carpeta de mismo nombre además se genera un archivo compilation.log donde se guardan los errores detectados por el compilador diseñado, cuyo contenido se muestra a la hora de compilar el programa.
