#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef vector <pair<int, pair<int,int > > >viii;

viii kruskals(viii g,int v)
{
    viii res;
    int s,d,w;
    int parent[v];
    for(int i=0;i<v;i++)
    {
        parent[i]=-1;
    }
    sort(g.begin(),g.end());

    int e=g.size();
    for(int i=0;i<e;i++)
    {
        s=g[i].second.first;
        d=g[i].second.second;
        w=g[i].first;
        if(find(s,parent[i])!=find(d,parent[i]))
        {
            res.push_back(g[i]);
        }
        unionByWeight(s,d,parent);
    }
    return res;
}
int main()
{
    viii g,res;
    int v,e,s,d,w,sum=0;
    cin>>v>>e;
    for(int i=0;i<e;i++)
    {
        cin>>s>>d>>w;
        g.push_back(make_pair(w,make_pair(s,d)));    
    }
    res=kruskals(g,v);
    for(int i=0;i<res.size();i++)
    {
        int w=res[i].first;
        cout<<res[i].second.first<<" "<<res[i].second.second<<endl;
        sum+=w;
    }
    cout<<"Sum of weights = "<<sum<<endl;
}