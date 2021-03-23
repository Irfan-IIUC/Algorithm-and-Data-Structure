#include<stdio.h>
#define MAX 20
#define INFINITY 9999
int main()
{
    int i,j,k,vertices,path[MAX][MAX],adjacency[MAX][MAX];

    printf("\nHow many vertices in the graph:");
    scanf("%d", &vertices);

    printf("\nEnter the weight of Edges:\n\n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("\nWeight of Edge from vertices %d to %d:", i,j);
            scanf("%d", &adjacency[i][j]);
        }
        printf("\n");
    }

    printf("\nThe weighted matrix is:\n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("%5d", adjacency[i][j]);
        }
        printf("\n");
    }

    for(i=1; i<=vertices; i++)
        adjacency[i][i] = 0;

    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            path[i][j] = adjacency[i][j];
            if((!adjacency[i][j]) && (i!=j))
                path[i][j] = INFINITY;
        }
    }

    for(k=1; k<=vertices; k++)
    {
        for(i=1; i<=vertices; i++)
        {
            for(j=1; j<=vertices; j++)
            {
                if(path[i][k] && path[j][k])
                {
                    if((path[i][k]+path[k][j]) < path[i][j])
                        path[i][j] = (path[i][k]+path[k][j]);
                }
            }
        }
    }

    printf("\nThe path matrix is:\n");
    for(i=1; i<=vertices; i++)
    {
        for(j=1; j<=vertices; j++)
        {
            printf("%5d", path[i][j]);
        }
        printf("\n");
    }

    return 0;
}
