#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Book
{
    int BookSr_no;
    char Name[100];
    char Author[100];
    struct Book* next;

}*head;

void insert(int BookSr_no, char* Name, char* Author)
{

    struct Book* book = (struct Book*)malloc(sizeof(struct Book));
    book->BookSr_no = BookSr_no;
    strcpy(book->Name, Name);
    strcpy(book->Author, Author);
    book->next = NULL;

    if (head == NULL) {
        
        head = book;
    }
    else {
        
        book->next = head;
        head = book;
    }

}
void search(int BookSr_no)
{
    struct Book* temp = head;
    while (temp != NULL) {
        if (temp->BookSr_no == BookSr_no) {
            printf("Book Sr. Number: %d\n", temp->BookSr_no);
            printf("Name Of Book: %s\n", temp->Name);
            printf("Author: %s\n", temp->Author);
            return;
        }
        temp = temp->next;
    }
    printf("Book with Serial Number  %d is not found !!!\n", BookSr_no);
}
void update(int BookSr_no)
{

    struct Book* temp = head;
    while (temp != NULL) {

        if (temp->BookSr_no == BookSr_no) {
            printf("Record with Serial number %d Found !!!\n", BookSr_no);
            printf("Enter new Book name: ");
            scanf("%s", temp->Name);
            printf("Enter new Author Name: ");
            scanf("%s", temp->Author);
            printf("Updation Successful!!!\n");
            return;
        }
        temp = temp->next;

    }
    printf("Book with Serial number %d is not found !!!\n", BookSr_no);

}
void Delete(int BookSr_no)
{
    struct Book* temp1 = head;
    struct Book* temp2 = head;
    while (temp1 != NULL) {

        if (temp1->BookSr_no == BookSr_no) {

            printf("Record with Serial number %d Found !!!\n", BookSr_no);

            if (temp1 == temp2) {
                // this condition will run if
                // the record that we need to delete is the first node
                // of the linked list
                head = head->next;
                free(temp1);
            }
            else {
                // temp1 is the node we need to delete
                // temp2 is the node previous to temp1
                temp2->next = temp1->next;
                free(temp1);
            }

            printf("Record Successfully Deleted !!!\n");
            return;

        }
        temp2 = temp1;
        temp1 = temp1->next;

    }
    printf("Book with Serial number %d is not found !!!\n", BookSr_no);

}
void display()
{
    struct Book* temp = head;
    while (temp != NULL) {

        printf("Serial Number: %d\n", temp->BookSr_no);
        printf("Name Of Book: %s\n", temp->Name);
        printf("Author: %s\n", temp->Author);
        temp = temp->next;

    }
}
int main(void)
{
    head = NULL;
    int choice;
    char Name[100];
    char Author[100];
    int BookSr_no;
    do
    {
        printf("\n******************** Enter Your Choice *******************\n");
        printf("1.Insert Book details\n2. Search for Book details\n3. Delete Book details\n4. Update Book details\n5. Display all Book details\n6. Exit\n");
        printf("\n******************** Enter Your Choice *******************\n");
        
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Serial Number: ");
            scanf("%d", &BookSr_no);
            printf("Enter Book name: ");
            scanf("%s", Name);
            printf("Enter Author: ");
            scanf("%s", Author);
            insert(BookSr_no, Name, Author);
            break;
        case 2:
            printf("Enter Serial number to search: ");
            scanf("%d", &BookSr_no);
            search(BookSr_no);
            break;
        case 3:
            printf("Enter serial number to delete: ");
            scanf("%d", &BookSr_no);
            Delete(BookSr_no);
            break;
        case 4:
            printf("Enter serial number to update: ");
            scanf("%d", &BookSr_no);
            update(BookSr_no);
            break;
        case 5:
            display();
            break;
        case 6:
            exit(1);
            break;
        }

    } while (choice != 0);
    return(0);
}