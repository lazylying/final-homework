#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>  
#include<malloc.h>
#include "include/graph.h"  
Status InitStack(SqStack S)  
{  
    S.base = (ElemType*)malloc(STACK_INIT_SIZE*sizeof(ElemType));  
    if (!S.base)  
        exit(OVERFLOW);//存储分配失败  
    S.top = S.base;  
    S.stacksize = STACK_INIT_SIZE;  
    return OK;  
}  
Status DestroyStack(SqStack S)  
{  
    S.top = NULL;   
    S.stacksize = 0;   
    free(S.base);   
    return OK;  
}  
Status ClearStack(SqStack S)  
{  
    S.top = S.base;  
    return OK;  
}  
Status StackEmpty(SqStack S)  
{  
    if (S.top == S.base)  
        return ERROR;  
    else  
        return TRUE;  
}  
Status StackLength(SqStack S)  
{  
    if (S.top == S.base)  
        return FALSE;  
    else  
        return (S.top - S.base);//也可以直接返回S.top - S.base  
} 
Status Push(SqStack S, ElemType *e)  
{  
    if (S.top - S.base >= STACK_INIT_SIZE)  
    {  
        S.base = (ElemType *)realloc(S.base, (S.stacksize + STACKINCREMENT) * sizeof(ElemType));  
        if (!S.base)  
        {  
            return FALSE;  
        }  
        S.top = S.base + STACK_INIT_SIZE;//栈底地址可能改变，重新定位栈顶元素  
        S.stacksize = S.stacksize + STACKINCREMENT;  
    }  
    S.top = e;  
    S.top++;  
    return OK;  
}  
Status Pop(SqStack S, ElemType *e)  
{  
    if (S.top == S.base)  
        return ERROR;  
    else  
    {  
        S.top--;  
        e = S.top;//说明：此处容易使人迷惑，实际上此元素并没真正删除，仍在S.top中，但是如果插入元素，就会被更新，就像是删除了一样  
        return *e;  
    }  
}  
Status StackTraverse(SqStack S)  
{  
    if (S.base == NULL)  
        return ERROR;  
    if (S.top == S.base)  
        printf("栈中没有元素……\n");  
    ElemType *p;  
    p = S.top;  
    while (p > S.base)  
    {  
        p--;  
        printf("%d ",*p);  
    }  
  
    return OK;  
}
