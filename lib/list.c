#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

typedef struct list {
	tNode * first;
	tNode * last;
	int bytes;
	tNode * curr;
} tList;

typedef struct node {
	void * data;
	tNode * next;
} tNode;

tList * _newList(int bytes) {
	tList * list = malloc(sizeof(tList));
	list->first = NULL;
	list->last = NULL;
	list->curr = NULL;
	list->bytes = bytes;
}

void _addElement(tList * list, void * data) {
	tNode * node = malloc(sizeof(tNode));
	node->data = malloc(list->bytes);
	node->data = memcpy(node->data, data, list->bytes);
	node->next = NULL;

	if (_isEmpty(list)) {
		list->first = node;
	} else {
		list->last->next = node;
	}
	list->last = node;
}

int _isEmpty(tList * list) {
	return list->first == NULL;
}

void _reset(tList * list) {
	list->curr = list->first;
}

void * _next(tList * list) {
	if (list->curr == NULL) {
		return NULL;
	}
	void * data = list->curr->data;
	list->curr = list->curr->next;
	return data;
}

void _deleteList(tList * list) {
	if (list->first != NULL) {
		_deleteNode(list->first);
	}
	free(list);
}

void _deleteNode(tNode * node) {
	if (node->next != NULL) {
		_deleteNode(node->next);
	}
	free(node);
}