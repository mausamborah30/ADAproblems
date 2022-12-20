#include <iostream>

using namespace std;

void topo()
{
    int n,i,j,k=1;
    cout<<"enter number of vertices\n";
    cin>>n;
    cout<<"enter adjacency matrix\n";
    int a[n+1][n+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    int s[n+1];
    int top=-1;
    int sum=0,indeg[n+1],t[n+1],u;
    for(j=1;j<=n;j++)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+a[i][j];
            
        }
            indeg[j]=sum;
        
    }
    for(i=1;i<=n;i++)
    {
        if(indeg[i]==0)
        {
            s[++top]=i;
        }
    }
    
    while(top!=-1)
    {
        u=s[top--];
        //int k=1;
        t[k]=u;
        k++;
        
    
    for(j=1;j<=n;j++)
    {
        if(a[u][j]>0)
        {
            indeg[j]--;
            if(indeg[j]==0)
            s[++top]=j;
        }
    }
    }
    for(i=1;i<=n;i++)
    cout<<t[i]<<" "<<endl;
}
int main()
{
    
    cout<<"answer is \n";
    topo();

    return 0;
}
