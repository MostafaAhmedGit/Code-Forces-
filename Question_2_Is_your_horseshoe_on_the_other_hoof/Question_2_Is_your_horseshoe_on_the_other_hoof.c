// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *ptr = (int *)calloc(4,sizeof(int));    //INPUT ARRAY

    int j;
    int count =0;
    int temp;
    for(int i=0;i<4;i++)
        scanf("%d",(ptr+i));
    

    
    
    for(int i=0;i<4;i++)    // Simple sort algorithm using temp
    {
        for(int j=i+1;j<4;j++)
       if(ptr[i]>ptr[j]) {
              temp = ptr[i];
              ptr[i]=ptr[j];
              ptr[j]=temp;
    }
    }

     for(int i=0;i<4;i++) // Counting alike elements, so that he can wear 
                         // diffrent colors in the show 
    {
        j = i + 1;
            if(ptr[i]==ptr[j])
                count++;
    }
    
    printf("%d",count);
    
    free(ptr);  // unallocating the space is always a good practice
    

    return 0;
}