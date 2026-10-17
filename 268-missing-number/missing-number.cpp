class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expected=0;
        for(int n=0; n<=nums.size(); n++ ){
            expected = expected+n;
        }
        int actual=0;
        for(int m: nums){
            actual= actual+m;
        } 
        return expected-actual;
}
};