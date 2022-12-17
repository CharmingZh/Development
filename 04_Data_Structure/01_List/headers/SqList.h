//
// Created by jiaming on 22-12-18.
//

#ifndef LEARN_CPP_SQLIST_H
#define LEARN_CPP_SQLIST_H

#include <stdio.h>

#define MAXSIZE 100
#define ElemType int

typedef struct {
    ElemType *item;
    int length;
}SqList;

int InitList(SqList &L);

int DestroyList(SqList &L);

SqList ClearList(SqList &L);

bool ListEmpty(SqList L);

int ListLength(SqList L);

ElemType GetItem(SqList L, int i);

int LocateItem(SqList L, ElemType e);

SqList ListInsert(SqList &L, int i, ElemType e);

SqList ListDelete(SqList &L, int i);

void TraverseList(SqList L);

#endif //LEARN_CPP_SQLIST_H
