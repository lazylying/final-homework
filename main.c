#include "include/graph.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
int main()  
{  
  Queue *queue=init_queue();  
  int i;  
  
  ifEmpty(queue);  
  printf("insert node to queue\n");  
  for(i=1; i<7;i++)  
  {  
   Node *node = init_node(i);  
   enQueue(queue,node);  
  // free(node);  
  }  
    
//  Node *node = init_node(1);  
//  printf("node->value = %d\n",node->value);  
//  enQueue(queue,node);  
  ifEmpty(queue);  
    
  for(i=0;i<7;i++)  
  {  
      Node *deNode = deQueue(queue);  
      if(deNode==NULL)  
      {  
         printf("NULL\n");  
      }  
      else  
      {  
         printf("deNode->value = %d\n",deNode->value);  
      }  
        
  }  
  free(queue);  
  return 0;  
}  
