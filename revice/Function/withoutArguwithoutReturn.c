#include <stdio.h>
//  function type without return and without argument
void printName();
void Fact();
void Arith();
void arr1d();
void evenOdd();
void febo();
//  the large function type is without retuen but with argument;
void large( int arr[],int size);
void samll(int arr[],int size);
int main()
{
  printf("hello");
  printName();
  Fact();
  Arith();
  arr1d();
  evenOdd();
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
void Arith()
{
  int a, b, sum,sub,mul,div;
  printf("enter the value of a and b");
  scanf("%d%d", &a, &b);
  sum = a + b;
  printf("\nthe sum of the a and b = %d\n",sum);
  sub=a-b;
  printf("\nthe subtraction is =%d",sub);
  mul=a*b;
  printf("\nthe multiplication is = %d",mul);
  div=a/b;
  printf("\nthe dividion is = %d",div);
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
  
  for(int i=0;i<size;i++){
    if(arr[i]<arr[0])
    {
      arr[0]=arr[i];
    }
  }
  printf("\nsamllest element=%d",arr[0]);
}
void evenOdd(){
  int n;
  printf("\neneter the number for checking for that num is even or odd : ");
  scanf("%d",&n);
  if(n%2==0){
    printf("this number is even");

  }
  else{
    printf("this number is odd");
  }
  febo(n);
}
void febo(n){
  int n1=0,n2=1;
  printf("\n\t\tfebonaci series of this num = %d %d", n1, n2);
  for(int i=2;i<n;i++){
    int n3=n1+n2;
    printf("\t%d",n3);
    n1=n2;
    n2=n3;
  }

}