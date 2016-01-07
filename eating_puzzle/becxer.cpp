#include <iostream>                                                             
                                                                                
int ruby[22];                                                                   
int map[22][100000];                                                            
using namespace std;                                                            
int main(void){                                                                 
    int limit, n,sum;                                                           
    cin >> limit >> n;                                                          
    sum = 0;                                                                    
    for(int i = 0 ; i < n ; i++){                                               
         cin >> ruby[i];                                                        
         sum += ruby[i];                                                        
         map[i][ruby[i]] += 1;                                                  
         for(int r = 0; r <= limit; r++){                                       
            if( i-1 >= 0 && map[i-1][r] >= 1){                                  
                map[i][r] += map[i-1][r];                                       
                map[i][r+ruby[i]] += map[i-1][r];                               
            }                                                                   
         }                                                                      
    }                                                                           
                                                                                
    for(int k = limit; k >= 0 ; k--){                                           
        if(map[n-1][k] > 0){                                                    
            cout << k << endl;                                                  
            break;                                                              
        }                                                                       
    }                                                                           
    return 0;                                                                   
} 
