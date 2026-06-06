#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    class Solution
    {
    public:
        int maxProfit(vector<int> &prices)
        {

            int maxProf = 0;
            int bestDay = prices[0];
            for (int i = 1; i < prices.size(); i++)
            {

                if (prices[i] > bestDay)
                {
                    maxProf = max(maxProf, prices[i] - bestDay);
                    ;
                }
                bestDay = min(bestDay, prices[i]);
            }
            return maxProf;
        }
    };
    return 0;
}