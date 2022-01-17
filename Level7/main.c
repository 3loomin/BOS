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

#if 0
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

#if 0
//10809
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char ans[100] = {0,};
    int alpha[26];
    for(int k = 0; k < 26; k++){
        alpha[k] = -1;
    }
    int k = 99;
    scanf("%s",&ans);
    while(k >= 0){
        alpha[ans[k] - 'a'] = k;
        k--;
    }
    for(int j = 0; j < 26; j++){
        printf("%d ",alpha[j]);
    }
    return 0;
}
#endif

#if 0
//2675
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int testcase = 0;
    scanf("%d",&testcase);
    for(int i = 0; i < testcase; i++){
        int n = 0;
        scanf("%d",&n);

        char arr[1000] = {0,};
        scanf("%s",&arr);

        char ans[1000] = {0,};
        int j = 0;
        int idx = 0;

        while(arr[j] != 0){
            int k = 0;
            while(k < n ){
                ans[idx] = arr[j];
                idx++;
                k++;
            }
            j++;
        }
        printf("%s\n",ans);
    }
    return 0;
}
#endif

#if 1
//1157
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char arr[1000000] = {0};
    int ans[26] = {0};
    scanf("%s", arr);

    int max = 0;
    int maxidx = 0;
    int i = 0;
    while(arr[i] != 0){
        if(arr[i] >= 'a' && arr[i] <= 'z') arr[i] -= 32;
        ans[arr[i] - 'A']++;
        i++;
    }

    for(int j = 0; j < 26; j++){
        if(max < ans[j]){
            max = ans[j];
            maxidx = j;
        }
    }
    int k = 0;
    while(k < 26){
        if(max == ans[k] && k != maxidx){
            printf("?");
            return 0;
        }
        k++;
    }
    printf("%c", 'A' + maxidx);
    return 0;
}
#endif