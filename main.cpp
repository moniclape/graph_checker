#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, edge, temp_n;
    cin >> N;
    vector<vector<int>> graph(N);
    for (int i = 0; i < N; i++){
        cin >> temp_n >> edge;
        graph[temp_n].push_back(edge);
    }
    cout << "graph:" << endl;
    for (int i = 0; i < N; ++i){
        cout << i << " -> ";
        for (int neighbor : graph[i]){
            cout << neighbor << " ";
        }cout << endl;
    }
    bool condition_met = true;
    for (int i = 0; i < N; ++i){
        if (graph[i].size() > 1){
            condition_met = false;
            break;
        }
    }
    if (condition_met){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    return 0;
}
