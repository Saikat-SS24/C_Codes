#include<stdio.h>

int adj[10][10];
int visitedDFS[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int q[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int inserted[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int visitedBFS[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int count = 0, rear = -1, front = -1;
int n, v,i,j;


void dfs(int v)
{
	visitedDFS[v] = 1;
	for(i= 0; i<n; i++)
	{
		if(adj[v][i] && !visitedDFS[i])
		{
			printf("%d => %d\n", v,  i);
			dfs(i);
		}
	}
}

void bfs(int v)
{
	visitedBFS[v] = 1;
	printf("%d ", v);
	count = 1;
	while(count < n)
	{
		for(i = 0; i<n; i++)
		{
			if(adj[v][i] && !visitedBFS[i] && !inserted[i])
			{
				q[++rear] = i;
				inserted[i] = 1;
			}
		}
		v = q[++front];
		printf("%d ", v);
		visitedBFS[v] = 1;
		count++;
	}
}
int main()
{
	printf("Enter the dim of graph:\n");
	scanf("%d", &n);
	printf("Enter the adjacency matrix:\n");
	for(i = 0; i<n; i++)
	{
		for(j = 0; j<n; j++)
		{
			scanf("%d", &adj[i][j]);
		}
	}
	printf("Enter starting vertex: ");
	scanf("%d", &v);
	printf("The Depth first order is:\n");
	dfs(v);
	printf("The Breadth first order is:\n");
	bfs(v);
	printf("\n");
	return 0;
}
