// class Solution {
// public:
//     bool isRobotBounded(string s) {
//         bool a[201][201];
//         memset(a,sizeof(a),false);
//         int i=100,j=100;
//         int cur=0;  // NESW
//         int dy[]={+1,0,-1,0};
//         int dx[]={0,+1,0,-1};
//         s+=s;
//         a[i][j]=1;
//         // cout<<s<<endl;
//         for(auto it:s){
//             if(it=='G'){
//                 if(a[i+dx[cur]][j+dy[cur]]){
//                     return true;
//                 }
//                 if(cur==0){
//                     a[i][++j]=true;
//                 }
//                 if(cur==1){
//                     a[++i][j]=true;
//                 }
//                 if(cur==2){
//                     a[i][--j]=true;
//                 }
//                 if(cur==3){
//                     a[--i][j]=true;
//                 }
//                 a[i][j]=1;
//             }
            
//             if(it=='L'){
//                 cur=((cur+1)+4)%4;
//             }
//             if(it=='R'){
//                 cur=((cur-1)+4)%4;
//             }
//             // cout<<it<<" "<<i<<" "<<j<<" "<<a[i][j]<<" "<<a[i][j+1]<<" : "<<cur<<endl;
//         }
//         return false;
//     }
// };

//Leetcode Bug, try the code again




//https://leetcode.com/problems/robot-bounded-in-circle/discuss/290856/JavaC%2B%2BPython-Let-Chopper-Help-Explain
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, i = 0;
        vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, { -1, 0}};
        for (char & ins : instructions)
            if (ins == 'R')
                i = (i + 1) % 4;
            else if (ins == 'L')
                i = (i + 3) % 4;
            else
                x += d[i][0], y += d[i][1];
        return x == 0 && y == 0 || i > 0;
    }
};