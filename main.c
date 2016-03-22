#include <stdio.h>
#include <stdlib.h>

typedef struct {
	struct nodo* next;
	char*  name;
	int i;
}nodo;

nodo* head = NULL;
nodo* last = NULL;

int search(nodo* _nodo){
 nodo *i = head;
 while(i != NULL){
  if(_nodo->name == i->name){
	printf("found node: %s\n",i->name);
	break;
  } else
	i = i->next;
 }
return 0;
}
 
int longtd(nodo* i){
 if (i == NULL) return 0;
 int c = 1;
 while(i->next != NULL){
	 c++; i = i->next;
 }
 return c;
} 
int delete(nodo* _nodo){
 nodo *i = head;
 while(i != NULL){
  if(_nodo->name == i->name){
	/** Head Node */	
	if (i->i = 0 ) { 	
	printf("found node: %s\n",i->name);
	break;
  } else
	i = i->next;

}
return 0;
}}

int create(nodo* _nodo){
 int i;
 if(head == NULL){
	head = _nodo;
	last  = _nodo; 
	head->i = 0;	
	/** 0 means new list */
	return 0; 
 } else {
	last->next = _nodo;
	i = last->i;
	last = _nodo;
	_nodo->i = i;
	/** 1 means new add */
	return 1; 
 }
}
/**
int insert(nodo* _nodo,int i){
 int l = longtd(head);
 if (i <= l){
	if(i == 0){
	/** Insert in Head
	return 0;
	}
	if(i == l){
	/** Insert in last
	return 0;
	}
	while(i < l)	
	
	
	}
 }

 return 0;
}
**/
/**
int remove(nodo* _nodo){
 return 0;
} */

int main(){
 
 nodo* Nodo1 = malloc(sizeof(nodo));
 Nodo1->name = "Nodo Uno";
 nodo* Nodo2 = malloc(sizeof(nodo));
 Nodo2->name = "Nodo Dos";
 nodo* Nodo3 = malloc(sizeof(nodo));
 Nodo3->name = "Nodo Tres";
 nodo* Nodo4 = malloc(sizeof(nodo));
 Nodo4->name = "Nodo Cuatro";
 nodo* Nodo5 = malloc(sizeof(nodo));
 Nodo5->name = "Nodo Cinco";

 create(Nodo1);
 create(Nodo2);
 create(Nodo3);
 create(Nodo4);
 create(Nodo5);
 
 search(Nodo3);

 int l=longtd(head);
 printf("%d\n",l);




return 0;

}
