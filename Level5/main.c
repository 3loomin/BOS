#if 0
//10818
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for(int j = 0; j < n; j++){

        if(min > arr[j]) min = arr[j];
    }
    for(int k = 0; k < n; k++){

        if(max < arr[k]) max = arr[k];
    }
    printf("%d %d", min, max);
    return 0;
}
#endif

#if 1
//2562
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int arr[9] = {0,};
    for(int i = 0; i < 9; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int idx = 0;
    for(int j = 0; j < 9 ; j++){
        if(max < arr[j] ){
            max = arr[j];
            idx = j;
        }
    }
    printf("%d\n%d", max, idx + 1);
    return 0;
}
#endif
