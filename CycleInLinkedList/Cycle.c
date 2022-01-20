#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* next;
} *head;

void initialize() {
    head = NULL;
}

void insert(int num) {
    /* Create a new Linked List node */
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = num;
    /* Next pointer of new node will point to head node of linked list  */
    newNode->next = head;
    /* make new node as new head of linked list */
    head = newNode;
    printf("Inserted Element : %d\n", num);
}

void findloop(struct node* head) {
    struct node* slow, * fast;
    slow = fast = head;

    while (slow && fast && fast->next) {
        
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            printf("Linked List contains a loop\n");
            return;
        }
    }
    printf("No Loop in Linked List\n");
}

void printLinkedList(struct node* nodePtr) {
    while (nodePtr != NULL) {
        printf("%d", nodePtr->data);
        nodePtr = nodePtr->next;
        if (nodePtr != NULL)
            printf("-->");
    }
}

int main() {
    initialize();
    insert(10);
    insert(8);
    insert(3);
    insert(2);
    insert(7);
    insert(9);
    insert(100);

    //For Creating loop
    head->next->next->next->next->next->next->next = head->next;

    findloop(head);
    return 0;
}