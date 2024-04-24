//NAME : Athanasios Bubulinis
//ID: 114801485
//Lab 8 Homework

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define WORDLEN 100

int isVowel(char c) {   c = tolower(c);     return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');  }   //converts char to lower case, then reutnrs if c == type:VOWEL

void toPigLatin(char *word) {
    char out[WORDLEN];          //creates an output of WORDLEN length
    int firstVowelPos = -1;     //creates firstVowelPos at -1
    for(int i = 0; i < WORDLEN; i++) {      //runs for lenght of word
        if(isVowel(word[i])) {  //if vowel
            firstVowelPos = i;              //firstVowelPos updated
            break;                          //breaks loop
        }
    }

    if(firstVowelPos == 0)      {   strcpy(out, word);                  strcat(out, "way"); }   //if first vowel found is at index 0, copy word to output and add 'way' at end
    else if(firstVowelPos > 0)  {   strcpy(out, &word[firstVowelPos]);  strncat(out, word, firstVowelPos);      strcat(out, "ay");  } //elif first vowel isnt at 0, copy word(starting after firstVowelPos), add word to out ending at firstVowelPos, finally cats ay at end
    else                        {   strcpy(out, word);                  strcat(out, "ay");}     //else (no vowel), copy word to out and add 'ay' at the end
    printf("%s ", out);
}

int main() {
    char inp[WORDLEN];  printf("Enter word(s): \n");  gets(inp);  //creates and gets input
    char *token = strtok(inp, " \n");                           //stores in token 
    printf("Pig Latin Conversion : \n");
    while(token != NULL) {                                     //while not at end of token
        toPigLatin(token);                                          //send token (or word of sentence) to toPigLatin function 
        token = strtok(NULL, " \n");                                //token updated
    }
    printf("\n\n");
    return 0;
}
