#include<stdio.h>
int main(){
  int i,n,num,pos,arr[10];
  //  asking the size of the array
  printf("\n enter the size of the element");
  scanf("%d",&n);
  // for inputing the elements in the array
  for(i=0;i<n;i++)
  {
    printf("\n arr[%d]=",i);
    scanf("%d",&arr[i]);
  }
  //  input number to be insert
  printf("enter the element to be added");
  scanf("%d",&num);
  //  input the position on which you want to add
  printf("enter the position on which you want to add elemnt");
  scanf("%d",&pos);
  //  loop for travelling in whole array
  for (i=n-1;i>=pos;i--)
  //  logic for adding element in array
  arr[i+1]=arr[i];
  arr[pos]=num;
  n=n+1;
  printf("\nafter insertion of the element %d is:",num);
  //  lop for printing the array after insertion
for(i=0;i<n;i++)
printf("\n arr[%d]=%d",i,arr[i]);
return 0;
}