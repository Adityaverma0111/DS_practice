 #include<stdio.h>
void main(){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int x=0;
    while(n!=0){
        n=n%10;
        x=(x*10)+n;
        n!=10;
    }
    printf("reverse of number is %d",x);
    if(n==x){
        printf("your number is palindrome");
    }
}
// with function
#include <stdio.h>
 int pali(num,rev){
     while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
        return rev;
    }
 }

int main() {
    int num, oNum, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    oNum = num;

   pali(num,rev);

    if (oNum == rev) {
        printf("%d is a palindrome.\n", oNum);
    } else {
        printf("%d is not a palindrome.\n", oNum);
    }

    return 0;
}


