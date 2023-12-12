#include<stdio.h>
int main(){
  int i,j,A[10],n,t;
  printf("enter the size of the array");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("enter the element\n");
    scanf("%d",&A[i]);

  }
  for(i=0;i<n;i++){
    for(j=0;j<(n-1)-i;j++){
      if(A[j]>A[j+1]){
        t=A[j];
        A[j]=A[j+1];
        A[j+1]=t;
      }
    }
  }
  printf("the sorted elements in array are\n");
  for(i=0;i<n;i++){
    printf("%d\t ",A[i]);
  }
  return 0;


}