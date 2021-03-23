#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *head;
    head = NULL;

    node *temp = (node*)malloc(sizeof(node));

    temp->data = 2;
    temp->next = NULL;

    head = temp;

    temp = (node*)malloc(sizeof(node));

    temp->data = 4;
    temp->next = NULL;

    node *temp1 = head;

    while((temp1->next) != NULL)
        temp1 = temp1->next;

    temp1->next = temp;

    temp = (node*)malloc(sizeof(node));

    temp->data = 6;
    temp->next = NULL;

    temp1 = head;

    while((temp1->next) != NULL)
        temp1 = temp1->next;

    temp1->next = temp;

    temp = (node*)malloc(sizeof(node));

    temp->data = 8;
    temp->next = NULL;

    temp1 = head;

    while((temp1->next) != NULL)
        temp1 = temp1->next;

    temp1->next = temp;

    temp = (node*)malloc(sizeof(node));

    temp->data = 10;
    temp->next = NULL;

    temp1 = head;

    while((temp1->next) != NULL)
        temp1 = temp1->next;

    temp1->next = temp;

    while((head->next) != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }

    printf("%d\n", head->data);

    return 0;
}
