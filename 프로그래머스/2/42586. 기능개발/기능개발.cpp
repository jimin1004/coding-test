#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    
    int count = 0;
    vector<int> answer;

    while(progresses.empty() != 1) {
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] += speeds[i];
        }
        while (progresses.empty() != 1 && progresses[0] >= 100) {
            count++;
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
        }
        if (count) {
            answer.push_back(count);
            count = 0;
        }
    }

    
    return answer;
}