#include<stdio.h>
void main()
{
    
    int b,i,c;
    int arr[]={10,20,30,40,55,101};
    for(i=0;i<6;i++)
    {
        int temp=arr[i];
        int c=0;
        while(temp!=0)
        {
            b=temp%10;
            c=c*10+b;
           temp = temp/10;
            
            
        }
        
        if(arr[i]==c)
        {
            printf("%d is a palindrome number at index %d\n",arr[i],i);
            
        }
        
        
    }
    
}    