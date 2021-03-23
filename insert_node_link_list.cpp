#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* head;

void Insert(int x)
{
    struct node* temp = (node *)malloc(sizeof(node));

    temp->data = x;
    temp ->next = head;
    head = temp;
}

void Print()
{
    struct node* temp = head;

    printf("List is: ");

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    head = NULL;
    int i,n,x;

    printf("How many numbers: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter the number: ");
        scanf("%d", &x);

        Insert(x);
        Print();
    }
}
