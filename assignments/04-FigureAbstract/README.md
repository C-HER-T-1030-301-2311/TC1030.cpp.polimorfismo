# Ejercicio - Clases Abstractas - Figure

**Diagrama de clases UML:**

```mermaid
classDiagram
      class Figura
      <<abstract>> Figura
      Figura <|-- Circulo
      Figura <|-- Rectangulo
      Figura <|-- Triangulo

      Figura : dibuja()*
      Rectangulo : dibuja()
      Triangulo : dibuja()
      Circulo : dibuja()

```

**Diagrama de secuencia UML:**
```mermaid
   sequenceDiagram
      participant t as Triangulo
      participant r as Rectangulo
            
      m->>t : create()
      m->>r : create()
      m->>t : dibuja()
      m->>r : dibuja()
    
```

Este proyecto tiene la estructura básica para cualquier proyecto C++. 

La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo assignments/README.md para instrucciones sobre la compilación y ejecución del proyecto.
