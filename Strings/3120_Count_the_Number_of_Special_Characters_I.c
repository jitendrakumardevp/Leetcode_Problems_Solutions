int numberOfSpecialChars(char* word) {
    
    int lower[26] = {0};
    int upper[26] = {0};
    int spechar = 0; 

    int size = strlen(word);

    for(int i = 0; i < size; i++)
    {
        char ch = word[i];

        if(islower(ch))
        {
            int curr = ch - 97;
            lower[curr]++;

        }
        else {
            int curr = ch - 65;
            upper[curr]++;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(lower[i] >= 1 && upper[i] >= 1)
            spechar++;
    }

    return spechar;
}
