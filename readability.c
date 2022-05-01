#include <cs50.h>
#include <stdio.h>
#include <string.h>
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int main(void)
{
    string text = get_string("Text: ");
    float let = count_letters(text);
    float wor = count_words(text);
    float sent = count_sentences(text);
    float L = (let/wor)*100;
    float S = (sent/wor)*100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else{
    printf("Grade %0.0f\n", index);
    }
}



int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] != ' ' && text[i] != '.' && text[i] != ',' && text[i] != ';' && text[i] != (39) && text[i] != '-' && text[i] != '!')
        {
            letters++;
        }
    }
//    printf("%i\n", letters);
    return letters;
}

int count_words(string text)
{
    int words = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            words++;
        }
    }
    words++;
//    printf("%i\n", words);
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i <= strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!')
        {
            sentences++;
        }
    }
//    printf("%i\n", sentences);
    return sentences;
}
