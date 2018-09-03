# stat101
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float mean(float list[],int n)
{
    int i;
    float sum,avg;
    for(i=0;i<=n-1;i++)
    {
        sum=sum+list[i];
        
    }
    avg=sum/n;
    printf("%f",avg);
    return 0.0;
}
float median(float list[],int n)
{
    int j,i,mid,p,q;
    float temp,med;
    for(j=0;j<=n-1;j++)
    {     
    for(i=0;i<n;i++)
    {
        if(list[i]>=list[i+1])
        { 
            temp=list[i];
            list[i]=list[i+1];
            list[i+1]=temp;
        }
    }
    }
    if(n%2!=0)
    {    
    mid = (n-1)/2;
    printf("%f",list[mid]);
    }
    else
    {
        mid=n/2;
        p=mid-1;
        q=mid;
        med=(list[p]+list[q])/2;
        printf("%f",med);
    }    
    
    return 0.0;
}
float mode(float list[],int n)
{
    int modal,j,i,old_count=0,new_count=0;
    float temp;
    for(j=0;j<=n-1;j++)
    {     
    for(i=0;i<=n-1;i++)
    {
        if(list[i]>=list[i+1])
        { 
            temp=list[i];
            list[i]=list[i+1];
            list[i+1]=temp;
        }
    }
    }
    for(j=0;j<=n-1;j++)
    {    
    for(i=j;i<=n-1;i++)
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
    printf("%f",list[modal]);
    return 0.0;
}

int main() {

    int n,i;
    float arr[20];
    printf("enter the size of array");
    scanf("%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%f",arr[i]);
    }
    mean(arr,n);
    median(arr,n);
    mode(arr,n);
    return 0;
}
