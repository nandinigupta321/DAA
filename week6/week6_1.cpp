#include<iostream>
#include<stack>
using namespace std;
bool DFS(int **g, int n, int src, int dest)
{
    stack <int> s;
    int mark[n] = {0};
    s.push(src);
    mark[0] = 1;
    while(!s.empty())
    {
        int v = s.top();
        s.pop();
        for(int i=0;i<n;i++)
        {
            if(g[v][i]==1)
            {
                if(i==dest)
                    return true;
                if(mark[i]==0)
                {
                    s.push(i);
                    mark[i]=1;
                }
            }
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int** g = new int*[n];
    for(int i=0;i<n;i++)
    {
        g[i]=new int [n];
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          cin>>g[i][j];
          int src, dest;
          cin>>src>>dest;
          if(DFS(g, n, src-1, dest-1))
            cout<<"Yes Path Exists";
          else
            cout<<"No Such Path Exists";
          return 0;
}
