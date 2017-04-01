#include <stdio.h>

int main()
{
  int  maximum, size, c,location,temp_max;
  scanf("%d", &size);
  int array[100];

  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);

  maximum = array[0];
  temp_max = array[0];

  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum&&temp_max!=array[c])
    {
       maximum  = array[c];
       location = c+1;
         printf("%d",location);
    }
    else if(array[c] > maximum&&temp_max==array[c])
    {
       maximum  = array[c];
       location = c+1;
         printf("%d",location);
    }
  }


  return 0;
}
