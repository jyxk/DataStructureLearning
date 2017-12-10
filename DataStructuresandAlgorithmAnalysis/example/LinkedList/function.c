#include "list.h"
#include <stdlib.h>
//return true if L is empty
int IsEmpty(List L){
    return L->Next == NULL;
}

//return true if P is the last position in list L
//parameter L is unused in this implementation

int IsLast(Position P, List L){
    return P->Next == NULL;
}

//return position of X in L; NULL if not found

Position Find(ElementType X, List L){
    Position P;

    P = L->Next;
    while(P != NULL && P->Element != X)
        P = P->Next;

        return P;
}

//delete first occurrence of X from a list
//assume use of a header node
void Delete(ElementType X, List L){
    Position P, TmpCell;

    P = FinePrevious(X, L);

    if(!IsLast(P, L)){
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    }
}

//if X is not found, then Next field of returned
//position is NULL
//assumes a header

Position FindPrevious(ElementType X, List L){
    Position P;

    P = L;
    while(P->Next != NULL && P->Next->Element != X)

    return P;
}

//insert (after legal position)
//header implementation assumed
//parameter L is unused in thie imlpementation

void Insert(ElementType X, List L, Position P){
    Position TmpCell;
    
    TmpCell = malloc(sizeof(struct Node));
    if(TmpCell == NULL)
        Fata1Error("Out of space");

    TmpCell->Element = X;
    TmpCell->Next = P->Next;
    P->Next = TmpCell;
}
