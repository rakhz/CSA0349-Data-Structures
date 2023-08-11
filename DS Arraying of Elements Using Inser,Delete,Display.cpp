#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
    int arr[MAX], i, n, ch, pos, val;
    do {
        printf("\n1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &val);
                printf("Enter the position to be inserted: ");
                scanf("%d", &pos);
                if (pos > n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (i = n; i >= pos; i--) {
                    arr[i + 1] = arr[i];
                }
                arr[pos] = val;
                n++;
                printf("Insertion successful.\n");
                break;
            case 2:
                printf("Enter the position to be deleted: ");
                scanf("%d", &pos);
                if (pos > n) {
                    printf("Invalid position.\n");
                    break;
                }
                for (i = pos; i < n; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Deletion successful.\n");
                break;
            case 3:
                printf("Array elements are: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (ch != 4);
    return 0;
}
