#if 0
//11654
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char a = ' ';
    scanf("%c",&a);
    printf("%d",a);
    return 0;
}
#endif

#if 1
//11720
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n = 0;
    char arr[100] ={0};
    int sum = 0;
    scanf("%d",&n);
    scanf("%s", &arr);
    for (int i = 0; i < n; i++){
        sum += arr[i] - '0';
    }
    printf("%d", sum);
    return 0;
}
#endif