# Ejercicio - Herencia - Persona/Estudiante/Maestro Sin Polimorfismo

**Diagrama de clases UML:**

```mermaid
classDiagram
      Persona <|-- Estudiante
      Persona <|-- Maestro
      Persona:#string nombre
      Persona:#int edad
      Persona:+Persona()
      Persona:+Persona(string, int)
      Persona:+getNombre()
      Persona:+setNombre()
      Persona:+getEdad()
      Persona:+setEdad()
      Persona:+muestraDatos()
      class Estudiante {
        -string carrera
        +Estudiante()
        +Estudiante(string, int, string)
        +getCarrera()
        +setCarrera()
        +muestraDatos()
      }
      class Maestro {
        -string depto
        +setDepto()
        +getDepto()
        +muestraDatos()
      }

```

**Diagrama de secuencia UML:**
```mermaid
   sequenceDiagram
      participant m as main
      participant p as Persona
      participant e as Estudiante
      participant m as Maestro
      
      m->>p : create()
      m->>p : muestraDatos()
      m->>e : create()
      m->>e : muestraDatos()
      m->>m : create()
      m->>m : muestraDatos()
      
```

Este proyecto tiene la estructura básica para cualquier proyecto C++. 

La carpeta contiene el código fuente y el archivo de construcción ```make```.

La carpeta `build` contiene el codigo binario generado por el archivo de construcción ```make```.

Consulta el archivo assignments/README.md para instrucciones sobre la compilación y ejecución del proyecto.
