#include <stdio.h>
#include <stdlib.h>
int sum_array(int a[], int num_elements)
{
   int i, sum=0;
   for (i=0; i<num_elements; i++)
   {
	 sum = sum + a[i];
   }
   return(sum);
}
int main()
{
    int i,jj,a[9],real[7],fake1,fake2;
    for (i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
      for (i=0;i<9;i++)
    {
           for (jj=0;jj<9;jj++)
    {
 if (sum_array(a,9)-a[i]-a[jj]==100)
 {
     fake1=a[i];
     fake2=a[jj];
     break;
 }
    }
    }
    for(i=0;i<9;i++)
    {
        if((a[i]!=fake1)&&(a[i]!=fake2))
        {
            printf("%d\n",a[i]);
        }
    }
}

