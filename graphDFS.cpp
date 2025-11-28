     #assignment9-q1(b)
#include <iostream>
using namespace std;

int n;
int adj[100][100];
bool visited[100];

void dfs(int u) {
    visited[u] = true;
    cout << u << " ";

    for (int v = 0; v < n; v++) {
        if (adj[u][v] == 1 && !visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    int m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    int start;
    cin >> start;

    cout << "DFS: ";
    dfs(start);

    return 0;
}
