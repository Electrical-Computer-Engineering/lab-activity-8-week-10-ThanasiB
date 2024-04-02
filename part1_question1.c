#include <stdio.h>

int my_isalpha(char thischar){  //returns int, takes char input
    if((thischar>='a'&&thischar<='z')||(thischar>='A'&&thischar<='Z')){ return(1);  }   //if a to z or A to Z, return 1
    else{   return(0);  }                                                               //else return 0
}

int my_isdigit(char thischar){  //returns int, takes char input
    if(thischar>='0'&&thischar<='9'){ return(1);  }   //if 0 to 9 return 1
    else{   return(0);  }                             //else return 0
}

int my_isupper(char thischar){  //returns int, takes char input
    if(thischar>='A'&&thischar<='Z'){ return(1);  }   //if A to Z return 1
    else{   return(0);  }                             //else return 0
}

char my_to_upper(char thischar){ //returns char, takes char input
    if(thischar>='a'&&thischar<='z'){   return(thischar-32);  }     //subtracts ascii value to equate to upper
    else{   return(thischar);}                                      //else returns value
}

char my_to_lower(char thischar){ //returns char, takes char input
    if(thischar>='A'&&thischar<='Z'){   return(thischar+32);  }     //subtracts ascii value to equate to lower
    else{   return(thischar);}                                      //else returns value
}

int main(){     //main FUNCTION
    char ch;            //character input
    while(1){           //loop forever
        printf("\n\nInsert a character : ");    scanf(" %c",&ch); //recieves input
        if(my_isalpha(ch)==1){printf("It's a LETTER");}     //1 if ANY LETTER
        else{printf("It's NOT a letter");}                  //0 if NOT LETTER
        if(my_isdigit(ch)==1){printf("\nIt's a DIGIT");}    //1 if ANY DIGIT
        else{printf("\nIt's NOT a digit");}                 //0 if NOT DIGIT
        if(my_isupper(ch)==1){printf("\nIt's a UPPER");}    //1 if ANY UPPER
        else{printf("\nIt's NOT a upper");}                 //0 if NOT UPPER
        printf("\nCharacter in upper case : %c", (my_to_upper(ch)));  //UPPER of ANY LOWER
        printf("\nCharacter in lower case : %c", (my_to_lower(ch)));  //LOWER of ANY UPPER
    }
}
