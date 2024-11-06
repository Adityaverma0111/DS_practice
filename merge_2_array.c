// ..........................merging of 2 array .......................................//
#include<stdio.h>
void merge_array(int a[],int b[],int c[],int m,int n ){
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n ){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
         else {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m){
      c[k]=a[i];
      i++;
      k++;
    }
    while(j<n){
      c[k]=b[j];
      j++;
      k++;
    }

}

void main(){
    int n,m;
    printf("enter the number of element in arrayfor first array ");
    scanf("%d",&m);
     printf("enter the number of element in arrayfor second array ");
    scanf("%d",&n);
    int s=n+m;
    int a[m];int b[n]; int c[s];
    printf("enter the array 1");
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the array 2");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
     merge_array(a,b,c,m,n);
    printf("your merged array are ");
    for(int i=0;i<s ;i++){
     printf("%d ",c[i]);
    }

    }
