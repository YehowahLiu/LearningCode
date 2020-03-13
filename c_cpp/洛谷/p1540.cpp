#include <iostream>
#include <queue>
using namespace std;

int m, word, res = 0;
queue<int> cache;
int inc[1010] = {0};

int main(){
    cin >> m >> word;
    while(cin>>word){
        if (inc[word]==0){
            cache.push(word);
            inc[word]=1;
            res++;
        }
        if (cache.size() > m){
            inc[cache.front()]=0;
            // 队列.front()代表最早被放进来的元素
            cache.pop();
        }
    }
    cout << res;
    return 0;
}