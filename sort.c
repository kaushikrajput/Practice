
#include <stdio.h>

void selectionSort();
int a[30], n;
void main()
{
    int i;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    selectionSort();
    printf("\n\nAfter sorting:\n");
    for (i = 0; i < n; i++)
        printf("\n%d", a[i]);
}
void selectionSort()
{
    int i, j,  temp;
    for (i = 0; i < n-1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}