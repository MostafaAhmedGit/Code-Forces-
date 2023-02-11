/*
	Written By Mostafa Ahmed 
*/
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int solved = 0;
    int input;
    // Write C code here
    int count = 0;
    
    //  printf("%d",sizeof(unsigned long long));
    scanf("%d",&input);
    
    int *ptr = (int*)malloc(3*input*sizeof(int));
    
    // for(int i=0;i<input;i++)
    for(int i=0;i<input*3;i++)
    scanf("%d",&ptr[i]);
    
    for(int i=0;i<input*3;i++)
    {

        if(ptr[i]==1)
            count++;
        if(count>=2)
            {
                solved++;
                count = 0;
            }
            
        if((i+1)%3==0)
            count = 0;
       
   
        //  count = 1 ,  -- 1 % 3 = 1
        //  count = 1 , --  2 % 3 = 1
        //  count = 1, --   
    }   //  count 
    
    printf("%d",solved);
            
 
    return 0;
}