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

#if 0
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

#if 0
//2577
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
   int var[3] = {0,};
   int ans[10] = {0,};
   for(int i = 0; i < 3; i++){
       scanf("%d",&var[i]);
   }
   int res = 1;
   for(int j = 0; j < 3; j++){
       res *= var[j];
   }
   while(res != 0){
       ans[res % 10]++;
       res = res/10;
   }
   for(int k = 0; k < 10; k++){
       printf("%d\n",ans[k]);
   }
   return 0;
}
#endif

#if 1
//3052
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
int main() {
    int cnt = 0;
    int var[10] = {0,};
    int ans[10] = {0,};
    int i,j,k = 0;
    for(i = 0; i < 10; i++){
        scanf("%d", &var[i]);
    }
    for(j = 0; j < 10; j++){
        ans[j] = var[j] % 42;
        for(k = 0; k < j; k++)
            if(ans[k] == ans[j]) break;
        if(j == k) cnt++;
    }
    printf("%d",cnt);
   return 0;
}
#endif
