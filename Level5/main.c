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

#if 0
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

#if 0
//1546
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 0;
    double res = 0;
    scanf("%d", &n);
    double* score = (double*)malloc(sizeof(double) * n);
    double* nscore = (double*)malloc(sizeof(double) * n);
    for(int i = 0; i < n; i++){
        scanf("%lf",&score[i]);
    }
    double max = score[0];
    for(int i = 0; i < n; i++){
        if(max < score[i]) max = score[i];
    }
    for(int i = 0; i < n; i++){
        nscore[i] = score[i]/max*100;
    }
    for(int i = 0; i < n; i++){
        res += nscore[i];
    }
    res = res/n;
    printf("%lf",res);
    return 0;
}
#endif

#if 0
//8958
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 0;
    int inc = 1;

    scanf("%d", &n);
    char* arr[100] = {0};
    char* temp = (char*)malloc(80);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", temp);
        arr[i] = temp;
        temp = (char*)malloc(80);
    }
    for(int j = 0; j < n; j++ ){
        int res = 0;
        int k = 0;
        while(arr[j][k] != NULL){
            if(arr[j][k] == 'O'){
               res += inc++;
            }
            else{
                inc = 1;
            }
            k++;
        }
        inc = 1;
        printf("%d\n",res);
    }
    return 0;
}
#endif

#if 1
//8958
#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int nn = 0;
        double mean = 0;
        double sum = 0;
        double count = 0;
        scanf("%d",&nn);
        double *arr = (double*)malloc(sizeof(double)*nn);
        for(int j = 0; j < nn; j++){
            scanf("%lf",&arr[j]);
        }
        for(int k = 0;k < nn; k++){
            sum += arr[k];
        }
        mean = sum/nn;
        //printf("%lf\n",mean);
        for(int s = 0; s < nn; s++){
            if(arr[s] > mean) count += 1;
        }
        printf("%.3lf%\n",count/nn*100);
    }
    /*
    for (int i = 0; i < n; i++) {
        int nn = 0;
        scanf("%d",&nn);
        double* temp = (double*)malloc(sizeof(double)*nn);
        for(int j = 0; j < nn; j++){
            scanf("%lf", &temp[j]);
            printf("%lf\n",temp[j]);
        }
        arr[i] = temp; //err
        printf("hi");

    for(int k = 0; k < n; k++){
        int s = 0;
        double sum = 0;
        while(arr[k][s] != '\n'){
            sum += arr[k][s];
            s++;
        }
        printf("%lf\n",sum/s);
    }
    }*/
    return 0;
}
#endif

