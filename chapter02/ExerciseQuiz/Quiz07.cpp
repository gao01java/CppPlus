#include<iostream>


using namespace std;
void HourMin(int hour,int min);
int main(){
    int min,hour;
    cout<<"시간 값을 입력해줘";
    cin>>hour;
    cout<<"분 값을 입력해줘";
    cin>>min;

    HourMin(hour,min);
   
   return 0;

}
void HourMin(int h,int m){
    cout<<"시각:"<<h<<":"<<m;
}