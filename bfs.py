def bfs(vis,numnodes,grap,j):
	qu=[]
	vis[j] = 1
	qu.append(j)
	while len(qu) > 0 :
		s=qu.pop()
		print( s, end = " ")
		for i in range(numnodes):
			if graph[s][i] == 1 and not vis:
				vis[i] = 1
				qu.append(i)


num_nodes= int(input('enter the number of nodes'))

visited = [0]* num_nodes

graph = []

for i in range(num_nodes):
	l = list(map(int,input('enter the elements one after the other').split()))
	graph.append(l)

for i in range(num_nodes):
	if not visited[i]:
		bfs(visited,num_nodes,graph,i)
