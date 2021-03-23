#include<stdio.h>
#include<stdlib.h>

typedef struct TREE
{
    int data;
    struct TREE* left_child;
    struct TREE* right_child;
} TREE;

TREE* create_leaf(int n_data, TREE* ptr_tree)
{
    if(ptr_tree == NULL)
    {
        ptr_tree = (TREE*)malloc(sizeof(TREE));
        ptr_tree->data = n_data;
        ptr_tree->left_child = ptr_tree->right_child = NULL;

        return ptr_tree;
    }

    if(n_data<(ptr_tree->data))
        ptr_tree->left_child = create_leaf(n_data, ptr_tree->left_child);
    else if(n_data>(ptr_tree->data))
        ptr_tree->right_child = create_leaf(n_data, ptr_tree->right_child);

    return ptr_tree;
}

void display_tree(int height, TREE* tree)
{
    int i=0;

    if(tree != NULL)
    {
        display_tree(height+1, tree->right_child);
        printf("\n\t");

        for(i=0; i<height; i++)
            printf("\t");

        printf(" %d", tree->data);

        display_tree(height+1, tree->left_child);
    }
}

int main()
{
    int n_data;
    TREE *tree = NULL;

    while(1)
    {
        printf("\n\nEnter an element [1000 for exit]: ");
        scanf("%d", &n_data);

        if(n_data == 1000)
            break;

        tree = create_leaf(n_data, tree);

        printf("\n\nAfter adding %d, The tree becomes:\n", n_data);

        display_tree(1, tree);
    }

    return 0;
}
