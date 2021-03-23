#include<stdio.h>
#define SIZE 20
int main()
{
    int i=0,j=0,k=0,vertices,adjacency[SIZE][SIZE],path[SIZE][SIZE];

    printf("\nHow many vertices: ");
    scanf("%d", &vertices);

    printf("\nEnter Edga information:\n\n");

    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("\nEdge from vertex %d to %d is: ", i,j);
            scanf("%d", &adjacency[i][j]);
        }

        printf("\n");
    }

    printf("\nThe given adjacency matrix is:\n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
            printf("%3d", adjacency[i][j]);
        printf("\n");
    }

    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
            path[i][j] = adjacency[i][j] ? 1 : 0;
    }

    for(k=0; k<=vertices; k++)
    {
        for(i=0; i<=vertices; i++)
        {
            for(j=1; j<=vertices; j++)
                path[i][j] = (path[i][j] | (path[i][k] & path[k][j]));
        }
    }

    printf("\nThe path matrix is:\n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
            printf("%3d", path[i][j]);
        printf("\n");
    }

    return 0;
}
