#include<iostream>
#include<string>
using namespace std;

int matchingstring(string haystack,string needle){

    int m = haystack.length();
    int n = needle.length();

    for(int i=0;i<=m-n;i++){
        for(int j=0;i<n;j++){
            if(haystack[i+j]!=needle[j]){
                break;
            }
            if(j==n-1){
                return i;
            } 
        }   
    }
    return -1;
}
int main(){
    string haystack="sadofsad";
    string needle = "sad";
    cout<<matchingstring(haystack,needle);
}



