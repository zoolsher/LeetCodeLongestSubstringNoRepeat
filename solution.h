#ifndef ___SOLUTION
#define ___SOLUTION
#include <cstring>
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

class Solution{
    public:
    int lengthOfLongestSubstring(string s){
        if(!s.length()){
            return 0;
        }
        int startIndex = 0;
        int endIndex = 0;
        int max = 0;
        while(true){
            cout<<startIndex<<s[startIndex]<<" "<<endIndex<<s[endIndex]<<endl;
            for(int i = startIndex;i<endIndex;i++){
                if(s[i]==s[endIndex]){
                    startIndex = i+1;
                    break;
                }
            }
            max = max>endIndex-startIndex+1?max:endIndex-startIndex+1;
            endIndex++;
            if(endIndex>=s.length()){
                break;
            }
        }
        return max;
    }
};

#endif
