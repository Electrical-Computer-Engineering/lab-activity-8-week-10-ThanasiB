//NAME : Athanasios Bubulinis
//ID: 114801485
//Lab 8 Part 3 Question 2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    while(1){
        char inp1[50], inp2[50], out[50];   int k = 0;  //creates inputs and outputs
        printf("This program will remove the contents of String 2 from String 1 \n");        
        printf("Enter String 1: ");    gets(inp1);      //gets inp1
        if(strcmp(inp1,"stop") == 0){return 0;}         //ends if stop is inputted
        printf("Enter String 2: ");    gets(inp2);      //gets inp2
        if(strcmp(inp2,"stop") == 0){return 0;}         //ends if stop is inputted
        for(int j = 0; inp2[j]!= '\0'; j++){            //loops through inp2 till EOS
            for(int i = 0; inp1[i] != '\0'; i++){           //loops through inp1 till EOS
                if(inp2[j] == inp1[i]){
                    continue;                                   //if equal, continue loop
                }
                else{
                    out[k] = inp1[i];                           //if unequal out = inp1 chars
                    k++;                                        //indexes k
                }
            }
            out[k] = '\0';          //EOS
            strcpy (inp1, out);     //copies output to inp1
            k = 0;                  //k set to 0
        }
        printf ("Output: %s\n", out);   //output
    }
}