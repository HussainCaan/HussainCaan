// #include <stdio.h>
// #define MAX_SIZE 100
// int main()
// {
//     int arr[MAX_SIZE];
//     int i, N;

//     printf("Enter size of array\n");
//     scanf("%d", &N);

//     printf("Enter elements of the array\n");
//     for (i = 0; i < N; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (arr[i] < 0)
//         {
//             printf("%d", arr[i]);
//         }
//     }

//     return 0;
// }

//

#include <stdio.h>
int main()
{
    int arr[10];
    int i, n, max1, max2, INT_MAX;

    printf("Enter size of array\n");
    scanf("%d", &n);
    printf("Enter Elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2 = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    printf("%d is first largest\n", max1);
    printf("%d is first largest\n", max2);
    return 0;
}