#include <stdio.h>
#include <stdlib.h>

struct Node *deleteDuplicates(struct Node *head);

// Define a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to add a node to the sorted linked list
void addNode(struct Node **headRef, int num)
{
    // Create a new node with the number
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = num;
    newNode->next = NULL;

    // If the list is empty, make the new node the head of the list
    if (*headRef == NULL)
    {
        *headRef = newNode;
        return;
    }

    // If the new node is less than the head, make it the new head
    if (num < (*headRef)->data)
    {
        newNode->next = *headRef;
        *headRef = newNode;
        return;
    }

    // Find the correct position to insert the new node in the sorted list
    struct Node *current = *headRef;
    while (current->next != NULL && current->next->data < num)
    {
        current = current->next;
    }

    // Insert the new node into the sorted list
    newNode->next = current->next;
    current->next = newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
    printf("The numbers in the list are: ");
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    // Initialize the linked list
    struct Node *head = NULL;

    // Add some nodes to the sorted list
    addNode(&head, 7);
    addNode(&head, 6);
    addNode(&head, 6);
    addNode(&head, 3);

    // Print the sorted list
    printList(head);

    head = deleteDuplicates(head);

    printList(head);

    // Free the memory used by the linked list
    while (head != NULL)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

struct Node *deleteDuplicates(struct Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    // Find the node before the node to remove
    struct Node *prev = head;
    while (prev->next != NULL)
    {
        if (prev->data == prev->next->data)
        {
            struct Node *temp = prev->next;
            prev->next = prev->next->next;
            free(temp);
        }
        else
        {
            prev = prev->next;
        }
    }

    return head;
}