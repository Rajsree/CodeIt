class Solution {
public:
    string getHint(string secret, string guess) {
        int secretpos[10] = {0};
        int guesspos[10] = {0};
        int count = 0, bulls = 0, cows=0;
        for(int i=0; i<secret.length(); i++) {
           if(secret[i]==guess[i]) {
               bulls++;
           } else {
               secretpos[secret[i]-'0']++;
               guesspos[guess[i]-'0']++;
           }
        }
        
        for(int i=0; i<10; i++) {
            if(secretpos[i] && guesspos[i]){
                cows+=min(secretpos[i], guesspos[i]);
            }
        }
        string str;
        str = to_string(bulls)+'A' +to_string(cows) +'B' ;
        return str;
    }
};