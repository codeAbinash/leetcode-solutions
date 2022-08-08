int isPerfectSquare(int num){
    int high = num / 2 + 1;
    int low = 0;
    int mid, square;

    while(low <= high){
        mid = low + (high - low) / 2;
        square = mid * mid;
        if(square == num)
            return 1;
        else if(square > num)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}