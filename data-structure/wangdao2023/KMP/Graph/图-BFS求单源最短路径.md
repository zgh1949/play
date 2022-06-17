``` c
/**/
void BFS_MIN_Distance(Graph G,int u){
    //初始化距离数组  distance[i] 表示u到节点i的最短距离
    for(i=0; i<G.vexnum; ++i){
        distance[i] = INT_MAX;
    }

    // 
    visited[u] = TRUE;
    distacne[u] = 0;
    Enqueue[Q, u];

    while(isNotEmpty(Q)){
        DeQueue(Q,u);
        for(w=FirstNeighbor(G,u); w>=0; w=NextNeighbor(G,u,w)){
            if(!visited[w]){
                visited[w] = TRUE;
                distance[w]=distance[u] + 1;
                Enqueue[Q,w];
            }
        }
    }

}
```