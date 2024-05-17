# Paso de parametros por valor

En C, los parámetros se pasan por valor de forma predeterminada. Esto significa que cuando llamas a una función y pasas un argumento, se hace una copia del valor de ese argumento y se pasa a la función. La función trabaja con esa copia y cualquier modificación que haga en la copia no afectará al valor original.

por ejemplo:

[![15-05-2024-0007.jpg](https://i.postimg.cc/vB80f53C/15-05-2024-0007.jpg)](https://postimg.cc/d7XRKZM9)

Notaras que "`a`" de la funcion principal, mantendra siempre su valor, mientras que dentro de la funcion, el valor de "`a`" si cambiara, pero no afecta al valor de la funcion principal.

[Coodigo --> aqui](valor.c)