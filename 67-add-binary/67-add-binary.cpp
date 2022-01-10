class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(a.size()>b.size()){
            swap(a,b);
        }
        int n1=a.size();
        int n2=b.size();
        int cur=0;
        for(int i=0;i<n2;i++){
            int f=0;
            if(i<n1){
                if(a[i]=='1'){
                    if(b[i]=='1'){
                        b[i]='0';
                        f++;
                    }
                    else{
                        b[i]='1';
                    }
                }
            }
            if(cur){
                cur=0;
                if(b[i]=='1'){
                    cur++;
                    b[i]='0';
                }
                else{
                    b[i]='1';
                }
            }
            if(f){
                cur++;
            }
        }
        if(cur){
            b+='1';
        }
        reverse(b.begin(),b.end());
        return b;
    }
};