#include<iostream>
#include<string>
#include<vector>

using namespace std;

class MyStrArray{

public:
    vector<string> strVector;
    int length;
    MyStrArray(string str): strVector{str}, length{1}{
   }

   string getString(){ 
      return strVector[length-1];
   }

   void pushStr(string s){
      strVector.push_back(s);
      length++;
   }
   void deleteStr(){
      strVector.pop_back();
      length--;
   }

};

int main(){

MyStrArray newArray("Jay");

int n=newArray.length;

cout<<"String Length:"<<newArray.length<<endl;

cout<<"String :"<<newArray.getString()<<endl;

cout<<"\n============add item============"<<endl;

newArray.pushStr("Ken");

cout<<"String Length:"<<newArray.length<<endl;

cout<<"String :"<<newArray.getString()<<endl;

cout<<"\n============delete last item============"<<endl;

newArray.deleteStr();

cout<<"String Length:"<<newArray.length<<endl;

cout<<"String :"<<newArray.getString()<<endl;


return 0;
}