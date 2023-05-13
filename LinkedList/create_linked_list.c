
#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
} *first = NULL;
void create(int A[], int n)
{
  int i;
  struct Node *t, *last;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++)
  {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}
void Display(struct Node *p)
{
  while (p != NULL)
  {
    printf("%d ", p->data);
    p = p->next;
  }
}
void RDisplay(struct Node *p)
{
  if (p != NULL)
  {
    RDisplay(p->next);
    printf("%d ", p->data);
  }
}

void recursiveDisplay(struct Node *p)
{
  if (p)
  {
    printf("%d ", p->data);
    recursiveDisplay(p->next);
  }
}
void recursiveRDisplay(struct Node *p)
{
  if (p)
  {
    recursiveRDisplay(p->next);
    printf("%d ", p->data);
  }
}

// function to count nodes inn a linked list
int countNode(struct Node *head)
{
  struct Node *p = head;
  int sum = 0;
  while (p != NULL)
  {
    sum++;
    p = p->next;
  }
  return sum;
}
struct Node *Reverse(struct Node *head)
{
  struct Node *prev = NULL;
  struct Node *curr = head;
  struct Node *temp;
  while (curr != NULL)
  {
    temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  return prev;
}

int sum(struct Node *head)
{
  struct Node *p = head;
  int sum = 0;
  while (p != NULL)
  {
    sum += p->data;
    p = p->next;
  }
  return sum;
}

void SortedInsert(struct Node *p, int x)
{
  struct Node *t, *q = NULL;

  t = (struct Node *)malloc(sizeof(struct Node));
  t->data = x;
  t->next = NULL;

  if (first == NULL)
    first = t;
  else
  {
    while (p && p->data < x)
    {
      q = p;
      p = p->next;
    }
    if (p == first)
    {
      t->next = first;
      first = t;
    }
    else
    {
      t->next = q->next;
      q->next = t;
    }
  }
}

int deletionAtPos(struct Node * p, int pos){
  if(pos<1 || pos>countNode(p))
  return -1;
  struct Node *q = NULL; int x;
  if(pos==1){
  q=first;
  x=first->data;
  first = first->next;
  free(q);
  return x;
  }else{
    for(int i=0; i<pos-1; i++){
      q=p;
      p=p->next;
    }
    q->next = p->next;
    x=p->data;
    free(p);
    return x;
  }
}

int isSorted(struct Node *p){
   int x = -30000;
      while(p!=NULL){
        if(p->data<x){
          return -1;
        }else{
          x=p->data;
          p=p->next;
        }

      }
      return 1;
}

void rmDuplicate(struct Node *p, int val){
     struct Node * q = p->next;
     while(q!=NULL){
          if(p->data == q->data){
            p->next = q->next;
            free(q);
            q = p->next;
          }else{
            p=q;
            q=q->next;
          }
     }
}

void reLinkedlist(struct Node * p){
  struct Node * q = p->next;
  while(q!=NULL){
      reLinkedlist(p->next);
      if(q==NULL){
        p=first;
      }else{
          q->next = p;
      }
  }
}

struct Node * mergeList(struct Node * f, struct Node * s){
       struct Node *last;
       struct Node *thired;
       if(f->data <= s->data){
          thired = f;
          last = f;
          f = f->next;
          last->next =NULL;
       }else{
        thired = s;
        last = s;
        s=s->next;
        last->next = NULL;
       }
       while(s!=NULL && f!=NULL){
        if(s->data <= f->data){
              last->next = s;
              last = s;
              s=s->next;
              last->next =NULL;
        }else{
              last->next = f;
              last = f;
              f=f->next;
              last->next =NULL;
        }
       }
       if(s!=NULL){
        last->next = s;
       }
       if(f!=NULL){
        last->next = f;
       }
}

int main()
{
  struct Node *temp;
  int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
  create(A, 8);

  recursiveRDisplay(first);
  // struct Node * R = Reverse(first);
  // recursiveRDisplay(R);
  int sums = sum(first);
  printf("\n%d ", sums);
  return 0;
}


