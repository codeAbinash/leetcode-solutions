char* restoreString(char* s, int* indices, int indicesSize) {
    int i;
    char newStr[indicesSize];
    for (i = 0; i < indicesSize; i++) 
        newStr[indices[i]] = s[i];
    for (i = 0; i < indicesSize; i++) 
        s[i] = newStr[i];
    return s;
}