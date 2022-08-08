int poorPigs(int b, int d, int t) {
    return ceil(log(b) / log(t / d + 1)); 
}