#include<stdio.h>
#define SIZE 20
#define INFINITY 9999
int main()
{
    int i=0,j=0,k=0,vertices,path_temp,path[SIZE][SIZE],adjacency[SIZE][SIZE];

    printf("\nHow many vertices: ");
    scanf("%d", &vertices);

    printf("\nEnter weight of Edges:\n\n");

    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("\nWeight of Edge form vertex %d to %d: ", i,j);
            scanf("%d", &adjacency[i][j]);
        }
        printf("\n");
    }

    printf("\nThe given weighted adjacency matrix is:\n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("%3d", adjacency[i][j]);
        }
        printf("\n");
    }

    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            path[i][j] = adjacency[i][j] ? adjacency[i][j] : INFINITY;
        }
    }

    for(k=1; k<=vertices; k++)
    {
        for(i=1; i<=vertices; i++)
        {
            for(j=1; j<=vertices; j++)
            {
                path_temp = (path[i][j] < (path[i][k] + path[k][j]));
                path[i][j] = (path_temp ? path[i][j] : (path[i][k] + path[k][j]));
            }
        }
    }

    printf("\nThe shortest path matrix is:\n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("%5d", path[i][j]);
        }
        printf("\n");
    }
}
