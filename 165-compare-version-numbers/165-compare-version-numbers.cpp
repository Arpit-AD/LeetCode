class Solution {
public:
    int compareVersion(string a, string b) {
        
        int alen=a.size(), blen=b.size();
        int i=0,j=0;
        
		/*
		Essentially the below given loop is checking number b/w dots
		*/
        while(i<alen && j<blen){
            string atemp="",btemp="";
            while(a[i]!='.' && b[j]!='.'  && i<alen && j<blen){
                
                atemp+=a[i];
                btemp+=b[j];
                i++;
                j++;
            }
            while(a[i]!='.'  && i<alen){
                
                atemp+=a[i];
              
                i++;
               
            }
            while(b[j]!='.' && j<blen){
                
                btemp+=b[j];
                j++;
            }
            
            int aTempLen=stoi(atemp), bTempLen=stoi(btemp);
            
            if(aTempLen>bTempLen) return 1;
            
            else if(aTempLen< bTempLen) return -1;
            else{
                i++;
                j++;
            }
     }  
	 
       /*
	   for cases like :
		-   "1.001"  "1"
		-   "1" "1.000.001" 
		  
		   below given loops are needed
	   */
        while(i<alen){
            if(a[i]!='.' && a[i]!='0'){
               
                return 1;
            }
            i++;
        }
        while(j<blen){
             if(b[j]!='.' &&  b[j]!='0'){
                return -1;
            }
            j++;
        }
      
    
        return 0;
    
    }
};