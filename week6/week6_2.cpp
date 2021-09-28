#include<iostream>
#include<queue>
using namespace std;
bool isBipartite(int **g, int n, int src)
{
    queue<int>q;
    int color[n]={0};
    int c_color =1;
    color[src]=c_color;
    q.push(src);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(g[u][u]!=0)
            return false;
        c_color*=-1;
        for(int i=0;i<n;i++)
        {
            if(g[u][i]!=0&&color[i]==0)
            {
                color[i]=c_color;
                q.push(i);
            }
            if(g[u][i]!=0&&color[u]==color[i])
                return false;
                }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int** g= new int*[n];
    for(int i=0;i<n;i++)
    {
        g[i]=new int[n];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
         cin>>g[i][j];
    if(isBipartite(g, n, 0))
        cout<<"Yes Bipartite";
    else
        cout<<"Not Bipartite";
    return 0;
}

