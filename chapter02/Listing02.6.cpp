#include<iostream>


int stonetolb(int); //함수 원형 
int main(){
    using namespace std;
    int stone;
    cout<<"체중을 소톤 단위로 입력하자:"<<endl;
    cin>>stone;
    int pounds=stonetolb(stone);// fucniton 전달
    cout<<stone<<"소톤은: "<<pounds<<"파운드입니다."<<endl;    
    return 0;
}

int stonetolb(int sts){
    return 14*sts;
}


