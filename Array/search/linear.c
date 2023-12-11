#include<stdio.h>
int main(){
  int i,A[10],n,f=0;
  for(i=0;i<10;i++){
    printf("enter the no: ");
    scanf("%d",&A[i]);
  }
  printf("enter the number to search: ");
  scanf("%d",&n);
  for(i=0;i<10;i++){
    if(A[i]==n){
      f=1;
      break;
    }
  }
    if(f==1){
      printf("the num is found =%d",n);

    }
    else{
      printf("num is not found");
    }
    return 0;
}