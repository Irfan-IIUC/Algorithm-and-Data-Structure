#include<stdio.h>

void Tower_of_hanoi(int disk, char *source_stand, char *temp_stand, char *final_stand)
{
    if(disk != 0)
    {
        Tower_of_hanoi(disk-1, source_stand, final_stand, temp_stand);

        printf("\nMove #%2d disk from %-12s to %s\n", disk, source_stand, final_stand);

        Tower_of_hanoi(disk-1, temp_stand, source_stand, final_stand);
    }
}

int main()
{
    int disk;
    char *tower1="left tower", *tower2="mid tower", *tower3="right tower";

    printf("\nHow many disk: ");
    scanf("%d", &disk);

    printf("\nTower of Hanoi of [%d] disks ...\n\n", disk);

    Tower_of_hanoi(disk, tower1, tower2, tower3);

    return 0;
}
