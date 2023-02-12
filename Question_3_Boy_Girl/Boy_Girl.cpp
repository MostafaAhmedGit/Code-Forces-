// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    string x;
    int sum=0;
    cin>>x;
    // cout<<x.length()<<endl;
    
    //frequency array
    int *ptr = (int*)calloc(x.length(),sizeof(int));    //intialized with zero already
    
    for(int i=0;i<x.length();i++)
    {
       for(int j=i+1;j<x.length();j++)
       {
           //since i corrupted the duplicate with a number i always check 
           //to avoid comparing duplicates 
           if(x[i]==x[j]&&isalpha(x[i]))
            {
                ptr[i] +=1;
                x[j]=0;         // corupting the duplicate to avoid counting it again, with a number
            }
       }
       sum+=ptr[i];
       
    }
  

    if((x.length()-sum)%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    
    return 0;
}