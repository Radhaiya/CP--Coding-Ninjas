int makeBeautiful(string str) {
	int case1 = 0, case2=0;
    
    for(int i=0;i<str.size();i++){
        if(i%2==0){
            if(str[i]!='0')
                case1++;
            
         }
        if(i%2!=0){
            if(str[i]!='1')
                case1++;
            
        }
    }
    
    for(int i=0;i<str.size();i++){
        if(i%2==0){
            if(str[i]!='1')
                case2++;
            
         }
        if(i%2!=0){
            if(str[i]!='0')
                case2++;
            
        }
    }
    return min(case1 , case2);
    }