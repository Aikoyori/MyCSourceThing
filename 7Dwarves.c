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
    int i,jj,a[9],real[7],fake[2];
    for (i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
      for (i=0;i<9;i++)
    {
           for (jj=0;jj<9;jj++)
    {
 if (abs(a[i]-a[jj])==100)
 {
     fake[0]=a[i];
     fake[1]=a[jj];
     break;
 }
    }
    }


}

