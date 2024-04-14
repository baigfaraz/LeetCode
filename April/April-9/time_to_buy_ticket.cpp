#include <iostream>
#include <vector>
using namespace std;

int timeRequiredToBuy(vector<int> tickets, int k)
{
    int iterations = tickets[k];
    int count = 0;
    for (int i = 0; i < iterations; i++)
    {
        for (int j = 0; j < tickets.size(); j++)
        {
            if (tickets[k] == 0)
            {
                return count;
            }
            if (tickets[j] > 0)
            {
                tickets[j]--;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> tickets = {2, 3, 2};
    int k = 2;
    cout << timeRequiredToBuy(tickets, k);

    return 0;
}