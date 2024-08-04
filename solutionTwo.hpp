#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

class Orderedstream{
public:
	string v[1000];
	int curr=0;

	Orderedstream(int n){

	}

	vector<string> insert(int idKey, string value){
		v[idKey-1]=value;
		vector<string> ans;
		while(v[curr] != ""){
			ans.push_back(v[curr]);
			curr++;
		}
		return ans;
	}

};

#endif // SOLUTION_TWO_HPP