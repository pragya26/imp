#include<iostream>
#include<string>
using namespace std;
bool isAnagram(string s, string t) {
        int CHAR[26]={0};
        char c;
        for(int i=0;i<s.length();i++){
            c=s.at(i);
            CHAR[c-'a']++;
            //cout<<CHAR[c-'a']<<endl;
        }
        char d;
        for(int i=0;i<t.length();i++){
            d=t.at(i);
            CHAR[d-'a']--;
            //cout<<CHAR[d-'a']<<endl;
        }
        for(int i=0;i<26;i++){
            if(CHAR[i]!=0)
                return false;
        }
        return true;

    }
    int main()
    {
    string s = "a";
    string t = "a";
    bool ans = isAnagram(s,t);
    cout<<ans<<endl;
    return 0;
    }
