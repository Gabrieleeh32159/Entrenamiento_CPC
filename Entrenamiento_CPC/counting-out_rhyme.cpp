#include <iostream>
#include <vector>
#include <string>
#include <list>
#define LL long long

using namespace std;

void print_list(list<LL int>* childs) {
    for (auto it = childs->begin(); it != childs->end(); it++) {
        cout << *it << ' ';
    }
    cout << endl;
}

int main() {
    int n, k; cin >> n >> k;
    list<LL int>* childs = new list<LL int>();
    for (int i = 1; i < n + 1; i++) {
        childs->emplace_back(i);
    }


    LL int a;
    auto leader = childs->begin();
    while(k--) {
        cout << endl << "--------------------------" << endl;
        cin >> a;
        cout << "List: "; print_list(childs);
        cout << "Leader: " << *leader << endl;
        cout << "Resto: " << a%childs->size() << endl;
        cout << "Eliminado: " << *next(leader, a%childs->size() + int(distance(childs->begin(), leader) + a%childs->size() > childs->size())) << endl;
        cout << int(distance(childs->begin(), leader) + a%childs->size() > childs->size()) << endl;
        childs->remove(*next(leader, a%childs->size() + int(distance(childs->begin(), leader) + a%childs->size() > childs->size())));
        cout << "New List: "; print_list(childs);
        leader = next(leader, a%(childs->size() + 1 ) +  int(distance(childs->begin(), leader) + a%childs->size() > childs->size()));
        cout << "New Leader: " << *leader << endl;
    }
    return 0;
}