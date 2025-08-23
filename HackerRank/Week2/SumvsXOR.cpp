long sumXor(long n) {
    if(n==0) return 1;
    long res = 1;
    while(n>0)
    {
        if((n&1) == 0) res <<= 1;
        n >>= 1;
    }
    return res;
}