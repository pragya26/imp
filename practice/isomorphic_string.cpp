#include<iostream>
#include<string>
#include<map>
using namespace std;
bool isIsomorphic(string s, string t){
        map<char,char> mapper;
        map<char,char> revmapper;
        char charval;
        char charvalr;
        for(int i=0;i<s.length();i++){
            charval = s.at(i);
            charvalr = t.at(i);
            map<char,char>::iterator it1 = mapper.find(charval);
            map<char,char>::iterator it2 = revmapper.find(charvalr);
            if(it1!=mapper.end()){
                if(it1->second!=t.at(i))
                    return false;
            }
            else if(it2==revmapper.end()){
                    mapper[charval] = t.at(i);
                    revmapper[charvalr]=1;
            }
            else{
                return false;
                }
        }
        return true;
    }
    int main(){
    string str1="aa";
    string str2="ab";
    bool a=isIsomorphic(str1,str2);
    cout<<a;
    }
