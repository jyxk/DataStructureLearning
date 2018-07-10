#include "hash.h"

int MinTableSize = 4096;

HashTable InitializeTable(int TableSize) {
    HashTable H;

    if (TableSize < MinTableSize) {
        Error("Table size too small");
        return NULL;
    }

    //Allocate table
    H = malloc(sizeof(struct HashTbl));
    if (H == NULL)
        FatalError("Out of space!!!");

    H->TableSize = NextPrime(TableSize);

    //Allocate array of lists
    H->TheLists = malloc(sizeof(List) * H->TableSize);
    if (H->TheLists == NULL)
        FatalError("Out of space!!!");
    
    //Allocate list headers
    for (int i = 0; i < H->TableSize; i++) {
        H->TheLists[i] = malloc(sizeof(struct ListNode));
        if (H->TheLists[i] == NULL)
            FatalError("Out of space!!!");
        else
            H->TheLists[i]->Next = NULL;
    }

    return H;
}

Position Find(ElementType Key, HashTable H) {
    Position P;
    List L;

    L = H->TheLists[Hash(Key, H->TableSize)];
    P = L->Next;
    while (P != NULL && P->Element != Key)
        P = P->Next;
    return P; 
}

void Insert (ElementType Key, HashTable H) {
    Position Pos, NewCell;
    List L;

    Pos = Find(Key, H);
    if (Pos == NULL) {
        //Key is not found
        NewCell = malloc(sizeof(struct ListNode));
        if (NewCell == NULL)
            FatalError("Out of space!!");
        else {
            L = H->TheLists[Hash(Key, H->TableSize)];
            NewCell->Next = L->Next;
            NewCell->Element = Key;
            L->Next = NewCell;
        }
    }
}