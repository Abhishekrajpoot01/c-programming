#include<stdio.h>
int main(){
  int n;
  double arr[100];
  printf("enter the number of elements (1 to 100):");
  scanf("%d",&n);
   
   for(int i=0;i<n;++i){
    printf("enter number %d",i+1);
    scanf("%lf",&arr[i]);
   }
  //  storing the smallest number to arr [0]
  for(int i =1;i<n;++i){
    if(arr[i]<arr[0]){
      arr[0]=arr[i];
    }
  }
  printf("smallest=%.2f",arr[0]);

  return 0;
}