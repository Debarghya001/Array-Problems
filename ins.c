/*Sorting an array using insertion sort technique*/
#include<stdio.h>
int main()  //Main function
{
    //Reading values
    int i,j,n,temp;
    printf("Enter the size of the array=");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array:\n");
    for(i=0;i<n;i++)  
    {
        scanf("%d", &a[i]);
    }
    for(i=1;i<n;i++)  //Loop 1
    {
        temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0)  //Loop 2 to sort the array
        {
            a[j+1]=a[j];
            j--;
        }  //End of loop 2
        a[j+1]=temp;
    }  //End of loop 1
    printf("Sorted array:\n");
    for(i=0;i<n;i++) //Loop 3 to print the array
    {
        printf("%d ", a[i]);
    }  //End of loop 3 
    return 0;
}