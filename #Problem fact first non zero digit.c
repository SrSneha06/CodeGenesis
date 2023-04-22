#Problem where we have to find factorial of a number and print the fist non zero integer from right end of the factorial:
test cases:
i/o 3 o/p 6
i/o 10 o/p 8

#include <stdio.h>

int main() {
    int n,s=1,c;
    scanf("%d",&n);
    for (int i=n;i>=1;i--){
        s=s*i;
    }
    while (s>1){
        if ((s%10)>0){
          c=s%10;
          break;
        }
        s=s/10;
    }
    printf("%d",c);
    return 0;
}