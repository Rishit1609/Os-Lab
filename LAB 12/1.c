#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("Parent\n");
    int p=fork();
    int n=3;
    while(n--)
    {
        if(p==0)
        {
            printf("(Child %d %d)\n",getpid(),getppid());
            p=fork();
        }
        else
        {
            wait();
        }
    }
    return 0;
}