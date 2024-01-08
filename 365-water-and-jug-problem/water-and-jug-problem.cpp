class Solution {
public:
    bool canMeasureWater(int jug1, int jug2, int targetCapacity) {
        if(jug1+jug2<targetCapacity)return 0;
        return targetCapacity%__gcd(jug1,jug2)==0;
    }
};