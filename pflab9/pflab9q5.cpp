#include <stdio.h>
#include <string.h>

void Cypher(char userWord[100], char key[100], char cypherText[100]){
    int LengthWord = strlen(userWord);
    int LengthKey = strlen(key);
    int j = 0;
    for (int i = 0; i < LengthWord; i++){
        char Word = userWord[i];
        char KeyChar = key[j];
        if (Word == ' '){
            cypherText[i] = (((20 + (key[j] - 'A' + 1)) % 26) + 'A' -1);
            j++;
            continue;
        }
        int userValue = Word - 'A' + 1;
        int keyValue = KeyChar - 'A' + 1;
        int cypherValue = (userValue + keyValue) % 26;
        if (cypherValue == 0){
            cypherValue = 26;
        }
        cypherValue += 'A' - 1;
        cypherText[i] = cypherValue;
        j++;
        if (j >= LengthKey){
            j = 0;
        }
    }
    cypherText[LengthWord] = '\0';
}

int main(){
    char userWord[100], key[100], cypherText[100];

    printf("Enter Plain Text in capital letters: ");
    fgets(userWord, 100, stdin);
    userWord[strcspn(userWord, "\n")] = '\0';
    printf("Enter Key in capital letters: ");
    fgets(key, 100, stdin);
    key[strcspn(key, "\n")] = '\0';

    Cypher(userWord, key, cypherText);
    printf("\nCypher Text is: %s\n", cypherText);
    return 0;
}
