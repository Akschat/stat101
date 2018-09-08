#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void mean(float list[],int n)
{
    int i;
    float sum=0,avg=0;
    for(i=0;i<n;i++)
    {
        sum=sum+list[i];
        
    }
    avg=sum/n;
    printf("%5.1f",avg);
    
}
void median(float list[],int n)
{
    int j,i,mid,p,q;
    float temp,med;
    for(j=0;j<n-1;j++)
    {     
    for(i=j+1;i<n;i++)
    {
        if(list[i]<list[j])
        { 
            temp=list[j];
            list[j]=list[i];
            list[i]=temp;
        }
    }
    }
    if(n%2!=0)
    {    
    printf("\n%5.1f",list[n/2]);
    }
    else
    {
        med=(list[n/2]+list[(n/2)-1])/2.0;
        printf("\n%5.1f",med);
    }    
    
    
}
void mode(float list[],int n)
{
    int modal,j,i,old_count=0,new_count=0;
    float temp;
    for(j=0;j<n-1;j++)
    {     
    for(i=j+1;i<n;i++)
    {
        if(list[i]<list[j])
        { 
            temp=list[j];
            list[j]=list[i];
            list[i]=temp;
        }
    }
    }
    for(j=0;j<n;j++)
    {    
    for(i=j;i<n-1;i++)
    {
        if(list[i]==list[i+1])
            new_count++;
        
    }
    if(new_count>old_count)
    {
        old_count=new_count;
        modal=j;
    }
    }
    printf("\n%f",list[modal]);
    
}

int main() {

    int n,i;
    float arr[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    mean(arr,n);
    median(arr,n);
    mode(arr,n);
    return 0;
   
}
