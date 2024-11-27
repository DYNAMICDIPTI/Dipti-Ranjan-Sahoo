#include <stdio.h>
#define MAX 50

int main() {
    int arr[MAX], size, i, newElement;

   
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    printf("Enter %d elements of the array: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Array before insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    
    printf("Enter the new element to add at the beginning: ");
    scanf("%d", &newElement);

   
    for (i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

   
    arr[0] = newElement;
    size++; 

    
    printf("Array after insertion: ");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}

