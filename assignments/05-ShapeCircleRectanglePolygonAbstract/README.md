# Ejercicio - Herencia - Shape/Circle/Rectangle/Polygon Abstract

**Diagrama de clases UML:**

```mermaid
classDiagram
      class Shape
      <<abstract>> Shape
      Shape <|-- Circle
      Shape <|-- Rectangle
      Shape <|-- Polygon
      Shape:-int x
      Shape:-int y
      Shape:Shape()
      Shape:Shape(int, int)
      Shape: +string draw()
      Shape: +getArea()*
      Shape:+int getValueX()
      Shape:+int getValueY()
      class Circle {
        -int r
        +Circle()
        +Circle(int, int, int)
        +string draw()
        +double getArea()
      }
      class Rectangle {
        int x1;
        int y1;
        +string draw()
        +double getArea()
      }
      class Polygon {
        int n;
        int lado;
        int apotema;
        +string draw()
        +double getArea()
      }
        

```

**Diagrama de secuencia UML:**
```mermaid
   sequenceDiagram
      participant m as main
      participant s as Shape
      participant c as Circle
      
      m->>s : create()
      m->>s : draw()
      m->>s : getValueX()
      m->>s : getValueY()
      m->>c : create()
      m->>c : draw()
      m->>c : getValueX()
      m->>c : getValueY()
      m->>c : getRadio()
      
```

Este proyecto tiene la estructura básica para cualquier proyecto C++. 

La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo assignments/README.md para instrucciones sobre la compilación y ejecución del proyecto.
