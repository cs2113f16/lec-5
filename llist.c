#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct LNode {
  int data;
  struct LNode* next;
};
struct LList {
  struct LNode* head;
};

void LList_print(struct LList *list) {
  struct LNode *node;
  int i = 0;
  if (list == NULL) 
    return;
  node = list->head;
  if (node == NULL)
    return;
  while(1) {
    i++;
    printf("%d: %d\n", i, node->data);
    node = node->next;
    if(node == NULL) {
      break;
    }
  }
}

int main() {
  struct LList* list;
  struct LNode *a, *b, *c;
  list = NULL; 
  a = NULL; b = NULL; c = NULL;
  list = malloc(sizeof(struct LList));
  a = malloc(sizeof(struct LNode));
  b = malloc(sizeof(struct LNode));
  c = malloc(sizeof(struct LNode));
  list->head = a;
  a->data = 45;
  a->next = b;
  b->data = 89;
  b->next = c;
  c->data = 52;
  c->next = NULL; 
  
  LList_print(list);
  return 0;
}
