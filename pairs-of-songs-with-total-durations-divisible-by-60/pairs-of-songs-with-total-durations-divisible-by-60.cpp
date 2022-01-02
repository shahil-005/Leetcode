class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=(int)time.size();
        vector<int> a(1001,0);
        int ans=0;
        for(int i=0;i<n;i++){
            int x=time[i]/60;
            x++;
            x*=60;
            for(int j=x;j<=1000;j+=60){
                ans+=a[j-time[i]];
            }
            a[time[i]]++;
        }
        return ans;
    }
};