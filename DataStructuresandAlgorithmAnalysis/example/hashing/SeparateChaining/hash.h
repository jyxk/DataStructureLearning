#ifndef _HashSep_H

struct ListNode;
typedef struct ListNode* Position;
struct HashTbl;
typedef struct HashTbl* HashTable;
typedef int ELementType;

HashTable InitializeTable(int TableSize);
void DestroyTable(HashTable H);
Position Find(ELementType Key, HashTable H);
void Insert(ELementType Key, HashTable H);
ELementType Retrieve(Position P);
//Routines such as Delete and MakeEmpty are omitted

#endif // !_HashSep_H

//Place in the implementation file
struct ListNode {
    ELementType Element;
    Position Next;
};

typedef Position List;

//List *TheList will be an array of lists, allocated later
//The lists use headers (for simplicity),
//though this wastes space
struct HashTbl {
    int TableSize;
    List* TheList;
};