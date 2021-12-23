#include <stdio.h>
int main (){
            enum company{Google,Facebook, Xerox ,Microsoft ,Ebay};
           
            enum company xerox = Xerox;
            enum company google = Google;
            enum company ebay = Ebay;

           printf("The value of xerox is: %d \n ", xerox);
           printf("The value of google is: %d \n ", google);
           printf("The value of ebay is: %d \n ", ebay);
    
    return 0;

}