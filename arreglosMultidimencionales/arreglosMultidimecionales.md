# Arreglos Multidimencionales

Los arreglos multidimencionales, son arreglos de mas de dos dimenciones, son similares a los bidimencionales, excepto porque cada elemento se debe referenciar por medio de tres o más índices.

A partir de tres dimensiones, los arreglos pueden visualizarse como un conjunto de matrices en el espacio tridimensional y, más allá, en dimensiones superiores.

**Consideraciones Importantes**
- Memoria: Los arreglos multidimensionales pueden consumir mucha memoria rápidamente. Por ejemplo, un arreglo de tamaño 10x10x10x10 tiene 10,000 elementos, cada uno ocupando el tamaño de un int (generalmente 4 bytes), resultando en 40,000 bytes (o aproximadamente 40 KB) de memoria.
- Índices: Todos los índices empiezan en 0 y van hasta n-1 donde n es el tamaño de la dimensión correspondiente.
- Complejidad: A medida que se aumentan las dimensiones, el código puede volverse más complejo y difícil de gestionar. Es importante planificar y documentar bien el uso de tales estructuras.

Para entenderlo mejor, haremos un arreglo tridimencional y un arreglo multidimencional de 4 dimenciones.

Para ellos veamos sus respectivos diagramas de flujo:

[![20-05-2024-0006.jpg](https://i.postimg.cc/Fs1sBNpn/20-05-2024-0006.jpg)](https://postimg.cc/svdrBFtp)

Este es un diagrama de flujo que representa la creacion de un arreglo tridimencional, y que ademas, se llena de forma automatica en cada ciclo.

[Codigo --> aqui](arreglosBidimencionales.c)


A continuacion, vemos un diagrama de flujo para representar la creacion de un arreglo de 4 dimenciones, y que ademas, tambien se llena de forma automatica en cada ciclo.

[![20-05-2024-0007.jpg](https://i.postimg.cc/fTDsXZtr/20-05-2024-0007.jpg)](https://postimg.cc/w3fn8CkX)

[Codigo --> aqui](arreglosMultidimecionales.c)



