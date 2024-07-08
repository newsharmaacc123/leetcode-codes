class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_cost = 0, diff =0, index =0 ,fuel=0;
        for(int i=0;i<gas.size();i++){
            diff = gas[i]-cost[i];
            total_cost += diff;
            fuel += diff;
            if(fuel<0){
                fuel = 0;
                index = i+ 1;
            }
        }
        if(total_cost<0){
            return -1;
        }
        else{
            return index;
        }
    }
};