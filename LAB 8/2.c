#include <stdio.h>
struct process
{
    int num, at, bt, wt, tat;
};
int main()
{
    int n;
    printf("Enter number of processes\n");
    scanf("%d", &n);
    struct process p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].num = i + 1;
        printf("Enter BT for process %d \n", i + 1);
        scanf("%d", &p[i].bt);
    }
    for (int i = 0; i < n; i++)
    {
        p[i].at = 0;
        p[i].wt = 0;
        p[i].tat = 0;
    }
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            p[i].wt = 0;
            p[i].tat = p[i].bt;
            add += p[i].bt;
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
    printf("          AT BT WT TAT\n");
    for (int i = 0; i < n; i++)
    {
        printf("process %d %d %d %d %d\n", p[i].num, p[i].at, p[i].bt, p[i].wt, p[i].tat);
    }
    float avgwt = 0.0;
    float avgtat = 0.0;
    for (int i = 0; i < n; i++)
    {
        avgwt += p[i].wt;
        avgtat += p[i].tat;
    }
    avgwt = avgwt / n;
    avgtat = avgtat / n;
    printf("The average waiting time is %f units and the average turn around time is %f units\n", avgwt, avgtat);
}