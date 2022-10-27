// psuedo code for data structure and union with all methods

struct DSU{
    vector<int> par;
    vector<int>size;
  
    void assign(int n){
        par.resize(n+1);
        size.assign(n+1, 1);
        iota(all(par), 0);
    }
    int find(int x) {
        if(par[x] == x) return x;
        return par[x] = find(par[x]);
    }
    int get_size(int u){
      return size[find(u)];
    } 
    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return;
        }
        size[y] += size[x];
        size[x] = 0;
        par[x] = y;
        
    }
};
