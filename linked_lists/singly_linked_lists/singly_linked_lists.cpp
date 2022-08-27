
#include <iostream.h>
#include "singly_linked_lists.h"

IntSLList::~IntSLList() {
    for (IntSLLNode *p; !isEmpty(); ) {
        p = head->next;
        delete head;
        head = p;
    }
}

void IntSLList::addToHead(int v) {
    nwHead = new IntSLLNode(v, head);
    if(tail == 0) tail = head; 
}

void IntSLList::addToTail(int v) {
    if (tail != 0) { // if list not empty;
        nwTail = new IntSLLNode(v);
        tail->next = nwTail;
        tail = tail->next;
    }
    else head = tail = new IntSLLNode(v);
}

int IntSLList::deleteAtHead() {
    int dt = head->data;
    IntSLLNode *hd = head;
    if head == tail { // if only one node in the list;
        head = tail = 0;
    }
    else head = head->next;
    delete hd;
    return dt;
}

int IntSLList::deleteAtTail() {
    int dt = tail->info;
    if head == tail { // if only one node in the list;
        delete head;
        head = tail = 0;
    }else {
        IntSLList *tl cur;
        for (cur = head; cur->next != tail; cur = cur->next);
        delete tail;
        tail = cur;
        tail->next = 0;
    }
    return dt;
}

void 