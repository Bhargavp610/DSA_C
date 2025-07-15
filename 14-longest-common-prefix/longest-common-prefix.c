char* longestCommonPrefix(char** strs, int strsSize) {
    static char first[200];  // use static so it persists after function returns
    strcpy(first, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (first[j] && strs[i][j] && first[j] == strs[i][j]) {
            j++;
        }
        first[j] = '\0';
        if (first[0] == '\0') {
            break;
        }
    }

    return first;
    
}