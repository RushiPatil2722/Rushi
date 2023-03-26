#include<stdio.h>
void main()
{   
    
    int positive=0;
    int negative=0;
    int zero=0;
    int arr[]={10,45,-25,45,-12,0,23,-23,19,0};
    
    for(int i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            negative++;
            
        }
        
        if(arr[i]==0)
        {
            zero++;
        }
        
        if(arr[i]>0)
        {
            positive++;
            
        }
    }
 
   printf("Numbers less than zero in array are %d\n",negative);
   printf("Numbers which are zero in array are %d\n",zero);
   printf("Numbers greater than zero in array are %d\n",positive);
 
    
}