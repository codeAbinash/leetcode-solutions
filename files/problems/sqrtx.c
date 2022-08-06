int mySqrt(int x){
    int low = 0;
    int high = x/2 + 1;
    long mid,square;

    while (low <= high){
        mid = low + (high - low) / 2;
        square = mid * mid;
    
        if(square == x)
            return mid;
        else if(square > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return high;
}