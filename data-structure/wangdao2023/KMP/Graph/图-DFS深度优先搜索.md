``` c
bool visited[MAX_VERTEX_NUM];
void DFSTravetse(Graph G){
    for(v = 0; v < G.vexnum; ++v){
        visited[v] = FALSE;
    }
    for(v = 0; v < G.vexnum; ++v){
        if(!visited[v]){
            DFS(G,v);
        }
    }
}

// 递归
void DFS(Graph G, int v){
    visit(v);
    visited[v] = TRUE;
    for(w=FirstNeighor(G,v); w>=0; w=NextNeighbor(G,v,w)){
        if(!visited[w]){
            DFS[G,w]
        }
    }
}
```