/* 
1.- crear pointer para saber que hay en front y rear
2.- colocal estos valores en -1 al inicializar
3.- incrementar en 1 el valor de "rear" cuando agreguemos un elemento
4.- retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front al usar dequeue
5.- antes de agregar un elemento revisar si hay espacio
6.- antes de remover un elemento revisasmos que existan elementos
7.- asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1 y agregar el valor de 0 a front al hacer nuestro primer enqueue.
*/


#include<stdio.h>
# define SIZE 5 
int values[SIZE], front = -1, rear = -1;

void enQueue(int value){
    if(rear == SIZE-1)
        printf("Nuestro Queue esta lleno\n");
    else{
        if(front == -1)
            front = 0;
        rear++;
        values[rear] = value;
        printfn("Se inserto el valor %d correctamente\n"), value;
    }
}

void deQueue(){
    if(front == -1)
        printfn("Nuestro Queue esta vacio\n");
    else{
        printfn("se elimino el valor %d\n", values[front]);
        front++;
        if(front > rear)
        front = rear = -1;
    }
}

main(int argc, char const *argv[]){
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(10);
    return 0;
}