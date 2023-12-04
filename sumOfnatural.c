#include<stdio.h>
int sum(int n);
int main(){
  int n,p;
  printf("enter the number");
  scanf("%d",&n);
  p=sum(n);
  printf("sum=%d",p);
  return 0;
}
int sum(n){
  int sum=0;
  if(n>0){
    for(int i=0;i<=n;i++){
      sum=sum+i;
      // printf("%d", sum);
    }
    return(sum);
  }
 }