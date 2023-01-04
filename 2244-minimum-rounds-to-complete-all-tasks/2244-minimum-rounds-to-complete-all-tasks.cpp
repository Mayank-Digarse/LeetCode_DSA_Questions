class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int , int> m;
        for(int i = 0; i<tasks.size(); i++){
            m[tasks[i]]++;
        }
        int mini = 0;
        for(auto it:m){
        if(it.second == 1) return -1;
            int cnt = 0;
            while(it.second >3)
                it.second -=3  , cnt++;
            if(it.second) cnt++;
            mini+=cnt;
        }
        return mini;
    }
};