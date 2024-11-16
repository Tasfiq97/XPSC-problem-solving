#include <bits/stdc++.h>
using namespace std;
int main()
{
  // q - https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

class Solution{
public:

	int search(string pat, string txt) {
	    // code here
	    
	    int k=pat.size();
	    map<char,int>mp;
	    for(char x:pat){
	        mp[x]++;
	    }
	    
	    int n=txt.size();
	    int i=0;
	    int j=0;
	    int c=0;
	    int count=mp.size();
	    
	    while(j<n){
	        
	        if(mp.find(txt[j])!=mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0)
	                count--;
	        }
	        
	        if(j-i+1<k){
	            j++;
	        }
	        
	        else if(j-i+1==k){
	            if(count==0){
	                c++;
	            }
	            
	            if(mp.find(txt[i])!=mp.end()){
	                mp[txt[i]]++;
	                
	                if(mp[txt[i]]==1)
	                    count++;
	            }
	            
	            i++;
	            j++;
	        }
	        
	    }
	   
	    return c;
	}
};
    return 0;
}