// by @codeAbinash

int gcd(int a,int b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int findGCD(int* nums, int numsSize) {
    int min = nums[0], max = nums[0];
    int i;
    for(i = 0; i < numsSize; i++){
        if(min < nums[i]) min = nums[i];
        else if(max > nums[i]) max = nums[i];
    }
    return gcd(min,max);
}