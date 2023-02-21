// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int x,y;
    int xx,yy;
    int m,n;
    int counter=0;
    scanf("%d %d",&x,&y);
    
    if(x==0|y==0)
        printf("0");
    if(x>1000|y>1000)
        printf("0");
    
    for(int i=0;i<32;i++)
    {
        for(int j=0;j<32;j++)
        {
            xx  = i*i;
            m = xx + j;
            
            yy = j*j;
            n = yy+i;
            
            if(((m==x)&&(n==y)))
            {
                counter++;
            }
        }
    
    }
    
    
 
    printf("%d",counter);
    
    

    return 0;
}