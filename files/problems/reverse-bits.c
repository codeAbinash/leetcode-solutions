uint32_t reverseBits(uint32_t n) {
    uint32_t rev = 0;
    for(int i = 0; i < 32; i++)
        if((n>>i) & 1)
            rev = rev | ((uint32_t)1<<(31-i));
    
    return rev;
}