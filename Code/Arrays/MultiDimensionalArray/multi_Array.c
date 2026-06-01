// This program explains multidimenssional Array in C
#include <stdio.h>
int main()
{
    int v[3][3] =  {{1, 2, 3},{ 4, 5, 6}, {7, 89, 9}};
  for (int i=0;i<3;i++){
      for(int j=0;j<3;j++){
          printf("%4d",v[i][j]);
      }
      printf("\n");
  }

    return 0;
}
