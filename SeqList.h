#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include "SeqList.h"
#include<stdlib.h>
//顺序表，有效数据在数组中必须是连续的
//typedef int SLDateType   //定义类型使用typedef
//#define N 10   // 定义常量一般使用#define
////静态顺序表：使用的是定长数组存储（大小已经被固定了）
//typedef struct SeqList
//{
//	SLDateType a[N];
//	int size;
//}SeqList;
//
//尾插尾删   头插头删
//void SeqListPushBack(SeqList* ps, SLDateType x);
//void SeqListPopBack(SeqList* ps);
//void SeqListPushFront(SeqList* ps, SLDateType x);
//void SeqListPopFront(SeqList* ps);

//顺序表的动态存储
typedef int SLDateType
typedef struct SeqList
{
	SLDateType* a;
	int size;//有效数据的个数
	int Capacity;//容量
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);
void SeqListPopBack(SeqList* ps);
void SeqListPushFront(SeqList* ps, SLDateType x);
void SeqListPopFront(SeqList* ps);
//在任意位置的插入删除
void SeqListInsert(SeqList* ps,int pos, SLDateType x);
void SeqListErase(SeqList* ps,int pos);