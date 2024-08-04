#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

class SolutionTwo{
public:
	int arithmeticTriples(vector<int>& nums, int diff){
		int n=nums.size();
		int cnt=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				for(int k=j+1; k<n; k++){
					if(nums[k]-nums[j]==diff && nums[j]-nums[i]==diff){
						cnt++;
					}
				}
			}
		}
		return cnt;
	}
};

#endif // SOLUTION_THREE_HPP