/*linear search*/
#include<stdio.h>
int main()
{
    int a[20],i,s,n;
    printf("no of elements");
    scanf("%d",&n);
     
    printf("Enter array elements:");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:");
    scanf("%d",&s);
     
    for(i=0;i<n;++i)
        if(a[i]==s)
        break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
    return 0;
}
output
no of elements5                                                                                                                                 
Enter array elements:1                                                                                                                          
9                                                                                                                                               
5                                                                                                                                               
8                                                                                                                                               
3                                                                                                                                                                                                                                                                                              
Enter element to search:5
Element found at index 2         

