#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    if (n <= 1){
        printf("Stack Address => %p", &n);
        printf("\n");
        return 1;
    } 
    printf("Stack Address => %p", &n);
    printf("\n");
    return n * factorial(n-1);
}

void myMalloc(){
    for(int i = 0; i < 5; i++){
        int *a = malloc(sizeof(int));
        printf("Heap Address => %p", a);
        printf("\n");
    }
}

int No = 0;
void MyRecursiveFunc(int i){
    int j = 1; 
    printf ("%d Address Stack=> %p \n",No++, &j);
    MyRecursiveFunc(i);
}

int a,b,c,d,e;
int main()
{
    factorial(5); // Stack โตลง
    printf("\n");
    myMalloc(); // Heap โตขึ้น
    printf("\n");
    printf("Global Address => %p", &a); // Global
    printf("\n");
    printf("Global Address => %p", &b); // Global
    printf("\n");
    printf("Global Address => %p", &c); // Global
    printf("\n");
    printf("Global Address => %p", &d); // Global
    printf("\n");
    printf("Global Address => %p", &e); // Global
    printf("\n");
    int i = 0;
    MyRecursiveFunc(i); // OverFlow
    return 0;
}
