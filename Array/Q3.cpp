#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int max_area = 0;

        while (left < right){
            int area = min(heights[left], heights[right]) * (right - left);
            max_area = max(area, max_area);
            
            if (heights[left] <= heights[right]){
                left++;

            }else{
                right--;
            }

        } 
        return max_area;
    }
};

int main(){
    Solution solution;

    int n;
    cout<<"enter number of pillars"<<endl;
    cin>>n;

    vector<int> heights(n);
    cout<<"enter length of pillars"<<endl;
    for(int i = 0; i < n; i++){
        cin>>heights[i];
    }
    int result = solution.maxArea(heights);
    cout<<result;

}