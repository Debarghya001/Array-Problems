/* Sorting an array using bubble sort technique*/
#include<stdio.h>
int main()  //Main function
{
    //Reading values
    int n,s,i,j,temp;
    printf("Enter array size=");
    scanf("%d", &n);
    printf("Enter the array: \n");
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++) //Loop 1
    {
        for(j=0;j<=n-i-1;j++) //Loop 2 to sort the array
        {
            if(a[j]>a[j+1])
            {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        } //End of loop 2
    }  //End of loop 1
    printf("Sorted array:\n");
    for(i=0;i<n;i++) //Loop 3 to print array
    {
        printf("%d ", a[i]);
    } //End of loop
    return 0;
}