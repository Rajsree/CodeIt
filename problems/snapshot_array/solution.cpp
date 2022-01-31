class SnapshotArray {
public:
    unordered_map<int,map<int,int>> a;
    int cur_snap_id = 0;
    SnapshotArray(int length) {
        
    }
    
    void set(int index, int val) {
        a[index][cur_snap_id] =val;
    }
    
    int snap() {
        // cur_snap_id++;
         return cur_snap_id++;
    }
    
    int get(int index, int snap_id) {
        //int val = index(snapshot)at snap_id;
        auto it = a[index].upper_bound(snap_id);
        if(it!=begin(a[index])) return prev(it)->second;
        return 0;
        
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */