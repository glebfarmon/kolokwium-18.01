#include <stdio.h>

int sequence_calc(int n) {
    if(n == 0) {
        return 0;
    }

    int reszta = n % 3;
    
    if(reszta == 0) {
        return 1 + sequence_calc(n / 3);
    }
    else if (reszta == 1) {
        return 2 * sequence_calc(n - 1);
    } else {
        return 1 + sequence_calc(n - 2);
    }
}

int main() { 
    int n;
    printf("Podaj liczbe nieujemna: ");
    if(scanf("%d", &n) != 1 || n < 0) {
        printf("Blad: Podaj liczbe nieujemna\n");
        return 1;
    }
    int wynik = sequence_calc(n);
    printf("Wynik: %d\n", wynik);
    return 0;
}