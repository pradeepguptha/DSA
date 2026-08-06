
class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0 , end = s.length()-1;
        while(st <= end ){
            if (!isalnum(s[st])){
                st++;
                continue;
            }
            if (!isalnum(s[end])){
                end--;
                continue;
            }
            
            if(toupper(s[st])!=toupper(s[end])){
               
                return false ;
            }
             st++;
             end--;
        }
           
        
        return true ;
        
    }
};