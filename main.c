#include <stdio.h>

// Prototipos exigidos por la consigna
void primero(int a, int b);
void segundo(int a, int b);
void iguales();

int main() {
    int n1, n2;

    // Dev-1

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