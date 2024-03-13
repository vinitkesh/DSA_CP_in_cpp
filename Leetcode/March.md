# March 13 : 

## Leetcode 22. Generate Parentheses

Pattern : 

1. Valid paranthesis
2. Building valid paranthesis

Rule : Make sure all the paranthesis that have opened gers closed
Make 


```cpp

class Solution {
public:

    void f(string str, vector<string> &ptr_ans,int open, int close){
        if(open == close && close == 0){
            (ptr_ans).push_back(str);
            return ;
        }
        if(open!=0 ){
            string str1 = str +"(";
            cout<<str1<<endl;
            f(str1,ptr_ans,open-1,close);
        }
        if(close!=0 && close > open ){
            string str2 = str + ")";
            cout<<str2<<endl;
            f(str2,ptr_ans,open,close-1);
        }

        return ;
    }

    vector<string> generateParenthesis(int n) {
        string str ="(";
        vector<string> ptr_ans;
        f(str,ptr_ans,n-1,n);
        return ptr_ans;
    }
};
'''
