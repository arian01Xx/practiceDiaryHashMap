#ifndef SOLUTION_FOUR_HPP
#define SOLUTION_FOUR_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

class SolutionThree{
public:
	int countKDifference(vector<int>& numsTwo, int k){
		int n=numsTwo.size();
		int cnt=0;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				int answer=abs(numsTwo[i]-numsTwo[j]);
				if(answer==k){
					cnt++;
				}
			}
		}
		return cnt;
	}
};

#endif // SOLUTION_FOUR_HPP