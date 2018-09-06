#include "list.h"
#include <stdlib.h>

List MakeEmpty(List L) {
    if (L == NULL)
        printf("L is not created");
        DeleteList(L);
        L->Next = NULL;
        return L;
}

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

void DeleteList(List L) {
    Position p;
    p = L->Next;
    L->Next = NULL;

    while (p != NULL) {
        Position tmp;
        tmp = p->Next;
        free(p);
        p = tmp;
    }
}

Position Header(List L) {
    return L;
}

Position First(List L) {
    return L->Next;
}

Position Advance(Position P) {
    return P->Next;
}

ElementType Retrieve(Position P) {
    return P->Element;
}

void DeleteNext(Position P) {
    Position tmp = P->Next->Next;
    free(P->Next);
    P->Next = tmp;
}