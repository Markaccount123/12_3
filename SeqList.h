#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include "SeqList.h"
#include<stdlib.h>
//˳�����Ч�����������б�����������
//typedef int SLDateType   //��������ʹ��typedef
//#define N 10   // ���峣��һ��ʹ��#define
////��̬˳���ʹ�õ��Ƕ�������洢����С�Ѿ����̶��ˣ�
//typedef struct SeqList
//{
//	SLDateType a[N];
//	int size;
//}SeqList;
//
//β��βɾ   ͷ��ͷɾ
//void SeqListPushBack(SeqList* ps, SLDateType x);
//void SeqListPopBack(SeqList* ps);
//void SeqListPushFront(SeqList* ps, SLDateType x);
//void SeqListPopFront(SeqList* ps);

//˳���Ķ�̬�洢
typedef int SLDateType
typedef struct SeqList
{
	SLDateType* a;
	int size;//��Ч���ݵĸ���
	int Capacity;//����
}SeqList;

void SeqListInit(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDateType x);
void SeqListPopBack(SeqList* ps);
void SeqListPushFront(SeqList* ps, SLDateType x);
void SeqListPopFront(SeqList* ps);
//������λ�õĲ���ɾ��
void SeqListInsert(SeqList* ps,int pos, SLDateType x);
void SeqListErase(SeqList* ps,int pos);