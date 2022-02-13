class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        
        vector<string> ans,  line;
        string str;
        int len=0;
        
        for(int i=0; i<words.size(); i++) {
            if(len + line.size() + words[i].size() <= maxWidth) {  //Line has more space for words
                line.push_back(words[i]);
                len+=words[i].size();
            } else { //Line is full. Process the line and add new line          
                if(line.size()==1) {  //Only one word, then left justify
                    str = line[0];
                    cout << str;
                    str.append(maxWidth-str.size(), ' ');
                    ans.push_back(str);
                } else if(line.size()>1) {
                    int div = (maxWidth-len) / (line.size()-1);
                    int mod = (maxWidth-len) % (line.size()-1);
                    //Assign div spaces to all words.
                    //Assign div+1 spaces to first mod words
                    str = line[0];
                    for(int j=1; j<line.size(); j++) {
                        if(j<=mod) {
                            str.append(div+1, ' ');
                        } else {
                            str.append(div, ' ');
                        }
                        str+=line[j];
                    }
                    ans.push_back(str);
                }
                
                line.clear();
                line.push_back(words[i]);
                len = words[i].size();
            }
        }
        
        str = line[0];
        for (int j = 1; j < line.size(); ++j) str += ' ' + line[j];
        str.append(maxWidth-str.size(), ' ');
        ans.push_back(str);
        

        
        return ans;
    }
};