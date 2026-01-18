#include <stdio.h>

int calculate_score(const char *str) {
    int suma = 0;
    int mnoznik = 1;

    for(int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if(c >= 'a' && c <= 'z') {
            suma += (int) c * mnoznik;
        } else if (c >= '0' && c <= '9') {
            mnoznik *= -1;
        } else if (c >= 'A' && c <= 'Z') {
            suma = 0;
        }
    }

    return suma;
}

int main() { 
    char buffer[128];
    printf("Podaj lancuch znakow: ");
    if(fgets(buffer, sizeof(buffer), stdin) != NULL) {
        int wynik = calculate_score(buffer);
        printf("Koncowa suma: %d\n", wynik);
    }

    return 0;
}