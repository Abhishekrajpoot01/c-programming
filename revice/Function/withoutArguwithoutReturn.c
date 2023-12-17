#include <stdio.h>
void printName();
void Fact();
void sum();
void arr1d();
//  the large function type is without retuen but with argument;
void large( int arr[],int size);
void samll(int arr[],int size);
int main()
{
  printf("hello");
  printName();
  Fact();
  sum();
  arr1d();
  return 0;
}
void printName()
{
  printf(" Abhishek \n");
}
void Fact()
{
  int n, factorial = 1;
  printf("enetr the number= ");
  scanf("%d", &n);
  if (n > 0)
  {
    // int f;
    for (int i = 1; i <= n; i++)
    {
      factorial = i * factorial;
      // printf("%d",factorial);
    }
    printf(" the factorial of the number which you entered in my feed =%d", factorial);
    printf("\n");
  }
}
void sum()
{
  int a, b, sum;
  printf("enter the value of a and b");
  scanf("%d%d", &a, &b);
  sum = a + b;
  printf("the sum of the a and b = %d\n", sum);
}
void arr1d()
{
  int size, arr[100];
  printf("\nenter the size of the array");
  scanf("%d", &size);
  // large(arr1d,size);
  for (int i = 0; i < size; i++)
  {
    printf("enter the elements\n");
    scanf("%d", &arr[i]);
  }
  printf("\nthe array is =");
  for (int i = 0; i < size; i++)
  {
    printf("\t%d",arr[i]);
  }
  large(arr,size);
  small(arr,size);
}
void large(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {
    if (arr[0] < arr[i])
    {
      arr[0] = arr[i];
    }
  }
  printf("\nlargest element = %d\n", arr[0]);
}
void small(int arr[],int size){
  int i;
  for(int i=0;i<size;i++){
    if(arr[0]>arr[i])
    {
      arr[i]=arr[0];
    }
  }
  printf("\n samllest element=%d\n",arr[i]);
}