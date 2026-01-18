#include <stdio.h>

void matrix_transform(const int src[5][5], int dest[5][5]) {
    
}

int main() { 
    int src[5][5] = {
        {10, 2, 3, 4, 5},
        {1, 20, 1, 1, 1},
        {5, 5, 5, 5, 5},
        {1, 1, 1, 30, 1},
        {2, 2, 2, 2, 2}
    };
    int dest[5][5];
    
    matrix_transform(src, dest);
}