class RandomizedSet {
public:
    vector<int> v;
    unordered_map<int,int> umap;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(umap[val]!=0)
            return false;
        v.push_back(val);
        umap[val]=(int)v.size();
        return true;
    }
    
    bool remove(int val) {
        if(umap[val]==0)
            return false;
        int temp = v[v.size()-1]; v.pop_back();
        umap[temp]=umap[val];
        v[umap[temp]-1]=temp;
        umap[val]=0;
        return true;        
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};