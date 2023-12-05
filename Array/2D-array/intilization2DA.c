#include<stdio.h>
int main(){
  int arr[2][2]={1,3,4,5};
  int i,j;
  for(i=0;i<2;i++){
    printf("\n");
    for(j=0;j<2;j++)
    printf("%d\t",arr[i][j]);
  }
  return 0;
}