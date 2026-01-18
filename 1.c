#include <stdio.h>

int number_simulation(int n) {
    int kroki = 0;

    while(n >= 10) {
        unsigned ostatnia_cyfra = n % 10;
        if(ostatnia_cyfra <= 3) {
            n = n + (ostatnia_cyfra * 2);
        } else if (ostatnia_cyfra <= 6) {
            n = n - 3;
        } else {
            n = n / 2;
        }
        kroki++;
    }

    return kroki;
}

int main() {
    int n;
    printf("Liczba startowa: ");
    if(scanf("%d", &n) != 1 || n <= 0) {
        printf("Nalezy podac liczbe wieksza od 0\n");
        return 1;
    }

    int wynik = number_simulation(n);
    printf("Liczba krokow: %d\n", wynik);

    return 0;
}
