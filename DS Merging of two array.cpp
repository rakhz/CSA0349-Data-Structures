#include <stdio.h>  
#define ARRAY_SIZE 2
  
int main() 
{  
    int i;  
    int largeArray[ARRAY_SIZE];  
    for (i = 0; i < ARRAY_SIZE; i++) {  
        largeArray[i] = i;  
    }  
    for (i = 0; i < ARRAY_SIZE; i++) {  
        printf("largeArray[%d] = %d\n", i, largeArray[i]);  
    }  
  
    return 0;  
}  
