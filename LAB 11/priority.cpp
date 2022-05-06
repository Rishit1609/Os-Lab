#include <bits/stdc++.h>
using namespace std;
struct node
{
    int at, bt, wt, tat, ct, no, prior;
};
int main()
{
    int n;
    cout << "Enter number of processes\n";
    cin >> n;
    vector<node> v(n), v2(n);
    for (auto i = 0; i < n; i++)
    {
        cout << "Enter at bt priority of process " << i + 1 << "\n";
        node n;
        cin >> v[i].at >> v[i].bt >> v[i].prior;
        v[i].ct = 0;
        v[i].tat = 0;
        v[i].no = i + 1;
        v[i].wt = 0;
        v2[i] = v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].at > v[j].at && v[i].prior >= v[j].prior)
            {
                node t = v[i];
                v[i] = v[j];
                v[j] = t;
            }
        }
    }
    int comp = 0;
    int t = 0;
    while (comp < n)
    {
        comp = 0;
        if (v[0].bt != 0 && v[0].at <= t)
        {
            cout << "P" << v[0].no << " time " << t << " ";
            v[0].bt--;
            for (int i = 1; i < n; i++)
            {
                if (v[i].bt != 0 and v[i].at <= t)
                {
                    v[i].wt++;
                }
            }
        }
        t++;
        if (v[0].bt == 0 && v[0].ct == 0)
        {
            v[0].ct = t;
            std::rotate(v.begin(), v.begin() + 1, v.end());
        }
        for (int i = 1; i < n; i++)
        {
            if (v[i].bt != 0 && v[i].prior < v[0].prior && v[i].at <= t)
            {
                node l = v[i];
                v[i] = v[0];
                v[0] = l;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i].bt == 0)
            {
                comp++;
            }
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].no < v[j].no)
            {
                node tem = v[i];
                v[i] = v[j];
                v[j] = tem;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        v[i].bt = v2[i].bt;
    }
    cout << "     AT BT PR WT TAT CT\n";
    float avgwt = 0, avgtat = 0;
    for (auto i : v)
    {
        i.tat = i.ct - i.at;
        avgwt += i.wt;
        avgtat += i.tat;
        cout << "Process " << i.no << " " << i.at << " " << i.bt << " " << i.prior << " " << i.wt << " " << i.tat << " " << i.ct << endl;
    }
    avgtat = avgtat / n;
    avgwt = avgwt / n;
    cout << "Average wt is " << avgwt << " Average tat is " << avgtat << endl;
    return 0;
}