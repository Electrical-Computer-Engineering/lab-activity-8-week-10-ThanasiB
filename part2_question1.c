#include <stdio.h>
#include <string.h>


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
/*
int my_strcpy(char str1[], char str2[]){  //returns int, takes char[] inputs
    unsigned long int output = *str1, i = 0;        //sets output to false and i to 0
    while(i<strlen(str2)){              //i acts as counter
        str1[i]=str2[i];
        i++;}                  
    return(output);                         //returns output
} 
*/

int main(){     //main FUNCTION
    char inp1[50], inp2[50]; int n = 0; //character input
    while(1){                           //loop forever
        printf("\n\n\nInsert a string 1 : ");    scanf(" %s",&inp1);  //recieves input
        printf("Insert a string 2 : ");    scanf(" %s",&inp2);  //recieves input
        printf("Insert an n value(comparing first n values) : ");    scanf(" %d",&n);  //recieves input
        if(my_strcmp(inp1, inp2)==0){   printf("They are EQUAL");  }    //checks if strings are equal(0)
        else{printf("They are NOT equal");}                             //not equal (1)
        if(my_strncmp(inp1, inp2, n)==0){   printf("\nFirst n are EQUAL");  }    //checks if strings are equal(0)
        else{printf("\nFirst n are NOT equal");}                             //not equal (1)
        //printf("\n %lu", (my_strcpy(inp1, inp2)));
    }
}