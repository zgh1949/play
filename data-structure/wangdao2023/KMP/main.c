#include <stdio.h>

// 定长顺序存储表示
#define MAXLEN 255
typedef struct
{
    char ch[MAXLEN];
    int length;
} SString;

// 堆分配存储表示
typedef struct
{
    char *ch;
    int length;
} HString;

int Index(SString S，SString T)
{
    int i = 1, j = 1;
    while (i <= S.length && j <= T.length)
    {
        if (S.ch[i] == T.ch[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 2;
            j = 1;
        }
    }
    if (j > T.length)
        return i - T.length;
    return 0;
}

void main(){
    SString s;
    s.ch={'h','e','l','l','o',' ','w','o','r','l','d','!'};
    s.length = sizeof(s) / sizeof(s[0]);
}
