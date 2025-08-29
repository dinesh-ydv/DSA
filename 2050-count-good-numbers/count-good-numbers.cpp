class Solution {

    long long mod = 1e9 + 7;

    long modPow(long x, long y){
        if(y == 0) return 1;
        long half = modPow(x, y/2);
        if(y % 2 != 0) return (x * half * half) % mod;
        return (half * half) % mod;
    }

public:
    
    int countGoodNumbers(long long n) {
        long long evenCount = (n+1)/2;
        long long oddCount = n/2;

        long long evenPart = modPow(5, evenCount);
        long long oddPart = modPow(4, oddCount);

        return (evenPart * oddPart) % mod;
    }
};