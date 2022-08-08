int romanToInt(char* str) {
    int answer = 0;
    char lastChar = 0;
    while (*str != '\0') {
        switch (*str) {
            case 'M':
                answer += (lastChar == 'C') ? 800 : 1000;
                break;
            case 'D':
                answer += (lastChar == 'C') ? 300 : 500;
                break;
            case 'C':
                answer += (lastChar == 'X') ? 80 : 100;
                break;
            case 'L':
                answer += (lastChar == 'X') ? 30 : 50;
                break;
            case 'X':
                answer += (lastChar == 'I') ? 8 : 10;
                break;
            case 'V':
                answer += (lastChar == 'I') ? 3 : 5;
                break;
            case 'I':
                answer++;
                break;
        }
        lastChar = *str;
        str++;
    }
    return answer;
}