 # Taller

  Integrantes del grupo
    Oscar Suarez Cañon
    Nicolas Perez
    Andres Pardo

  Curso: Pensamiento Algoritmico
  Fecha: 27 de Agosto del 2025


Guías de compilación

  Guía para Windows (con MinGW o g++)
   1.Abre el Bloc de notas (o cualquier editor como Notepad++).

   2. Copia el código del repositorio y guárdalo como este con .cpp en tu escritorio.
   Al guardar, selecciona:
      a. Tipo de archivo: "Todos los archivos"
      b. Nombre: (como este en el repositorio).cpp
      c. Codificación: UTF-8
 3. Abre el Explorador de Archivos y busca la carpeta donde guardaste (como lo guardaste).cpp.
            Ejemplo: C:\Users\TuUsuario\Documents\cpp\
    4.Copia la ruta de la carpeta (arriba en la barra de dirección).
   5.Abre la terminal de Windows (CMD o PowerShell).
   6. Ve a la carpeta donde está tu archivo que copiaste con el comando cd:
Ejemplo:
cd C:\Users\TuUsuario\Documents\cpp
   7.Compila el programa con:
    g++ (como lo guardaste).cpp -o (como lo guardaste).exe
  8 .Ejecuta el programa con:
    (como lo guardaste).exe



Guía para Linux (Ubuntu/Debian/otros)

 1.Abre tu editor de texto favorito (nano, gedit, vim).
 2.Ve a la carpeta donde está el archivo (como lo guardaste).cpp.
  Ejemplo, si está en Documentos/cpp:
     cd ~/Documentos/cpp

3. Compila el archivo con g++:
   g++ (como lo guardaste).cpp -o (como lo guardaste)
 4.Ejecuta el programa con:
   ./(como lo guardaste)




   Guía para MacOS

  1.Abre la aplicación Terminal (búscala en Spotlight con Cmd + Espacio → "Terminal").
  2.Ve a la carpeta donde está el archivo (como lo guardaste).cpp.
  3.Ve a la carpeta donde está el archivo (como lo guardaste).cpp.
     Ejemplo, si está en Documents/cpp:
     
  4. Compila el archivo con g++:
    g++ (como lo guardaste).cpp -o (como lo guardaste)

   5. Ejecuta el programa:
      ./(como lo guardaste)



Repositorio:
  taller/
    ├── README.md
    ├── docs/
    │ ├── punto1_calculadora.pdf
    │ ├── punto2_validacion_fecha.pdf
    │ ├── punto3_sistema_descuentos.pdf
    │ ├── punto4_cajero_automatico.pdf
    │ ├── punto5_horoscopo.pdf
    │ └── punto6_validacion_hora.pdf
    └── src/
    ├── calculadora.cpp
    ├── validacion_fecha.cpp
    ├── sistema_descuentos.cpp
    ├── cajero_automatico.cpp
    ├── horoscopo.cpp
    └── validacion_hora.cpp

Anexos: 
    ├── cajero_automatico.cpp
    En este punto la "supuesta" clave es 1234 para acceder.
    

1.Seguir los pasos de como compilar segun el sistema operativo
2.Entrar a la carpeta `src/`.
3.Compilar el archivo correspondiente con `g++`.
4.Ejecutar el programa generado.

