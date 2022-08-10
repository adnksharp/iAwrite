# Analog Write

[![awrite-bb.png](https://i.postimg.cc/pTyj3NV2/awrite-bb.png)](https://postimg.cc/9R5zqnqS)
Usar salidas PWM para simular salidas analogicas

## Hardware y software necesarios
- Placa de desarrollo Arduino 
- LED
- Resistencia 220 $\displaystyle \Omega$ - 1 $\displaystyle K\Omega$
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/)


El codigo imprime valores en una salida PWM de 0 a 255 y 255 a 0 usando: 

| Variable | [Tipo](https://docs.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170) | Descripción |
| -------- | ---- | ----------- | 
| Out | byte | pin de [salida PWM](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/) |
| Brightness | byte | valor de la salida PWM |
| Fade | byte | velocidad de la salida PWM |
| Delay | byte | tiempo de espera entre cambios de estado |

[![awrite-esquem-tico.png](https://i.postimg.cc/d1XCYWDG/awrite-esquem-tico.png)](https://postimg.cc/S26RLf6K)
