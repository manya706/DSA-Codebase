class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int p = -1;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0){
                asteroids[++p] = asteroids[i];
                continue;
            }

            bool neg = true;
            while(p>=0 && asteroids[p]>0){
                if(asteroids[p]<abs(asteroids[i])){
                    p--;
                }
                else if(asteroids[p]>abs(asteroids[i])){
                    neg = false;
                    break;
                }
                else{
                    neg = false;
                    p--;
                    break;
                }
            }
            if(neg) asteroids[++p] = asteroids[i];
        }
        asteroids.resize(p+1);
        return asteroids;
    }
};