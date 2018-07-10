#include "AvlTree.h"

int main(void) {
    AvlTree T = NULL;
    T = Insert(8, T);
    T = Insert(0, T);
    T = Insert(12, T);
    T = Insert(2, T);
    T = Insert(23, T);

    printf("%d\n", Retrieve(FindMin(T)));
    MakeEmpty(T);
} 