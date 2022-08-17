#include <iostream>
#include<map>
#include<list>
using namespace std;

class graph{
  public:
    map<int, list<int>> adj;

    void addEdge(int u, int v, bool directed){
      adj[u].push_back(v);
      if(!directed) adj[v].push_back(u);
    }
    void print(){
      for(auto i: adj) {
        cout << i.first <<"->";
        for(auto j:i.second){
          cout << j <<",";
        }
        cout << endl;
      }
    }
};

int main() {
  int u, v;
  cout << "nodes = ";
  cin >> u;
  graph g;
  cout << "edges = ";
  cin >> v;
  for(int i = 0; i<v; i++) {
    int a, b;
    cin >> a >> b;
    g.addEdge(a, b, 0);
  }
  g.print();
}
