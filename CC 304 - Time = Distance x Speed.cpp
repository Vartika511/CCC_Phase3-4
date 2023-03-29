#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define INF 1000000007

vector<pii> adj[1001];
int dist[1001];

int dijkstra(int n, int start, int end, int t) {
    // Initialize distances to all nodes as infinity, except the starting node
    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
    }
    dist[start] = 0;

    // Create a priority queue to store nodes in increasing order of distance from the start node
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    // Add the start node to the priority queue
    pq.push(make_pair(0, start));

    // Loop until the priority queue is empty
    while (!pq.empty()) {
        // Get the node with the smallest distance from the priority queue
        int u = pq.top().second;
        pq.pop();

        // If we have reached the end node, return its distance
        if (u == end) {
            return dist[end];
        }

        // Loop through all the adjacent nodes of the current node
        for (auto v : adj[u]) {
            int w = v.second;
            int newDist = dist[u] + w*t; // Calculate the new distance to this adjacent node

            // If the new distance is smaller than the current distance to this node, update the distance and add it to the priority queue
            if (newDist < dist[v.first]) {
                dist[v.first] = newDist;
                pq.push(make_pair(newDist, v.first));
            }
        }
    }

    // If we have not found a path from the start to the end node, return -1
    return -1;
}

int main() {
    int n, m, p, q, t;
    cin >> n >> m >> p >> q >> t;

    // Read in the edges of the graph
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        // Add the edge to both nodes' adjacency lists
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    int ans = dijkstra(n, p, q, t);

    cout << ans << endl;

    return 0;
}
