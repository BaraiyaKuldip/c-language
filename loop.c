#include <stdio.h>
void main()
{
    int i,j,k=1;
    for(j=5;j>=1;j--)
{  
      for(i=5;i>=k;i--)
    {
        printf("%d",i);
    }
    printf("\n");
    k++;
}
}