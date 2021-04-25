#include <stdio.h>
#include <string.h>
#include "libasm.h"

#define STRLEN_TEST(str) printf("->[\"%s\"]\nft_strlen:%d; strlen:%d\n", str, ft_strlen(str), (int)strlen(str));

int main()
{
    printf("\n---STRLEN---\n");
    STRLEN_TEST("test");
    STRLEN_TEST("testasdlfjaldkflaskdfjlkasdflkasjdflkjadslkfjsdlakjflkasdjflkjasdflkjasdlfkjdaslkf");
    STRLEN_TEST("");
    return (0);
}