#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    vector<int> s(prices.size());
    vector<int> d(prices.size()-1);
    
//     for(int i = ; i < d.size(); i++) {
//         d[i] = prices[i+1] - prices[i];
//         //cout << d[i] << "\n";
// }
    
    for (int i = 0; i < prices.size()-1; i++) {
          for (int j = i+1; j < prices.size(); j++) {
                  if ((prices[i] <= prices[j] && prices[i] <= prices[j-1]) || (prices[i] > prices[j] && prices[i] <= prices[j-1])) {
                      answer[i]++;
                  } else {
                      break;
                  }
          }
    }
    
    
    return answer;
}