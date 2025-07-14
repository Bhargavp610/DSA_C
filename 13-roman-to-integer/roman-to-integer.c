int romanToInt(char* s) {
    int Num = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int valA, valB;

        switch (s[i]) {
            case 'I': valA = 1; break;
            case 'V': valA = 5; break;
            case 'X': valA = 10; break;
            case 'L': valA = 50; break;
            case 'C': valA = 100; break;
            case 'D': valA = 500; break;
            case 'M': valA = 1000; break;
            default: valA = 0;
        }

        // Get value of next character
        switch (s[i + 1]) {
            case 'I': valB = 1; break;
            case 'V': valB = 5; break;
            case 'X': valB = 10; break;
            case 'L': valB = 50; break;
            case 'C': valB = 100; break;
            case 'D': valB = 500; break;
            case 'M': valB = 1000; break;
            default: valB = 0;
        }

        if (valA < valB) {
            Num -= valA;
        } else {
            Num += valA;
        }
    }

    return Num;
}
