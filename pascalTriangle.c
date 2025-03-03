/*
  Print the Pascal's Triangle for the given number of rows
  Pascal's Triangle is a triangular array of binomial coefficients.
*/

#include<stdio.h>

int nCr(int n, int r)
{
  int num=1,den=1;
  for(int i=r+1; i<=n; ++i)
    if(i != 0)
      num *= i;
  for(int i=n-r; i>=1; --i)
    den *= i;
  return num/den;
}

void pascal(int rows)
{
  for(int i=0; i<rows; ++i)
  {
    for(int s=0; s<rows-i-1; ++s)
      printf("%s"," " );
    for(int j=0; j<=i; ++j)
      printf("%d%s",nCr(i,j)," ");
    printf("%s","\n");
  }
  return;
}

int main()
{
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d",&rows);
  pascal(rows);
  return 0;
}