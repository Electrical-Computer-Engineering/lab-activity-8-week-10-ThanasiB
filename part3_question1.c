#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//NAME : Athanasios Bubulinis
//ID: 114801485
//Lab 8 Part 3 Question 1

int main(){     //main FUNCTION
    char inp[21], out[21]; int length = 0, l = 0;   //character input
    while(1){                           //loop forever
        printf("\n\n\nInsert a string : ");    scanf(" %s", &inp);  //recieves input
        length = strlen(inp);   l = strlen(inp);    //two ints containing length of string
        for(int i = 0; i < l; i++){     //loops for length of string
            printf("\n%s", inp);            //prints string
            for(int j = 1; j < length; j++){    //loops for current input length, starting at 1
                inp[j - 1] = inp[j];                //sets previous box to current box
            }
            length--;   inp[length] = '\0';     //null
        }
        
    }
}
/*int main(){     //main FUNCTION
    char inp1[21], inp2[21], out[21]; int l1 = 0, l2 = 0, l3 = 0;   //character input
    while(1){                           //loop forever
        printf("\n\n\nInsert string 1 : ");    scanf(" %s", &inp1);  //recieves input
        printf("Insert string 2 : ");    scanf(" %s", &inp2);  //recieves input
        l1 = strlen(inp1) - 1;  l2 = strlen(inp2) - 1;
        for(int i = 0; i < l1; i++){
            for(int j = 0; j < l2; j++){
                if(inp1[i] != inp2[j]){
                    out[l3] = inp1[i]; l3++;
                }
                else{j++;}
            }
        }
        printf("%s", out);
    }
}*/
