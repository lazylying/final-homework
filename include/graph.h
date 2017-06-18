#ifndef _GRAPH_H
#define _GRAPH_H
#define new1 (node*)malloc(sizeof(node))
typedef struct graphnode {

	int v, weight;

	struct graphnode *next;

}node;
node *a[100];
int m;
char visited[100];
void create();
void deep(int n);
void breadth();
void shortload(int s[], int load[], int n);
void mintree();

typedef struct _node  
{  
   int value;  
   struct _node *next;  
}Node;  
  
typedef struct _Queue  
{  
   Node *head;  
   Node *tail;  
}Queue;
Queue* init_queue();
int enQueue(Queue *pQueue,Node *pNode);
Node* deQueue(Queue *pQueue);
Node* init_node(int value);
int ifEmpty(Queue *pQueue);
#define  TRUE  1  
#define  FALSE 0  
#define  OK    1  
#define  ERROR 0  
#define  INFEASIBLE -1  
#define  OVERFLOW   -2  
#define  STACK_INIT_SIZE  100  
#define  STACKINCREMENT    10  
typedef  int  ElemType;  
typedef  int    Status;  
typedef struct  
{  
    ElemType *base;  
    ElemType  *top;  
    int  stacksize;  
}SqStack;
Status InitStack(SqStack S);
Status DestroyStack(SqStack S);
Status ClearStack(SqStack S);
Status StackEmpty(SqStack S);
Status StackLength(SqStack S);
Status GetTop(SqStack S, ElemType *e);
Status Push(SqStack S, ElemType *e);
Status Pop(SqStack S, ElemType *e);
Status StackTraverse(SqStack S);

typedef struct BTNode
{
    int data;
    struct BTNode *Lchild,*Rchild;
}BTree;
BTree * Ini_BTNode();
int creat_BiTree(BTree *bt);
void PreOrderTraverse(BTree *bt);
void InOrderTraverse(BTree *bt);
void PostOrderTraverse(BTree *bt);

#endif //_GRAPH_H
