#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
typedef struct BTNode
{
    int data;
    struct BTNode *Lchild,*Rchild;
}BTree;
//初始化
BTree * Ini_BTNode()
{
    BTree *bt ;
    int a;
    bt=(BTree *)malloc(sizeof(BTree));
    printf("输入根节点：（0表示空树）\n");
    scanf("%d",&a);
    if(a==0)
    {
        printf("这是空树！");
        exit(0);
    }
    bt->data=a; 
    bt->Lchild=NULL;  //左子树节点 
    bt->Rchild=NULL;  //右子树节点 
    return bt;
} 
int creat_BiTree(BTree *bt)//输入左子树 
{
       
      int a;
      BTree *Node;
      printf("请输入%d节点的左孩子(0为空)\n",bt->data) ;
      scanf("%d",&a);
      if(a!=0)
      {
              Node=(BTree*)malloc(sizeof(BTree));
              Node->data=a;
              Node->Lchild=NULL;
              Node->Rchild=NULL;
              bt->Lchild=Node;
              creat_BiTree(bt->Lchild);
                
      } 
      printf("请输入%d节点的右孩子(0为空)\n",bt->data) ; //输入右子树
      scanf("%d",&a);
      if(a!=0)
      {
              Node=(BTree *)malloc(sizeof(BTree));
              Node->data=a;
              Node->Lchild=NULL;
              Node->Rchild=NULL;
              bt->Rchild =Node;
              creat_BiTree(bt->Rchild);
                
      }
      
      return 0;
      
      
}
void PreOrderTraverse(BTree *bt) //先序遍历
{
    if(bt!=NULL)
   { printf("%d -->",bt->data);
     PreOrderTraverse(bt->Lchild); 
     PreOrderTraverse(bt->Rchild);            
   }
}
void InOrderTraverse(BTree *bt) //中序遍历 
{
    if(bt!=NULL)
   { 
     InOrderTraverse(bt->Lchild);
     printf("%d -->",bt->data); 
     InOrderTraverse(bt->Rchild);            
   }
}
void PostOrderTraverse(BTree *bt) //后序遍历 
{
    if(bt!=NULL)
   { 
     PostOrderTraverse(bt->Lchild);
     PostOrderTraverse(bt->Rchild); 
     printf("%d -->",bt->data);            
   }
} 
