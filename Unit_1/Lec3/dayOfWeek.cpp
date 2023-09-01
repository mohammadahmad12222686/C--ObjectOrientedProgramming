// You are using GCC
#include<iostream>
using namespace std;
class dayOfWeek{
    public:
  int key;
  string sun="Sunday";
  string mon="Monday";
  string tue="Tuesday";
  string wed="Wednesday";
  string thu="Thursday";
  string fri="Friday";
  string sat="Saturday";
  string inv="Invalid";
  string wee="Weekend";
  
  void get(){
      cin>>key;
  }
  
  string days(){
      if(key==0){
          return wee;
      }
      if(key==1){
          return sun;
      }
      if(key==2){

         
          return mon;
      }
      if(key==3){
          return tue;
      }
      
    if(key==4){
        return wed;
    }
    if(key==5){
        return thu;
    }
    if(key==6){
        return fri;
    }
    if(key==7){
        return sat;
    }
    if(key<0 || key>7){
        return inv;
    }
                      
             
  }

     
};
int main(){
    dayOfWeek day;
    day.get();
    cout<<day.days();
}
  
