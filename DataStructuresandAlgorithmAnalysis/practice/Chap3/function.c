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

//3.1 printlist
int PrintList(List L){

    Position Pointer = L->Next;
    while(!IsLast(Pointer, L)){
        printf("%d", Pointer->Element);
        Pointer = Pointer->Next;
    }
    
    return 0;
}


//3.2 PrintLots
void PrintLots(List L, List Pt){
    int mark;
    Position Pointer = Pt->Next;
    Position LPtr = L->Next;

    while(!IsLast(Pointer, Pt)){
        mark = Pt->Element;
        LPtr = L->Next;
        for (int i = mark; i > 0; i--){
            LPtr = LPtr->Next;
        }
        printf("%d", Lptr->Element);
        }
}
