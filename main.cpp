#include <iostream>
#include <iomanip>
#include <ostream>
#include <map>
using namespace std;

ostream &tab(ostream &ostream1){
    return cout<<"\t";
}
int main() {

    map<int,int> map1{{1,2},{3,4},{5,6}};

    map<string, int> map2{{"Mohamed",1},{"Hicham",2},{"Said",3},{"Lahsen",4}};

    map<string ,int> map3(map2.begin(),map2.end());

    for (auto const [key,value]:map1) {
        cout<<key<<":"<<value<<tab;
    }
    cout<<endl;

    for (auto const [key,value]:map2) {
        cout<<key<<":"<<value<<tab;
    }
    cout<<endl;

    for (auto const [key,value]:map3) {
        cout<<key<<":"<<value<<tab;
    }
    cout<<endl;
    return 0;
}
