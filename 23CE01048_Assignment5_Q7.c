#include <stdio.h>


int main() {
    int arr[10] = {6,4,5,1,2,1,9,8,5,7};
     int i, j, temp;
    for (i = 0; i <= 9; i++) {
       
        for (j = 0; j <=8-i; j++) {
            
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i=0;i<=9;i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}