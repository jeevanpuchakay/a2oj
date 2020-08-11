class Solution {
public:
    bool canConvertString(string s, string t, long k) {
        long n=s.size(),m=t.size(),moves;
        if(n!=m)return false;
        unordered_map<long,long> ks;
        for(long i=0;i<n;i++){
            moves=t[i]-s[i];
            moves+=(moves<0?26:0);
            if(moves==0)continue;
            if((ks[moves%26]<((k/26)+(moves<=(k%26))))){
                ks[moves%26]++;
            }else{
                return false;
            }
        }
        return true;
    }
};