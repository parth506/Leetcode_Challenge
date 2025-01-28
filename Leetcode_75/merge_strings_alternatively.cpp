class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int n=word1.size();
        int m=word2.size();
        string s="";
        int i=0;
        while(i<n && i<m){
            s=s+word1[i];
            s=s+word2[i];
            ++i;
        }
        while(i<n){
            s=s+word1[i];
            ++i;
        }
        while(i<m){
            s=s+word2[i];
            ++i;
        }
        return s;
    }
};