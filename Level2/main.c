

#if 0
//1330
#include <stdio.h>
int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if(a>b) printf(">\n");
    if(a<b) printf("<\n");
    if(a==b) printf("==\n");
    return 0;
}
#endif

#if 0
//9498
#include <stdio.h>
int main() {
    int score = 0;

    scanf("%d", &score);
    if(score>=90) printf("A\n");
    else if(score>=80) printf("B\n");
    else if(score>=70) printf("C\n");
    else if(score>=60) printf("D\n");
    else printf("F\n");
    return 0;
}
#endif

#if 0
//2753
#include <stdio.h>
int main() {
    int year = 0;
    scanf("%d", &year);
    if(year%4 == 0){
        if(year%100 != 0 || year%400 == 0)
            printf("1\n");
        else printf("0\n");
    }
    else printf("0\n");
    return 0;
}
#endif

#if 0
//14681
#include <stdio.h>
int main() {
    int x = 0;
    int y = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > 0 && y > 0) printf("1\n");
    if (x > 0 && y < 0) printf("4\n");
    if (x < 0 && y > 0) printf("2\n");
    if (x < 0 && y < 0) printf("3\n");
}
#endif

#if 1
//2884
#include <stdio.h>
int main() {
    int hour = 0;
    int minute = 0;
    scanf("%d %d", &hour, &minute);
    if(hour == 0){
        if(minute >= 45){
            printf("%d %d", hour, minute - 45);
        }
        else printf("%d %d", 23, minute + 15);
    }
    else{
        if(minute >= 45){
            printf("%d %d", hour, minute - 45);
        }
        else printf("%d %d", hour - 1, minute + 15);
    }
    return 0;
}
#endif