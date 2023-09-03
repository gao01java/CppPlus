#include<iostream>

int main(){
    using namespace std;
    
    int carrots; //정수변수를 선언한다.
    
    carrots=25; //변수 값을 대입한다.
    cout<<"나는 당근을"<<carrots<<"개 가지고 있다"<<endl;   //변수값을 출력한다.
    carrots =carrots-1; //변수값을 변경한다.
    cout<<"나는 방금 당근을 하나 먹었다 그래서 지금 당근은"<<carrots<<"가지고 있다 아사아사 겁나 맛이다"<<endl; //변경된 변수 값을 출력한다.
    return 0; //프로그램 종류
}