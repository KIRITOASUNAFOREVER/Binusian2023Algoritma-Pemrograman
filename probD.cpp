#include <stdio.h>
 
int main()
{
  int m,n,p, q, c, d, k, sum = 0,a = 0,counter,sum1 = 0;
  int first[55][55], second[55][55], third[55][55], multiply[55][55],multiply1[55][55];
  scanf("%d",&counter);
  for(int z=0;z<counter;z++)
  {
            scanf("%d", &m);
  p = m;
  n = m;
 
  for (c = 0; c < m; c++)
    for (d = 0; d < m; d++)
      scanf("%d", &first[c][d]);
    for (c = 0; c < p; c++)
      for (d = 0; d < p; d++)
        scanf("%d", &second[c][d]);
    for (c = 0; c < n; c++)
      for (d = 0; d < n; d++)
        scanf("%d", &third[c][d]);
    for (c = 0; c < m; c++) {
      for (d = 0; d < m; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + second[c][k]*third[k][d];
        }
 
        multiply[c][d] = sum;
       
        sum = 0;
      }
    }
    for (c = 0; c < m; c++) {
      for (d = 0; d < m; d++) {
        for (k = 0; k < n; k++) {
          sum1 = sum1 + multiply[c][k]*first[k][d];
        }
 
        multiply1[c][d] = sum1;
       
        sum1 = 0;
      }
    }
       printf("Case #%d:\n",z+1);
 
    for (int c = 0; c < m; c++) {
      for (int d = 0; d < n; d++){
   
          printf("%d",multiply1[c][d]);
          if(d<n-1)
          {
           printf(" ");
        }    
 	}
printf("\n");
}
    }
    //printf("\n");
  }
