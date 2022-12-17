//
// Created by jiaming on 22-12-18.
//
#include <headers/SqList.h>

int InitList(SqList &L){
    L.item = new ElemType[MAXSIZE];
    if(!L.item){
        return -1;
    }
    L.length = 0;
    return 0;
}

int DestroyList(SqList &L){
    delete(L.item);
    L.length = 0;
    return 0;
}

SqList ClearList(SqList &L);

bool ListEmpty(SqList L);

int ListLength(SqList L);

ElemType GetItem(SqList L, int i);

int LocateItem(SqList L, ElemType e);

SqList ListInsert(SqList &L, int i, ElemType e);

SqList ListDelete(SqList &L, int i);

void TraverseList(SqList L);