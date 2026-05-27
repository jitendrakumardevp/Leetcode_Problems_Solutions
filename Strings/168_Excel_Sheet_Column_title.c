void reverseString(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers toward the middle
        start++;
        end--;
    }
}

char* convertToTitle(int columnNumber) {
    
    char *title = (char *)malloc(10);
    int i = 0; 

    while(columnNumber > 0)
    {
        columnNumber--;

        char ch = 'A' + (columnNumber % 26);
        
        title[i] = ch;
        i++;
        columnNumber /= 26;
    }
    title[i] = '\0';

    reverseString(title);

    return title;
}
