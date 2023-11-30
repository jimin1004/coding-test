#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<int> excuted;
    int temp = 0;
    
    while(!priorities.empty()) {
        temp = priorities[0];
        priorities.erase(priorities.begin());
        location--;
        
        //cout << "max " << *max_element(priorities.begin(), priorities.end()) << '\n';
        if (*max_element(priorities.begin(), priorities.end()) > temp) {
            priorities.push_back(temp);
            if (location < 0) {
                location = priorities.size() -1;
            }
            cout << temp << " " << location << '\n';
        } else {
            excuted.push_back(temp);
            if (location < 0) {
                answer = excuted.size();
                cout << excuted.size();
                break;
            }
            cout << temp << " " << location << "ex" << '\n';
        }
        }
    
    
    return answer;
}