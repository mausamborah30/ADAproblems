#include<stdio.h>
#include<stdlib.h>
int c=0;
void topo_sort()
{
    int u,i,j,k=1;
    int n;
    printf(" Enter the number of vertices\n");
    scanf("%d",&n);
    int sol[n+1],indegree[n+1],s[n+1],sum=0;
    int a[n+1][n+1];
    printf("Enter the elements of adjacency martix\n");
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        scanf("%d",&a[i][j]);
    }

    for(j=1;j<=n;j++)
    {
       sum=0;
        for(i=1;i<=n;i++)
            sum+=a[i][j];
        indegree[j]=sum;
    }
    int top=-1;
    for(i=1;i<=n;i++)
    {
        if(indegree[i]==0)
          s[++top]=i;
    }
    while(top!=-1)
    {
       u=s[top--];
       sol[k]=u;
       k++;
       for(j=1;j<=n;j++)
       {
          c++;
        if(a[u][j]>0)
        { indegree[j]-=1;
          if(indegree[j]==0)
          s[++top]=j;

        }
      }
    }

    printf("Linear sequence of vertices is \n");
    for(k=1;k<=n;k++)
    printf("%d ",sol[k]);
    printf("\n");
}
int main()
{

topo_sort();

return 0;
}
