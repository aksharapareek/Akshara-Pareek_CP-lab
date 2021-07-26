#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

   
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
   
    return 0;
    
    
}
