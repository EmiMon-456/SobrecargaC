```mermaid
classDiagram
    %% Definición de clases
    
    class Vehículo {
        +Vehículo()
        +encender() : void

    }
    class Coche{
        +Coche()
    }

    

    %% Relaciones
    Vehículo <|-- Coche
    

```