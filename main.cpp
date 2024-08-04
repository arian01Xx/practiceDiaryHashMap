#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"
#include "solutionThree.hpp"
#include "solutionFour.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<string> names={"Mary","John","Emma"};
	vector<int> heights={180,165,170};
	vector<string> firstOutput=solution.sortPeople(names,heights);
	cout<<"ANSWER ONE= "<<endl;
	for(int i=0; i<firstOutput.size(); i++){
		cout<<firstOutput[i]<<endl;
	}

	SolutionOne solution1;
	string key="the quick brown fox jumps over the lazy dog";
	string message="vkbs bs t suepuv";
	string OneOutput=solution1.decodeMessage(key,message);
	cout<<"ANSWER TWO= "<<OneOutput<<endl;

	SolutionTwo solution2;
	vector<int> nums={4,5,6,7,8,9};
	int diff=2;
	int outputTwo=solution2.arithmeticTriples(nums, diff);
	cout<<"ANSWER THREE= "<<outputTwo<<endl;

	SolutionThree solution3;
	vector<int> numsTwo={1,2,2,1};
	int k=1;
	int outputThree=solution3.countKDifference(numsTwo, k);
	cout<<"ANSWER FOUR= "<<outputThree<<endl;

	vector<string> operations = {"OrderedStream", "insert", "insert", "insert", "insert", "insert"};
    vector<vector<string>> values = {{ "5" }, { "3", "ccccc" }, { "1", "aaaaa" }, { "2", "bbbbb" }, { "5", "eeeee" }, { "4", "ddddd" }};
    Orderedstream* os=nullptr;
    vector<vector<string>> output;

    //IMPORTANTE!!!!!!!!!!!!!!!!!!!!!!!!!!!
    for(int i=0; i<operations.size(); ++i){
    	if(operations[i]=="Orderedstream"){
    		int n=stoi(values[i][0]);
    		os=new Orderedstream(n);
    		output.push_back({"null"});
    	}else if(operations[i]=="insert"){
    		int idKey=stoi(values[i][0]);
    		string value=values[i][1]; //nueva forma de mapear sin unordered_map
    		vector<string> result=os->insert(idKey,value); //primer elemento, segundo elemento
    		output.push_back(result);
    	}
    }

    cout<<"[";
    for(int i=0; i<output.size(); ++i){
    	cout<<"[";
    	for(int j=0; j<output[i].size(); ++j){
    		cout<<"\""<<output[i][j]<<"\"";
    		if(j<output[i].size()-1){
    			cout<<", ";
    		}
    	}
    	cout<<"]";
    	if(i<output.size()-1){
    		cout<<", ";
    	}
    }
    cout<<"]"<<endl;

    delete os; //liberar memoria

	return 0;
}
