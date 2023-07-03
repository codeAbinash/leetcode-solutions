void processString(char *s){
    int start = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] != '#')
            s[start++] = s[i];
        else if(s[i]  == '#' && start > 0)
            start--;
    }
    s[start] = '\0';
}

bool backspaceCompare(char* S, char* T) {
    processString(S);
    processString(T);
  
    return (strcmp(S, T) == 0);
}
