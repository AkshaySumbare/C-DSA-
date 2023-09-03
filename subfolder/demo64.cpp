#include<iostream>
#include<map>
#include<string>
using namespace std;

//***********Use of Maps in C++************
int main(){
    map<string, int> marksMap;
    marksMap["Akshay"]=55;
    marksMap["RAMA"]=100;
    marksMap["KRISHNA"]=100;
    marksMap["VASUDEVA"]=100;

    map<string, int> ::iterator iter;
    for(iter=marksMap.begin(); iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n" ; 
 }  //Here begin., iter are the functions in map so we can also see type of map function 
    // website same website as mentioned in previous ie. cpp refrences 
    return 0;
}