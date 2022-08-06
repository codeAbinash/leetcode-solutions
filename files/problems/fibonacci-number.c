int count(int n, int *memory){
    if(n == 1) return 1;
    if(n <= 0) return 0;
    if(memory[n] > 0) return memory[n];
    return memory[n] = count(n - 1, memory) + count(n - 2, memory);
}
int fib(int n){
    int memory[31] = {0};
    return count(n, memory);
}