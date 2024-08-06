#include <iostream>
#include <map>
#include <vector>
#include <limits>
using namespace std;

class StockPrice
{
private:
    map<int, int> priceRecords;

public:
    StockPrice() {}

    void update(int timestamp, int price)
    {
        priceRecords[timestamp] = price;
    }

    int current()
    {
        return priceRecords.rbegin()->second;
    }

    int maximum()
    {
        int max = std::numeric_limits<int>::min();
        for (const auto &pair : priceRecords)
        {
            if (pair.second > max)
            {
                max = pair.second;
            }
        }
        return max;
    }

    int minimum()
    {
        int min = std::numeric_limits<int>::max();
        for (const auto &pair : priceRecords)
        {
            if (pair.second < min)
            {
                min = pair.second;
            }
        }
        return min;
    }

    void processCommands(const vector<string> &commands, const vector<vector<int>> &arguments)
    {
        
        for (int i = 0; i < commands.size(); i++)
        {
            if (commands[i] == "update")
            {
                update(arguments[i][0], arguments[i][1]);
            }
            else if (commands[i] == "current")
            {
                current();
            }
            else if (commands[i] == "maximum")
            {
                maximum();
            }
            else if (commands[i] == "minimum")
            {
                minimum();
            }
        }
    }
};

int main()
{
    StockPrice stockPrice;
    vector<string> entry = {"StockPrice", "update", "update", "current", "maximum", "update", "maximum", "update", "minimum"};
    vector<vector<int>> argument = {{}, {1, 10}, {2, 5}, {}, {}, {1, 3}, {}, {4, 2}, {}};

    stockPrice.processCommands(entry, argument);

    return 0;
}
