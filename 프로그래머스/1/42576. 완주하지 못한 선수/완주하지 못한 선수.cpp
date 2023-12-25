#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> m;
    for (auto elem : participant) {
        if (m.find(elem) == m.end()) {
            m.insert(make_pair(elem, 1));
        } else {
            m[elem]++;
        }
    }

    for (auto elem : completion) {
        m[elem]--;
    }

    // for (auto i = m.begin(); i != m.end(); i++) {
    //     if (i->second != 0) { return i->first;}
    // }
    
    for (auto e : m) {
        if (e.second != 0) { return e.first;}
    }
    
    string answer = "";
    return answer;
}