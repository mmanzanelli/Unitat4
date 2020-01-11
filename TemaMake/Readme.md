# MEMORIA TEMA MAKE

[enlace GitHub Maxi](https://github.com/mmanzanelli/Unitat4.git)

## TO-DO pagina 4

- Proveu a llançar les ordres anteriors sobre el fitxer hola.c.
- Comproveu el resultat executant els fitxers compilats.

**Creamos el archivo "hola.c" con el programa "hola mundo" y lo compilamos con el comando `gcc -Wall -g hola.c -o hola"`**
**Luego ejecutamos `./hola`y comprobamos que funciona**

___

## TO-DO pagina 8

- Creeu i compileu el primer programa de la calculadora per verificar que funciona.
- Afegiu una nova funció que es diga major,i que retornarà quin dels dos números és el major. Imprimirem elresulat com en la resta de casos, de forma, que la última línia que mostre siga algo semblant a: *El major entre 10 i 5 és 10.*
- Una vegada comprovat el funcionament, feu el mateix amb el segon exemple, afegint les modificacions corresponents a cada fitxer.
- Compileu el segon exemple i verifiqueu que tot funciona correctament.

**Creamos los archivos "calc.c" y "calc.h" luego ejecutamos `gcc -c calc.c -o calc.o` para obtener el archivo .o en este caso "calc.o".**
**Luego creamos el archivo "calcula.c" y con el comando `gcc calc.o calcula.c -o calcula` obtenemos nuestro archivo "calcula" y lo ejecutamos con `./calcula` y nos imprime:**
la suma de 10 i 5 és 15
la resta entre 10 i 5 és 5
la multiplicació de 10 i 5 és 50
la divisió entre 10 i 5 és 2 

**Despues de añadir la nueva funcion MAJOR realizando las modificaciones a cada fichero volvemos a compilar y el programa funciona.**
la suma de 10 i 5 és 15
la resta entre 10 i 5 és 5
la multiplicació de 10 i 5 és 50
la divisió entre 10 i 5 és 2
el major entre 10 i 5 és 10

![Archivo calc.c](https://raw.githubusercontent.com/mmanzanelli/imagenesEDD/master/img_U4_make/calc.c.png)
[Archivo calc.h](https://raw.githubusercontent.com/mmanzanelli/imagenesEDD/master/img_U4_make/calc.h.png)
[Archivo calcula.c](https://raw.githubusercontent.com/mmanzanelli/imagenesEDD/master/img_U4_make/calcula.c.png)

___

## TO-DO pagina 10

- Creeu el fitxer Makefile i proveu de construïr els diferents objectius, provant el resultat de make, make calcula i make calc.o. Esborra tots els fitxers objecte i executables entre cada prova.
- Prova a invertir l’ordre de les regles en el Makefile, primer la regla de calc.o i després calcula. Executa el makeamb aquest Makefile i explica els resultats.
- Restaura el fitxer Makefile amb l’ordre anterior.

**Luego de crear el fichero "makefile" y ejecutar `make` y `make calcula` se generaron el fichero "calc.o" y el "calcula".**
**Ejecutando `make calc.o`se generó el fichero "calc.o" pero no el "calcula".**
**Ejecutando `make calcula`se generaron los ficheros "calc.o" y "calcula".**

**Al invertir las ordenes y ejecutar `make` y `make calc.o`, solo genera el fichero "calc.o" pero cuando ejecutamos `make calcula` como el MAKE es muy listo!! primero se ejecutarán las tareas del objeto "calc.o", porque "calcula"  depende de él, y luego se ejecutarán las tareas del propio "calcula" para generar un ejecutable.**

**Una vez añadidas las variables al archivo "makefile" ejecutamos `make calcula` y nos genera los  archivos "calc.o" y "calcula.**
**Ejecuntando el objetivo "clean" `make clean` eliminará todos los archivos ".o"**

**Para ejecutar el objetivo "distt" `make distt` que en este caso crea una carpeta en un nivel superior y copia el archivo "calcula", requiere previamente un `make clean`y `make calcula`.**

**Para ejecutar el objetivo "targz" `make targz`que en este caso crea una carpeta "source" copia los ficheros ".c"".h"y "makefile" en ella, crea el fichero "calcula.tar", comprime en zip "calcula.tar", borra el fichero tar.gz y borra la carpeta temporal "source"; requiere previamente un `make clean`.**

**En conclucion, MAKE es una herramienta que nos perminte agilizar nuestras tareas de programación de manera significativa.**

[Archivo make](https://raw.githubusercontent.com/mmanzanelli/imagenesEDD/master/img_U4_make/makefile.png)


