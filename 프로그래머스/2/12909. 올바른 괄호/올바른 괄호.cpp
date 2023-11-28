#include<string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int open_cnt = 0;
    int close_cnt = 0;
    vector <int> v;
    
    // if (s[0] == ')' || s[s.length()-1] == '(' || s.length() % 2 != 0) {
    //     answer = false;
    //     cout << "1";
    //     return answer;
    // } 
    
   for (int i = 0; i < s.length(); i ++) {
       if (s[i] == '(') {
           open_cnt++;
           v.push_back(1);
           //cout << s << "\n";
       } else {
           close_cnt++;
           if (v.empty() != 1) {
                v.pop_back();
            } else {
               return false;
           }
           //cout << s << "\n";
       }
    }
    
    if (v.empty() == 0 || open_cnt - close_cnt != 0){
        cout << "2 " << open_cnt << " " << close_cnt;
        answer = false;
    } 


    
    return answer;
}