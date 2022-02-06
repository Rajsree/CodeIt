class TimeMap {
public:
    map<string,map<int,string>> timeMap; // Foo : {1, bar} , {5, bar2}
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {        
        timeMap[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
      auto it = timeMap[key].upper_bound(timestamp);
        return it!=timeMap[key].begin() ? prev(it)->second : ""; // it--; it->second
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */