#include <stdio.h>
#include <stdlib.h>
int sum_array(int a[], int num_elements);
int main()
{
    int i,x[10],la,count[42];
     for(i=0;i<42;i++)
        {
count[i]=0;
        }
    for (i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
      for (i=0;i<10;i++)
    {
       la=x[i]%42;
       count[la]=1;
    }
    printf("%d",sum_array(count,42));
    return 0;
}

int sum_array(int a[], int num_elements)
{
   int i, sum=0;
   for (i=0; i<num_elements; i++)
   {
	 sum = sum + a[i];
   }
   return(sum);
}
