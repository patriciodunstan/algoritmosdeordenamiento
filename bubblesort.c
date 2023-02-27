/*1.- comenzamos a hacer la comparación de elementos adyacentes 
2.- repetimos hasta tener una pasada completa sin ningún*/
//%d es para indicar que estamos trabajando con enteros.

#include<stdio.h>

void cambiar_pos(int *n1, int *n2)// funcion que se encarga de cambiar de posicion, el tipo void es para funciones que no retornan valores
{
    int temp = *n1;//la variable temporal nos ayuda a almacenar la variable mientras se hace el cambio.
    *n1 = *n2;
    *n2 = temp;
};

void bubbleSort(int vector_entrada[], int n)
{
    int i, j;
    for(i = 0; i < n-1; i++)// recorrido principal se le resta 1 para comenzar en la posicion previa
    {
        for(j = 0; j < n-i-1; j++)//con este for posicionas el vector en la celda correcta (la anterior a i)
        {
            if(vector_entrada[j] > vector_entrada[j+1])
            cambiar_pos(&vector_entrada[j], &vector_entrada[j+1]);
        }
    }
}

int print_array( int vector_entrada[], int n)
{
    int i;
    for(i = 0; i < n-1; i++){
        printf("%d  ,", vector_entrada[i]);//este formato con el espacio ayuda a que se vea como un array.
    printf("\n fin del ordenamiento");
    }
        
}

main(int argc, char const *argv[])
{
    int vector_entrada[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(vector_entrada)/sizeof(vector_entrada[0]);//operacion para calcular el tamaño de mi vector func sizeof entrega el tamaño 
    bubbleSort(vector_entrada, n);
    print_array(vector_entrada, n);
    printf("\n");
    return 0;
}