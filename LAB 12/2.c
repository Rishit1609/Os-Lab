#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("Parent %d\n",getpid());
    int p=fork();
    int n=3;
    while(n--)
    {
        if(p==0)
        {
            printf("(Child %d %d)\n",getpid(),getppid());
        }
        else
        {
            wait();
            p=fork();
        }
    }
    return 0;
}