#include <iostream>
#include <deque>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        deque<long long> dq;
        for(int i = 0; i < N; i++){
            long long num;
            cin >> num;
            dq.push_back(num);
        }
        
        int turn = 1;
        int lastPlayer = -1;
        while(dq.size() > 1){
            if(turn == 1){
                long long top = dq.front();
                dq.pop_front();
                dq.push_back(top);
                
                if(dq.size() == 1){
                    lastPlayer = 1;
                    break;
                }
                dq.pop_front();
                lastPlayer = 1;
            } else {
                long long num1 = dq.front();
                dq.pop_front();
                dq.push_back(num1);
                
                if(dq.size() == 1){
                    lastPlayer = 0;
                    break;
                }
                long long num2 = dq.front();
                dq.pop_front();
                dq.push_back(num2);
                
                if(dq.size() == 1){
                    lastPlayer = 0;
                    break;
                }
                dq.pop_front();
                lastPlayer = 0;
            }
            turn = 1 - turn;
        }
        
        cout << lastPlayer << " " << dq.front() << "\n";
    }
    return 0;
}
