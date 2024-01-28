#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// hasItem function
int hasItem(void *items, int itemsSize, void *item) {
    int i;
    for (i = 0; i < itemsSize; i++) {
        if (memcmp(items + i * sizeof(void*), item, sizeof(void*)) == 0) {
            return 1;
        }
    }
    return 0;
}

// getFullbits function
int getFullbits(int x) {
    int r = 0;
    for (int i = 0; i < x; i++) {
        r = (r << 1) | 0x1; 
    }
    return r;
}