#include<iostream>

using namespace std;
void user1();
void user2();
int main(){
    user1();
    user1();
    user2();
    user2();
    return 0;

}
void user1(){
    cout<<"Three blind mice"<<endl;
}
void user2(){
    cout<<"See How they run"<<endl;
}