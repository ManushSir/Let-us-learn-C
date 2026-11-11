#include <stdio.h>
#define WORDSIZ 25

void
reverse_input_words (int n)
{
      char word[WORDSIZ]; /* local variable for storing one word        */

    if (n <= 1) { /* simple case: just one word to get and print        */

          scanf("%s", word);
          printf("%s ", word);

    } else { /* get this word; get and print the rest of the words in
                reverse order; then print this word                     */

          scanf("%s", word);
          reverse_input_words (n - 1);
          printf("%s ", word);
    }
}

int main (void)
{
    int nw;
    
    printf ("How many words? ");
    scanf ("%d", &nw);
    
    reverse_input_words (nw);
    
    return (0);
    
}
