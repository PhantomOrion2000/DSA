bool isValidParenthesis(string str)
{
    // Write your code here.
    stack<char> s;
    for(int i = 0; i <str.length(); i++){
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }else{
            if(s.empty()){
                return false;
            }else if (ch == ')' && s.top() == '('){
                s.pop();
            }else if (ch == '}' && s.top() == '{'){
                s.pop();
            }else if (ch == ']' && s.top() == '['){
                s.pop();
            }else{
                return false;
            }
        }
    }
    return s.empty();
}
