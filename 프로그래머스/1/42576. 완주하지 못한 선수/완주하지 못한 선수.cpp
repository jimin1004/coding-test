#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> m;
    for (int i = 0; i < participant.size(); i++) {
        if (m.find(participant[i]) == m.end()) {
            m.insert(make_pair(participant[i], 1));
        } else {
            m[participant[i]]++;
        }
    }

    for (int i = 0; i < completion.size(); i++) {
        m[completion[i]]--;
    }
    
    // for (auto i = m.begin(); i != m.end(); i++) {
    //     cout << i->first << " " << i->second << "\n";
    // }

    for (auto i = m.begin(); i != m.end(); i++) {
        if (i->second != 0) { return i->first;}
    }
    
    string answer = "";
    return answer;
}