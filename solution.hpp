#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution{
public:
	vector<string> sortPeople(vector<string>& names, vector<int>& heights){
		int n=names.size();
		unordered_map<int,string> mapping;
		for(int i=0; i<n; ++i){
			mapping[heights[i]]=names[i];
		}
		sort(heights.rbegin(), heights.rend());
		for(int i=0; i<n; i++){
			names[i]=mapping[heights[i]];
		}
		return names;
	}
};

#endif // SOLUTION_HPP