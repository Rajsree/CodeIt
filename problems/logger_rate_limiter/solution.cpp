class Logger {
public:
    unordered_map<string, int> messages; // string, timestamp 
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if(messages.find(message) != messages.end()) {
            int prev= messages[message];
            if(prev+10 <= timestamp) {
                messages.erase(message);
                messages[message] = timestamp;
                return true;
            } else {
                return false;
            }
        } else {
            messages[message] = timestamp;
            return true;
        }
        
        
        return false;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */