#include<stdio.h>
struct process
{
    int id,at,bt,wt,tat;
};
int main()
{
    int n;
    printf("Enter number of processes\n");
    scanf("%d",&n);
    struct process p[n];
    printf("Enter Gantt chart\n");
    for(int i=0;i<n;i++)
    {
        int x;
        printf("Enter process and time interval\n");
        scanf("%d",&x);
        scanf("%d",&p[x].at);
        scanf("%d",&p[x].bt);
        p[x].bt-=p[x].at;
        p[x].id=x;p[x].tat=0;
    }
    printf("Enter id and wt\n");
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        scanf("%d",&p[x].wt);
        p[x].at-=p[x].wt;
        p[x].tat=p[x].bt+p[x].wt;
    }
    printf("ID    AT    WT    BT    TAT\n");
    for(int i=0;i<n;i++)
    {
        printf("%d    %d    %d    %d   %d\n",p[i].id,p[i].at,p[i].wt,p[i].bt,p[i].tat);
    }
    return 0;
}
