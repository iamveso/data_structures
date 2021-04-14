/*
    Doubly LinkedList in C Programming language
*/
#include <list.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Node Node;

//TODO: Make LinkedList actual data or pointer to data
//I think pointer to data is better cause it gives the list responsiblity to clean up the data

struct Node
{
    void *data;
    Node *next_node;
    Node *prev_node;
};

struct List
{
    Node *head;
};

Node *new_node(void *data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next_node = NULL;
    node->prev_node = NULL;
    return node;
}

List *new_list()
{
    List *list = (List *)malloc(sizeof(List));
    list->head = NULL;
    return list;
}

bool prepend(List *list, void *data)
{
    if (list == NULL)
        return false;
    // If this is the first time something is added to the list
    if (list->head != NULL)
    {
        Node *node = new_node(data);
        if (node == NULL)
            return false; //if node creation not successful

        node->next_node = list->head;
        list->head->prev_node = node;
        list->head = node;
    }
    else
    {
        list->head = new_node(data); //If this is the first time of adding to the list
        if (list->head == NULL)
            return false; //if node creation not successful
    }

    return true;
}

bool append(List *list, void *data)
{
}

void print_int_list(List *list)
{
    Node *node = list->head;
    while (node != NULL)
    {
        printf("%d\n", *(int *)(node->data));
        node = node->next_node;
    }
}