int maxProfit(int* prices, int pricesSize) {
    int min=prices[0];
    int max=0;
    for(int i=1;i<pricesSize;i++)
    {
        if(min<prices[i])
        {
            if(max<(prices[i]-min))
            {
                max=prices[i]-min;
            }
        }
        else
        {
            min=prices[i];
        }
    }
    return max;
}