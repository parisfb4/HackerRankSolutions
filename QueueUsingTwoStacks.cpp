#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void enqueue(vector<int>* first,int x);
void dequeue(vector<int>* first, vector<int>* second);
void print(vector<int>* first, vector<int>* second);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int q, type, x;
    cin >> q;
    vector<int> first, second;
    for (int i = 0; i < q; i++) {
        cin >> type;
        switch (type) {
        case 1:
            cin >> x;
            enqueue(&first, x);
            break;
        case 2:
            dequeue(&first, &second);
        break;
        case 3:
            print(&first, &second);
        break;
        default:
        break;
        }
    }  
    return 0;
}

void enqueue(vector<int>* first,int x){
    first->push_back(x);
}

void dequeue(vector<int>* first, vector<int>* second){
    if (second->size() == 0) {
        while (first->size() != 0) {
            second->push_back(first->back());
            first->pop_back();
        }
    }
    second->pop_back();
}

void print(vector<int>* first, vector<int>* second){
    if (second->size() == 0) {
        while (first->size() != 0) {
            second->push_back(first->back());
            first->pop_back();
        }
    }
    cout << second->back() << endl;
}
