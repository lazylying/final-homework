#include "include/graph.h"
#include<stdio.h>
#include<stdlib.h>
Queue* init_queue()  
{  
   Queue *queue=(Queue*)malloc(sizeof(Queue));  
   queue->head = queue->tail = NULL;  
   return queue;  
}  
 
int enQueue(Queue *pQueue,Node *pNode)  
{  
      if(pQueue->head == NULL)  
      {//when it's empty  
           pQueue->head = pNode;   
       pQueue->tail = pNode;       
      }      
      else  
      {  
           pQueue->tail->next = pNode;  
       pQueue->tail = pNode;  
      }  
}  
  
Node* deQueue(Queue *pQueue)  
{  
    if(pQueue->head == NULL)  
    {  
       return NULL;  
    }  
  
    Node *deNode= pQueue->head;  
    pQueue->head = pQueue->head->next;    
        return deNode;  
}  
  
Node* init_node(int value)  
{  
    Node  *new_node = (Node*)malloc(sizeof(Node));  
    new_node->value=value;  
    return new_node;  
}  
  
//0:empty  
int ifEmpty(Queue *pQueue)  
{  
   if(pQueue->head == NULL)  
   {  
     printf("empty tree\n");  
     return 0;  
   }  
     
   printf("queue is not empty\n");  
   return 1;  
}
