class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        int zero=0;
        int one=0;
        for(auto i:students) one+=i;
        zero = n-one;
        for(int i=0;i<n;i++){
            int v = sandwiches[i];
            if(v==0){
                if(zero==0) return n-i;
                zero--;
            }
            else {
                if(one==0) return n-i;
                one--;
            }
        }
        return 0;
    }
};