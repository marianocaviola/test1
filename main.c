#include <stdio.h>

// Prototipos exigidos por la consigna
void primero(int a, int b);
void segundo(int a, int b);
void iguales();

int main() {
    int n1, n2;

    // Dev-1
printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    
    // Dev-2
    if (n1 > n2) {
        primero(n1, n2);
    } 
    else if (n1 < n2) {
        segundo(n1, n2);
    } 
    else {
        iguales();
    }
    return 0;
}

// Dev-3
void primero(int a, int b){
    printf("El primer numero (%d) es el mayor\n", a);
}

void segundo(int a, int b){
    printf("El segundo numero (%d) es el mayor\n", a);
}

void iguales(){
    printf("Son iguales\n");
}