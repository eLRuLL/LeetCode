#include <iostream>
#include <string.h>

using namespace std;

char *strStr(char *haystack, char *needle) {
        if(!haystack){
            return NULL;
        }
        if(!needle){
            return NULL;
        }
        
        int h_size = strlen(haystack);
        int n_size = strlen(needle);
        
        if(h_size==0){
            if(n_size==0){
                return haystack;
            }else{
                return NULL;
            }
        }
        if(n_size==0){
            return haystack;
        }
        
       int i=0;
       int j=0;
       bool flag;
       while(i<strlen(haystack)){
           flag = false;
           if(needle[0]==haystack[i]){
            flag=true;
               j=i+1;
               for(int k=1;k<strlen(needle);k++){
                   if(j<strlen(haystack)){
                       if(needle[k]!=haystack[j]){
                           flag = false;
                           break;
                       }
                       flag = true;
                       j++;
                   }else{
                       flag =false;
                       break;
                   }                   
               }

           }
           if(flag){
               return haystack+i;
           }
           i++;
       }

       return NULL;
    }



    int main(){
      char* value =strStr("aaa","aaaa");
      if(value==NULL){
        cout<<"WTFF!!"<<endl;
      }
      cout<<"-->"<<value<<"<--"<<endl;
      return 0;
    }