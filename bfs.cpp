void bfs(int node)
{
	queue<int> q;
	visited[node]=1;
	q.push(node);
	while(!q.empty())
	{
		int parent=q.front();
		q.pop();
		for(int child:arr[parent])
		{
			if(visited[child]==0)
			{
				visited[child]=1;
				dist[child]=dist[parent]+1;
				q.push(child);
			}
		}
	}
}
