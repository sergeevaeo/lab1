
#include <stdio.h>
#include "merge.h"

int main() {
    int a[] = {1, 2,3,4,5};
    int b[] = {6, 7,8,9,10};
    int a_size = sizeof(a) / sizeof (a[0]);
    int b_size = sizeof(b) / sizeof (b[0]);
    int *c = merge(a, b, a_size, b_size);
    for(int i = 0; i < a_size; i++) {
        printf("%i", a[i]);
    }
    printf("\n");
    for(int i = 0; i < b_size; i++) {
        printf("%i", b[i]);
    }
    printf("\n");
    for(int i = 0; i < b_size + a_size; i++) {
        printf("%i", c[i]);
    }
    return 0;
}
