#include <bits/stdc++.h>
using namespace std;

class Recursion {
  public:
    int factorial(int n) {
        if(n == 0) {
            return 1;
        }
        return n * factorial(n - 1);
    }
    int power(int num, int powr) {
        if(powr == 0) {
            return 1;
        }
        return num * power (num, powr-1);
    }
    void counting(int n) {
        if(n == 0) {
            return;
        }
        counting(n - 1);
        cout << n <<" ";
    }
    
    bool isSorted(vector<int> &arr, int n) {
        if(n == 0 || n == 1) {
            return 1;
        }
        
        if(arr[n-1] < arr[n-2]){
            return 0;
        }
        return isSorted(arr, n - 1);
        // if(arr[0] > arr[1]) return 0;
        // else return isSorted(arr.begi+1, n-1);
    }
    
    void reverseString(string &str, int i, int n) {
        if(i > n-i-1){
            return;
        }
        swap(str[i], str[n-i-1]);
        i++;
        reverseString(str, i, n);
    }
    
    int checkPalindrome(string str, int i, int j){
        if(i >= j) {
            return 1;
        }
        if(str[i] != str[j]){
            return 0;
        }
        i++;j--;
        return checkPalindrome(str,i,j);
        
    }
};

int main() {
	// your code goes here
	int n ;
	cin >> n;
	Recursion r;
// 	vector<int> arr{4 ,25, 26, 34 ,56};
// 	if(r.isSorted(arr, n)){
// 	    cout <<"Yes" <<"\n";
// 	}else{
// 	    cout << "N0" <<" \n";
// 	}
// 	cout << r.factorial(n) <<"\n";
// 	cout << r.power(n, 2) <<"\n";
    // r.counting(10);
    
    string str ="Pul0kluP";
    // r.reverseString(str, 0, str.length()-1);
    // cout << str <<"\n";
    cout << r.checkPalindrome(str, 0, str.length() -1) <<"\n";
	return 0;
}
