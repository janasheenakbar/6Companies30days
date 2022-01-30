class Solution {
public:
    bool winnerOfGame(string colors) {
        
        int n=colors.size();
        int ali=0,bob=0;
        int curr=0;
        
        if(colors[0]=='A') curr++;
        
        for(int i=1;i<n;i++){
            
            if(colors[i]=='A' ){
                if(colors[i-1]=='A')
                curr++;
                else
                    curr=1;
            }
            
            else{
                if(curr>2){
                    ali+=curr-2;
                    curr=0;
                }
            }
            
        }
        
        if(curr>2){
                    ali+=curr-2;
            
                }
        curr=0;
        
        if(colors[0]=='B') curr++;
        
        for(int i=1;i<n;i++){
            
            if(colors[i]=='B' ){
                if(colors[i-1]=='B')
                curr++;
                else
                    curr=1;
            }
            
            else{
                if(curr>2){
                    bob+=curr-2;
                    curr=0;
                }
            }
            
        }
        if(curr>2){
                    bob+=curr-2;
                  
                }
        
        //cout<<ali<<" "<<bob;
        
        if(ali>bob) return true;
        
        return false;
        
        
    }
};
