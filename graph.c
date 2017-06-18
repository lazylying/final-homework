#include "include/graph.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void create() {
int b, c, d, i;node *p;
printf("Input your number of node:\n");
scanf("%d", &m);
for (i = 0;i < m;i++) {
	a[i] = new1;
	a[i]->weight = 0;
	a[i]->next = 0;
	printf("Input your edges and end with -1:\nTwo nodes and the weight\n");
		scanf("%d", &c);
		while (c != -1) {
			scanf("%d%d", &b, &d);
			p = new1;p->v = b;p->weight = d;p->next = a[c]->next;a[c]->next = p;a[c]->weight++;
p = new1;p->v = c;p->weight = d;p->next = a[b]->next;a[b]->next = p;a[b]->weight++;
scanf("%d", &c);

		}

	}

}
void deep(int n) {

	node *p;

	if (visited[n])return;

		printf("%d\t", n);visited[n] = 1;

	for (p = a[n]->next;p;p = p->next)deep(p->v);

}
void breadth() {

	int open1[100];

	char opened[100];

	int i, front, rear, n;

	node *p;

	front = rear = 0;

	for (i = 0;i<m;i++)opened[i] = 0;

	for (i = 0;i<m;i++) {

		if (opened[i]) continue;

		open1[++rear] = i;

		opened[i] = 1;

		while (front<rear) {

			n = open1[++front];

			printf("%d\t", n);

			for (p = a[n]->next;p;p = p->next)

				if (!opened[p->v]) {

					open1[++rear] = p->v;

					opened[p->v] = 1;

				}

		}

	}

}
void shortload(int s[], int load[], int n) {

	int i, j, k, min, finished;

	node *p;

	for (i = 0;i<m;i++) { s[i] = -1;visited[i] = 0; }

	s[n] = 0;

	for (p = a[n]->next;p;p = p->next) {

	s[p->v] = p->weight;

	load[p->v] = n;

}

visited[n] = 1;
for (i = 1;i<m;i++) {

	min = 32767;finished = 1;

	for (j = 0;j<m;j++)

		if (!visited[j] && s[j] != -1)
if (s[j]<min) { 

				min = s[j];

				k = j;
finished = 0; 
}
if (finished)break;
visited[k] = 1;

	for (p = a[k]->next;p;p = p->next)
if (!visited[p->v]) {

	if (s[p->v] == -1) { s[p->v] = s[k] + p->weight;load[p->v] = k; }

			else if (s[p->v]>s[k] + p->weight) { s[p->v] = s[k] + p->weight;load[p->v] = k; }

		}

}

}
void mintree() {

	int i, j, k, min, ad[100],sum,lc[100];

	node *p;

	for (i = 0;i<m;i++)lc[i] = -1;lc[0] = 0;ad[0] = 0;sum = 0;

	for (p = a[0]->next;p;p = p->next) { ad[p->v] = 0;lc[p->v] = p->weight; }

	for (i = 1;i<m;i++) {

min = 32767;
for(j=1;j<m;j++){
if (lc[j] && lc[j] != -1)

					if (lc[j]<min) {

						min = lc[j];

						k = j;

					}}

		sum += lc[k];lc[k] = 0;for (p = a[k]->next;p;p = p->next)if (lc[p->v])

				if (lc[p->v] == -1) { ad[p->v] = k;lc[p->v] = p->weight; }

			else if(lc[p->v]>p->weight) { lc[p->v] = p->weight;ad[p->v] = k; }

	}
printf("%d\n", sum);
printf("this  is a tree:\n");
for (i = 0;i<m;i++) {

			printf("%d\tsons:\t", i);

			for (j = 1;j<m;j++)

			if (ad[j] == i)printf("%d\t", j);

			putchar(10);

		}

}




