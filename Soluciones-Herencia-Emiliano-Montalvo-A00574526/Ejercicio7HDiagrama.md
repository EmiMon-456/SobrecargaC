```mermaid
classDiagram
    %% Definición de clases
    
    class instrumento {
        +instrumento()
        +tocar() : virtual void

    }
    class guitarra{
        +tocar() : void override
    }

    +probar() : void
    

    %% Relaciones
    instrumento <|-- guitarra

```