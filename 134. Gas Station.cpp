class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int c=0;
        int f=0;
        int n=cost.size();
        for(int i=0;i<n;i++){
            c+=cost[i];
            f+=gas[i];
        }
        if(f<c) return -1;

        int cf=0;
        int s=0;
        for(int i=0;i<n;i++){
            if(cf<0){
                s=i;
                cf=0;
            }
            cf+=gas[i]-cost[i];
        }
        return s;
    }
};