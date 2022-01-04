class Solution {
public:
    int bitwiseComplement(int n) {
        if(!n){
            return (!n);
        }
        int m=0,i=0;
        while(n){
            m+=((!(n&1))*pow(2,i));
            n>>=1;
            i++;
        }
        return m;
    }
};