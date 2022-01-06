class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int> > v;
        for(auto it:trips){
            v.push_back({it[1],it[0]});
            v.push_back({it[2],-1*it[0]});
        }
        sort(v.begin(),v.end());
        int cur=0;
        for(auto it:v){
            cur+=it.second;
            if(cur>capacity){
                return false;
            }
        }
        return true;
    }
};