// WAP in C to take n elements in an array, find out the sum and average of all the odd no.s in the array in the parent process and count nos of prime no in the array in the child process.
#include<stdio.h>
#include<unistd.h>
#include<malloc.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p=fork();
    if(p==0)
    {
        int avg=0,sum=0;
        printf("Child process\n");
        for(int i=0;i<n;i++)
        {
            if(arr[i]&1)
            {
                sum+=arr[i];
                avg++;
            }
        }
        avg=sum/avg;
        printf("The sum and average is %d and %d respectively\n",sum,avg);
    }
    else
    {
        wait();
        int count=0;
        printf("Parent process\n");
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=1;j<=arr[i];j++)
            {
                if(arr[i]%j==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                count++;
            }
        }
        printf("The number of prime numbers is %d\n",count);
    }
    return 0;
}