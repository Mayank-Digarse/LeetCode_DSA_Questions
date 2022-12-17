class Solution {
public:
    int solve(vector<int>& num, int i , int j){
        if(i>j) return 0;
        if(i == j) return num[i];
        int opt1 = num[i]+min(solve(num , i+2, j) , solve(num , i+1 , j-1));
        int opt2 = num[j]+min(solve(num , i , j-2) , solve(num , i+1 , j-1));
        return max(opt1 , opt2);
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        int p1_score = solve(nums ,0 , nums.size()-1);
        int total_score = 0;
        for(int i = 0 ; i<nums.size(); i++){
        total_score +=nums[i]    ;
        }
       int p2_score = total_score-p1_score;
        if(p1_score>=p2_score){
            return true;
        }
        else{
             return false;
            
        }
       
        
    }
};