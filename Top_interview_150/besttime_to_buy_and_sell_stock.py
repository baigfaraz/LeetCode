def best_time_to_buy_and_sell_stock(prices):
    profit = 0

    for i in range(1, len(prices)):
        if prices[i] > prices[i - 1]:
            profit += prices[i] - prices[i - 1]
    
    return profit

prices = [7, 1, 5, 3, 6, 4]


print(best_time_to_buy_and_sell_stock(prices)) 

