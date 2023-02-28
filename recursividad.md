#### Recursividad

la recursividad es la capacidad de una funcion de llamarse a si misma.

la funcion recursiva tienen la siguientes caracteristicas.

*Se llama a si misma.
*Tienen de argumento un valor que cambio por cada iteración
*Regresan algún valor definido en cada iteración
*Tienen una condicional que define el fin del ciclo
*Manejan un stack que es el orden de las ejecuciones de las iteraciones de la función, empezando por la ultima a llamar

~~~
int fact (int n)
{
    if(n == 0)
    return(1);
    return (n*fact(n-1));
}
~~~