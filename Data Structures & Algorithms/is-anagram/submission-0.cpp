// class Solution {
// public:
//     bool isAnagram(string s, string t) {

//         if(s.size() != t.size()){
//             return false;
//         }
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         if(s == t){
//             return true;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }
        
        int hash[26] ={0};

        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++;
        }
        for(int i = 0; i < t.size(); i++){
            hash[t[i] - 'a']--;
        }
        for(int i =0; i < 26; i++){
            if(hash[i]!= 0){
                return false;
            }
        }
        return true;
    }
};
