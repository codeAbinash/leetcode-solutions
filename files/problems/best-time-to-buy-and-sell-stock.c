int maxProfit(int* prices, int pricesSize) {
    int min = prices[0], profit = 0, max = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min) 
            min = prices[i];
        profit = prices[i] - min;
        if (max < profit)
             max = profit;
    }
    return max;
}