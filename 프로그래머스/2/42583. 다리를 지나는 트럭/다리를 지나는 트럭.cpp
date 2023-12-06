//어려웠다. 다시 풀어보기.

#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    
    int answer = 0;
    queue <int> bridge;
    int p = 0;
    int weight_total = 0;
    
    while (p <= truck_weights.size() || !bridge.empty()) {
        
        if (p == truck_weights.size()) { //마지막 트럭 넣고 나면 while 빠져나올 수가 없음
            answer += bridge_length;
            break;
        }
        
        if (bridge.size() == bridge_length) { //pop
            weight_total -= bridge.front();
            //cout << "pop " << bridge.front() << "\n";
            bridge.pop();
        }
        if(bridge.size() < bridge_length && weight_total + truck_weights[p] <= weight) { //push
            //cout << "push " << truck_weights[p] << "\n";
            weight_total += truck_weights[p];
            bridge.push(truck_weights[p]);
            p++;
            
        } else {
            //cout << "push 0" << "\n";
            bridge.push(0);
        }
        
        
        
        answer++;
        
        //cout << "t " << answer << "\n";
    
    }
    return answer;
}