#include<stdio.h>
int main(){
  int i,A[10],n,beg,end,mid;
  for(i=0;i<10;i++){
    printf("enter the number ");
    scanf("%d",&A[i]);
  }
  printf("enter the number to search");
  scanf("%d",&n);
  beg=0;
  end=9;
  mid=(beg+end)/2;
  while(beg<=end && A[mid]!=n){
    if(n>A[mid]){
      beg=mid+1;
    }
    else{
      end=mid-1;
    }
    mid=(beg+end)/2;
  }
  if(A[mid]==n){
    printf("numis found=%d",n);
  }
  else{
    printf("num is not found=%d",n);
  }
  return 0;

}