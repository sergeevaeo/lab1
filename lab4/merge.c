#include <stdlib.h>
#include "merge.h"

int * merge(int const a[], int const b[], int a_size, int b_size){
    int *c = calloc(a_size + b_size, sizeof(int));
    int i = 0;
    int j = 0;
    int k = 0;
    while(k < a_size + b_size) {
        if(a[i] < b[j]) {
            c[k] = a[i];
            k++;
            i++;
        } else {
            c[k] = b[j];
            k++;
            j++;
        }
    }
    return c;
}
