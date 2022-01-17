#if 0
//15596
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
long long sum(int* a, int n){
    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    return sum;
}
int main() {
    int n = 0;
    int res = 0;
    scanf("%d", &n);

    int *a = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    res = sum(a,n);
    printf("%d",res);
    return 0;
}
#endif

#if 0
//4673
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void d(int a,int n, int* arr){
    int temp = a;
    while(n > 0){
        temp += a % 10;
        a = a / 10;
        n--;
    }
    arr[temp] = 1;
    int b = log10(temp) + 1;
    if(temp < 100) d(temp,b,arr);
}
int main() {
    int arr[10100] = {0,};
    for(int i = 1; i < 10000; i++){
        int n = log10(i) + 1;
        d(i, n, arr);
    }
    for(int j = 1; j < 10000; j++){
        if(arr[j] == 0) printf("%d\n",j);
    }
    return 0;
}
#endif

#if 1
//1065
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int ishs(int n){
    if(n < 100) return 1;

    int stat = 0;
    int length = log10(n);
    int *temp = (int *) malloc(sizeof(int)*length);
    int *d = (int *) malloc(sizeof(int)*(length -1));
    //printf("%d\n",length);
    for(int i = length ; i >= 0; i--){
        temp[i] = n % 10;
        n = n / 10;

    }
    for(int j = 0; j <= length; j++){
        d[j] = temp[j] - temp[j+1];
    }
    for(int k = 0; k < length ; k++) {
        if (d[0] == d[k]) stat = 1;
        else stat = 0;
    }
    if(stat)return 1;
    else return 0;
}
int main(){
    int count = 0;
    int n = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        if(ishs(i)) count++;
    }
    printf("%d", count);
    return 0;
}
#endif

