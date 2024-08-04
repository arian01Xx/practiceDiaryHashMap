#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <algorithm>

using namespace std;

class SolutionOne{
public:
	string decodeMessage(string key, string message){
		unordered_map<char,char> decipher;
		unordered_set<char> seen;
		char currentChar='a';
		for(char c: key){
			if(c != ' ' && seen.find(c)==seen.end()){
				decipher[c]=currentChar++;
				seen.insert(c);
			}
		}
		string output;
		for(char c: message){
			if(c==' '){
				output.push_back(c);
			}else{
				output.push_back(decipher[c]);
			}
		}
		return output;
	}
};

#endif // SOLUTION_ONE_HPP