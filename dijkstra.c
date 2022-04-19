#include<stdio.h>
#include<stdlib.h>
int a[10][10];
int d[10];
int p[10];
int flag[10];

int n,s,count,i,j;
void relax(int u , int v)
{
   if(d[v] > d[u] + a[u][v])
   {
      d[v] = d[u] + a[u][v];
      p[v] = u;
   }
}
void initialize_single_source()
{  
   for(i = 0; i < n; i++)
   {
      d[i] = 999;
      p[i] = -1;
      flag[i] = 0;
   }
   d[s] = 0;
   count = n;
}
int extractmin()
{
  int vertex = -1;
  int min = 999;
  for(i = 0; i < n; i++)
  {
     if(flag[i] == 0)
     {
        if(d[i] <= min)
        {   
           min = d[i];
           vertex = i;
        }
     }
  }
  flag[vertex] = 1;
  return(vertex);
}
void dijkstra()
{
  initialize_single_source();
  while(count != 0)
  {
    int u = extractmin();
    for(i = 0; i < n ; i++)
    {
      if(a[u][i] != 999)
         relax(u,i);
    }
    count--;
  }
}
int main()
{
  printf("Enter no of nodes: ");
  scanf("%d", &n);
  printf("Enter the matrix\n");
  for(i=0; i<n ;i++)
  {
    for(j = 0; j<n ;j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter start node: ");
  scanf("%d", &s);
  dijkstra();
  for(i = 0; i < n ; i++)
        printf("%d ", d[i]);
}
