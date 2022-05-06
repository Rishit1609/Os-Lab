#include <bits/stdc++.h>
using namespace std;
struct node
{
    int at, bt, wt, tat, ct, no;
};
int main()
{
    int n,Q;
    cout<<"Enter time quantum\n";
    cin>>Q;
    cout << "Enter number of processes\n";
    cin >> n;
    vector<node> v(n), v2(n);
    for (auto i = 0; i < n; i++)
    {
        cout << "Enter at bt of process " << i + 1 << "\n";
        cin >> v[i].at >> v[i].bt;
        v[i].ct = 0;
        v[i].wt = -v[i].at;
        v[i].tat = 0;
        v[i].no = i + 1;
        v2[i]=v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].at < v[j].at)
            {
                int tempnum = v[i].no, tempat = v[i].at, tempbt = v[i].bt;
                v[i].at = v[j].at;
                v[i].bt = v[j].bt;
                v[i].no = v[j].no;
                v[j].at = tempat;
                v[j].bt = tempbt;
                v[j].no = tempnum;
                tempnum = v2[i].no; tempat = v2[i].at; tempbt = v2[i].bt;
                v2[i].at = v2[j].at;
                v2[i].bt = v2[j].bt;
                v2[i].no = v2[j].no;
                v2[j].at = tempat;
                v2[j].bt = tempbt;
                v2[j].no = tempnum;
            }
        }
    }
    int t = 0;
    while (true)
    {
        int q=Q;
        while (q--)
        {
            if(v[0].bt>0)
            {
                v[0].bt--;
                for(int i=1;i<n;i++)
                {
                    if(v[i].bt!=0 && v[i].at<=t)
                    {
                        v[i].wt++;
                    }
                }
                t++;
            }
            else if(v[0].bt==0 and v[0].ct==0)
            {
                v[0].ct=t;
                break;
            }
            else
            {
                break;
            }
        }
        if(v[0].bt==0 and v[0].ct==0)
        {
            v[0].ct=t;
        }
        std::rotate(v.begin(), v.begin()+1, v.end());
        int count = 0;
        for (auto i : v)
        {
            if (i.ct != 0)
            {
                count++;
            }
        }
        if (count == v.size())
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].no < v[j].no)
            {
                int tempnum = v[i].no, tempat = v[i].at, tempbt = v[i].bt;
                v[i].at = v[j].at;
                v[i].bt = v[j].bt;
                v[i].no = v[j].no;
                v[j].at = tempat;
                v[j].bt = tempbt;
                v[j].no = tempnum;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        v[i].bt=v2[i].bt;
    }
    cout<<"     AT BT WT TAT CT\n";
    float avgwt=0,avgtat=0;
    for(auto i:v)
    {
        i.tat=i.ct-i.at;
        avgwt+=i.wt;
        avgtat+=i.tat;
        cout<<"Process "<<i.no<<" "<<i.at<<" "<<i.bt<<" "<<i.wt<<" "<<i.tat<<" "<<i.ct<<endl;
    }
    avgtat=avgtat/n;
    avgwt=avgwt/n;
    cout<<"Average wt is "<<avgwt<<" Average tat is "<<avgtat<<endl;
}