#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//NAME : Athanasios Bubulinis
//ID: 114801485
//Lab 8 Part 2

int my_strcmp(char str1[], char str2[]){  //returns int, takes char[] inputs
    int output = 1, i = 0;                  //sets output to false and i to 0
    if(strlen(str1)==strlen(str2)){         //compares string lengths
        output = 0;                         //if theyre the same, output gets used as counter
        while(i<strlen(str1)){              //i acts as counter
            if(str1[i]==str2[i])            //if index equal
            {   output++;   }               //adds 1 to output for each equal index
        i++;                                //adds 1 to i
        }
        if(output==strlen(str1)){   output = 0; }//if output = length of both strings then they are equal
        else{   output = 1; }                   //else output is 1
    }
    return(output);                             //returns output
}

int my_strncmp(char str1[], char str2[], int en){  //returns int, takes char[] inputs
    int output = 0, i = 0;        //sets output to false and i to 0
        while(i<en){              //i acts as counter
            if(str1[i]==str2[i])  //if index equal
            {   output++;   }     //adds 1 to output for each equal index
            i++;}                  //adds 1 to i
        if(output==en){   output = 0; }//if output = n then they are equal
        else{   output = 1; }                   //else output is 1
        return(output);                         //returns output
    } 

char * my_strcpy(char str1[], char str2[]){  //returns int, takes char[] inputs
    unsigned long int output = *str1, i = 0;        //sets output to false and i to 0
    while(i<(strlen(str2)+1)){              //i acts as counter
        str1[i]=str2[i];
        i++;}                  
    printf("\n\n Strings after copy Str1 : Str2    %s : %s", str1, str2);
    return(str1);                         //returns output
} 

char * my_strcat(char str1[], char str2[]){  //returns int, takes char[] inputs
    int i = 0, length = 0; char str3[101];      //sets up i, length, and string
    while(i<(strlen(str1))){              //adds str1 to str3
        str3[i]=str1[i];
        i++;    length++;}  i = 0;   
    while(i<(strlen(str2))){              //adds str2 to str3
        str3[i+length]=str2[i];
        i++;    }
    str3[strlen(str2) + length] = '\0'; //adds string end
    printf("\n\nSecond String Attached to first %s", str3); //prints for debugging
    return(str1);                         //returns output
} 

char * my_reverse(char str1[], char str2[]){  //returns int, takes char[] inputs
    int i = 0, length = 0;
    while(i<(strlen(str1))){       //loops for length of string 1
        str1[i] = str2[strlen(str1)-i-2];   //changes positions accordingly to reverse string
        i++;
    }                         //returns output
    str1[i-1] = '\0';           //ends string
    printf("\n\nStr2 Reversed : %s", str1); //pritns reversed string
}

int main(){     //main FUNCTION
    char inp1[51], inp2[51]; int n = 0; //character input
    while(1){                           //loop forever
        printf("\n\n\nInsert a string 1 : ");    scanf(" %s",&inp1);  //recieves input
        printf("Insert a string 2 : ");    scanf(" %s",&inp2);  //recieves input
        printf("Insert an n value(comparing first n values) : ");    scanf(" %d",&n);  //recieves input
        if(my_strcmp(inp1, inp2)==0){   printf("\nStrings are EQUAL");  }    //checks if strings are equal(0)
        else{printf("\nStrings are NOT equal");}                             //not equal (1)
        if(my_strncmp(inp1, inp2, n)==0){   printf("\nFirst n values of Strings are EQUAL");  }    //checks if strings are equal(0)
        else{printf("\nFirst n values of Strings are NOT equal");}                             //not equal (1)
        printf("\nSecond string attached to the first string %p", my_strcat(inp1, inp2));
        printf("\nStr2 has been reversed and put into str1 %p", my_reverse(inp1, inp2));
        printf("\nThe starting address of the first str1(Str1 copied to Str2) %p", (my_strcpy(inp1, inp2)));
    }
}