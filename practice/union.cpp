#include <iostream>
#include <vector>
using namespace std;

    vector<int> unionofarrays(vector<int> &num1, vector<int> &num2)
    {
        int n1 = num1.size();
        int n2 = num2.size();
        int i = 0;
        int j = 0;
        vector<int> ans;
        
        while (i < n1)
        {
            if (num1[i] < num2[j])
            {
                if (ans.size() == 0 || ans.back() != num1[i])
                {
                    ans.push_back(num1[i]);
                }
                i++;
            }
            cout<<"in while1";
        }
        while (j < n2)
        {
            if (num1[i] > num2[j])
            {
                if (ans.size() == 0 || ans.back() != num2[j])
                {
                    ans.push_back(num2[j]);
                }
                j++;
            }
            cout<<"in while2";
        }
        while (i < n1 && j < n2)
        {
            if (num1[i] < num2[j])
            {
                if (ans.size() == 0 || ans.back() != num1[i])
                {
                    ans.push_back(num1[i]);
                }
                i++;
            }
            if (num1[i] > num2[j])
            {
                if (ans.size() == 0 || ans.back() != num2[j])
                {
                    ans.push_back(num2[j]);
                }
                j++;
            }
            cout<<"in while3";
        }
        return ans;
    }

int main()
{
    vector<int>a={2,4,5,6};
    vector<int>b={1,3,4,5,6,7};

    vector<int>finalans=unionofarrays(a,b);
    cout<<"sorted array is";
    for(int i:finalans){
        cout<<i<<" ";
    return 0;
}
}
