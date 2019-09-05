#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
	string answer = "";
	string token = "";

	vector<int> v;

	for (stringstream sts(s); (sts >> token);)//문자열을 토큰으로 잘라서 
		v.push_back(stoi(token));

	sort(v.begin(), v.end());

	answer = to_string(v.front()) + " " + to_string(v.back());

	return answer;
}
