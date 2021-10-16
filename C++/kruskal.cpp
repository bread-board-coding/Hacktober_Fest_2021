#include <iostream>
#include <tuple>
#include <queue>
using namespace std;
int link[5000];
int size[5000];
int fun(int k)
{
    while(k!=link[k])
    {
        k=link[k];
    } return k;
}
int main()
{
    priority_queue<tuple<int,int,int> > q;
    tuple<int,int,int> t;
    int N; int M;
    cin>>N>>M;
    int x; int y; int z;
    for(int i=0; i<M; i++)
    {
        cin>>x>>y>>z;
        q.push(make_tuple(-z,x,y));
    }
    
    for(int i=0; i<N+1; i++)
    {
        link[i]=i;
        size[i]=1;
    }
    int aa;
    int bb;
    int result=0;
    while(!q.empty())
    {
        t=q.top(); q.pop();
        x=abs(get<0>(t));
        y=get<1>(t);
        z=get<2>(t);
        aa=fun(y);
        bb=fun(z);
        if(aa==bb)
        {
            continue;
        }
        else if(size[aa]>size[bb])
        {
            link[bb]=aa;
        }   
        else if(size[bb]>size[aa])
        {
            link[aa]=bb;
        }
        else if(size[bb]==size[aa])
        {
            if(aa>bb)
            {
                link[bb]=aa;
            }
            else if(aa<bb)
            {
                link[aa]=bb;
            }
        } result+=x;
    } cout<<result;
}

