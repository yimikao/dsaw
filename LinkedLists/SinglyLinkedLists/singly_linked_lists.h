
#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

class IntSLLNode {
    public:
        int data;
        //An auxiliary data member used to maintain the list
        IntSLLNode *next;

        IntSLLNode() {
            next = 0;
        }
        IntSLLNode(int i, IntSLLNode *nxt = 0) {
            data = i;
            next = nxt;
        }
};


class IntSLList {
    private:
        IntSLLNode *head, *tail;
    public:
        IntSLList() {
            head, tail = 0;
        }
        ~IntSLList();
        
        int isEmpty() {
            return head == 0;
        }
        void addToHead(int);
        void addToTail(int);
        int deleteAtHead();
        int deleteAtTail();
        void deleteNode(int);
        bool isInList(int) const;
};

#endif