#ifndef def_list
#define def_list

typedef struct list tList;

typedef struct node tNode;

tList * _newList(int bytes);

void _addElement(tList * list, void * data);

int _isEmpty(tList * list);

void _reset(tList * list);

void * _next(tList * list);

void _deleteList(tList * list);

void _deleteNode(tNode * node);

#endif