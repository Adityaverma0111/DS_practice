#include<stdio.h>
void main(){
    for (int i=1;i<5;i++){
        for(int j=0;j<i;j++){
            printf("1");
        }
        printf("\n");
    }
}





#include<stdio.h>
void main(){
int n;
printf("enter the value of n ");
scanf("%d",&n);
for (int i=1;i<=n;i++){
    int x=i;
    for(int j=1;j<=i;j++){
        printf("%d ",x);
        x++;
    }
    printf("\n");
}
}



#include<stdio.h>
void main(){
    for(int i=1;i<8;i++){
        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}
#include<stdio.h>
void main(){
    for(int i=8;i>1;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

