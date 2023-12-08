#include<stdio.h>
int chkPair(int A[],int size,int x){
  for(int i=0;i<(size-1);i++){
    for(int j=0;j<size;j++){
      if(A[i]+A[j]==x){
      
        printf("%d+%d=",A[i], A[j]);
        return 1;
      }
    }
  }
  return 0;
}
int main(){
  int A[]={0,-1,2,3,1};
  int x,size;
  printf("enter the digit for check that is the sum of pair");
  scanf("%d",&x);
   size=sizeof(A)/sizeof(A[0]);
   if(chkPair(A,size,x)){
    printf("yes\n");
   }
   else{
    printf("no\n");
   }
   return 0;
  
}