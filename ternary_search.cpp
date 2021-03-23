#include <stdio.h>

int ternarySearch(int l, int r, int key, int ar[])
{
    if(r>=l)
    {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        // Check if key is present at any mid
        if (ar[mid1] == key)
            return mid1;

        if (ar[mid2] == key)
            return mid2;

        if (key < ar[mid1])
        {
            // The key lies in between l and mid1
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2])
        {
            // The key lies in between mid2 and r
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else
        {
            // The key lies in between mid1 and mid2
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }

    // Key not found
    return -1;
}

int main()
{
    int l, n, r, p, key, i, arr[50];

    printf("\nHow many Elements : ");
    scanf("%d", &n);

    printf("\nEnter %d Elements (must be sorted) : ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter the Element you want to search : ");
    scanf("%d", &key);

    // Search the key using ternarySearch
    p = ternarySearch(0, n, key, arr);

    // Print the result
    printf("\nIndex of %d is %d\n", key, p);

    return 0;
}

