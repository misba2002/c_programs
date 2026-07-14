#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    
    int res=0, and_value=0, or_value=0, xor_value=0;
    
    for(int i=1; i<=n; i++)
    {
        for(int j=2; j<=n; j++)
        {
          if(i==j)
          {
            continue;
          }
        //   BIT AND OPERATION
          res= i & j;
          if(res<k && res>=and_value)
          {
            and_value=res;
            
            
          }
        //   BIT OR OPERATION
           res= i | j;
          if(res<k && res>=or_value)
          {
            or_value=res;
            
          }
        //   BIT XOR OPERATION
           res= i ^ j;
          if(res<k && res>=xor_value)
          {
            xor_value=res;
          }
          
            
        }
    }
    printf("maximum and value : %d\n", and_value);
    printf("maximum or value: %d\n", or_value);
    printf("maximum xor value: %d\n", xor_value);
    
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}