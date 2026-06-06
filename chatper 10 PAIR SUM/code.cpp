#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSUm(vector<int> nums, int target)
{

    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i <= n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main()
{

    vector<int> nums = {1, 3, 4, 5, 6, 7, 9};
    int target;
    cout << "enter the targeted value "<< " ";
    cin >> target;

    vector<int> ans = PairSUm(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;

    return 0;
}