#include <cstring>

char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) {
            sum += n1[i] - '0';
            i--;
        }
        if (j >= 0) {
            sum += n2[j] - '0';
            j--;
        }
        if (k >= size_r - 1) {
            return 0;  
        }
        r[k] = sum % 10 + '0';
        carry = sum / 10;
        k++;
    }

    if (carry > 0) {
        if (k >= size_r - 1) {
            return 0;  r
        }
        r[k] = carry + '0';
        k++;
    }

    for (int i = 0, j = k - 1; i < j; i++, j--) {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    if (k >= size_r) {
        return 0; 
    }
    r[k] = '\0';

    return r;
}
