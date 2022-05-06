#include<stdio.h>
struct process
{
    int num,at,bt,wt,tat;
};
int main()
{
    int n;
    printf("Enter number of processes\n");
    scanf("%d",&n);
    struct process p[n];
    for(int i=0;i<n;i++)
    {
        p[i].num=i+1;
        printf("Enter BT for process %d \n",i+1);
        scanf("%d",&p[i].bt);
    }
    for(int i=0;i<n;i++)
    {
        p[i].at=0;
        p[i].wt=0;
        p[i].tat=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[i].bt<p[j].bt)
            {
                int tempnum=p[i].num, tempat=p[i].at,tempbt=p[i].bt;
                p[i].at=p[j].at;p[i].bt=p[j].bt;p[i].num=p[j].num;
                p[j].at=tempat;p[j].bt=tempbt;p[j].num=tempnum;
            }
        }
    }
      int add=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            p[i].wt=0;p[i].tat=p[i].bt;
            add+=p[i].bt;
        }
        else
        {
             if (add > p[i].at)
            {
                add -= p[i].at;
                p[i].wt = add;
                p[i].tat = p[i].bt + p[i].wt;
                add += p[i].at;
                add += p[i].bt;
            }
            else
            {
                p[i].wt = 0;
                p[i].tat = p[i].bt + p[i].wt;
                add += p[i].bt;
            }
        }
    }
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[i].num<p[j].num)
            {
                int tempnum=p[i].num, tempat=p[i].at,tempbt=p[i].bt,tempwt=p[i].wt,temptat=p[i].tat;
                p[i].at=p[j].at;p[i].bt=p[j].bt;p[i].num=p[j].num;p[i].wt=p[j].wt;p[i].tat=p[j].tat;;
                p[j].at=tempat;p[j].bt=tempbt;p[j].num=tempnum;p[j].wt=tempwt;p[j].tat=temptat;
            }
        }
    }
    printf("          AT BT WT TAT\n");
    for(int i=0;i<n;i++)
    {
        printf("process %d %d %d %d %d\n",p[i].num,p[i].at,p[i].bt,p[i].wt,p[i].tat);
    }
    float avgwt=0.0;
    float avgtat=0.0;
    for(int i=0;i<n;i++)
    {
        avgwt+=p[i].wt;
        avgtat+=p[i].tat;
    }
    avgwt=avgwt/n;
    avgtat=avgtat/n;
    printf("The average waiting time is %f units and the average turn around time is %f units\n",avgwt,avgtat);
}