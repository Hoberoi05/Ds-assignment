     #assignment9-q1(d)
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int adj[100][100];
    int dist[100];
    bool visited[100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            adj[i][j] = -1;


    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = w;   
        adj[v][u] = w;  
    }

    int start;
    cin >> start;

    for (int i = 0; i < n; i++) {
        dist[i] = 999999;
        visited[i] = false;
    }

    dist[start] = 0;

    for (int k = 0; k < n; k++) {
        int u = -1;
        int mindist = 999999;

        for (int i = 0; i < n; i++) {
            if (!visited[i] && dist[i] < mindist) {
                mindist = dist[i];
                u = i;
            }
        }

        visited[u] = true;

        for (int v = 0; v < n; v++) {
            if (adj[u][v] != -1 && dist[u] + adj[u][v] < dist[v]) {
                dist[v] = dist[u] + adj[u][v];
            }
        }
    }

    cout << "Dijkstra Distances:\n";
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << ": " << dist[i] << "\n";
    }

    return 0;
}