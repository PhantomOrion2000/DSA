void solve(string str, int index, vector<string>& ans, string output) {
	if(index >= str.length()) {
		if(output.length() > 0){
			ans.push_back(output);
		}
		return;
	}
	
	solve(str, index + 1, ans, output);
	
	output.push_back(str[index]);
	solve(str, index + 1, ans, output);
}
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	string output = "";
	solve(str, 0, ans, output);
	return ans;
}
