class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical = 0;
        int horizontal = 0;
        for(char ch : moves){
            if(ch == 'U') vertical += 1;
            if(ch == 'D') vertical -= 1;
            if(ch == 'R') horizontal += 1;
            if(ch == 'L') horizontal -= 1;
        }
        return (horizontal == 0 && vertical == 0);
    }
};