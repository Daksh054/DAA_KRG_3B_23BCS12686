class Solution {
public:
    int monkeyMove(int n) {
        constexpr int MOD = 1e9 + 7;
        long long res = 1, base = 2;
        while(n){
            if(n & 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            n >>= 1;
        }
        return (res - 2 + MOD) % MOD;
    }
};