import math 

def multi_stage_graph(graph, stages, source, destination):
	n = len(graph)
	cost = [math.inf] * n
	path = [0] * n

	cost[destination] = 0

	for i in range(n - 1, -1, -1):
		for (v,w) in graph[i]:
			if cost[v] + w < cost[i]:
				cost[i] = cost[v] + w
				path[i] = v


	min_path = []
	current = source
	while current != destination:
		min_path.append(current)
		current = path[current]

	min_path.append(destination)

	return cost[source], min_path


graph = {
	0: [(1,9), (2,7), (3,3), (4,2)],
	1: [(5, 4), (6, 2), (7, 1)],
	2: [(5, 2), (6, 7)],
	3: [(7,11)],
	4: [(6, 11), (7, 8)],
	5: [(8, 6), (9, 5)],
	6: [(8, 4), (9, 3)],
	7: [(9, 5), (10, 6)],
	8: [(11, 4)],
	9: [(11, 2)],
	10:[(11, 5)],
	11:[]
}
		
stages = 5
source = 0
destination = 11

min_cost, min_path = multi_stage_graph(graph, stages, source, destination)

print("Minimum cost :", min_cost)
print("Minimum path is : ", [node for node in min_path])			
