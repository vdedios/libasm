#include <stdio.h>
#include <string.h>
#include "libasm.h"

#define STRLEN_TEST(str) printf("->[\"%s\"]\n(ft_strlen):%d; (strlen):%d\n\n", str, ft_strlen(str), (int)strlen(str));
#define STRCPY_TEST(dst, src) printf("->[\"%s\"]\n(ft_strcpy):%s; (strcpy):%s\n\n", src, ft_strcpy(dst, src), strcpy(dst, src));
#define STRCMP_TEST(s1, s2) printf("->[\"%s, %s\"]\n(ft_strcmp):%d; (strcmp):%d\n\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));

/*
** Colors
*/

void blue()
{
  printf("\033[1;34m");
}

void reset()
{
  printf("\033[0m");
}

static void test_strlen(void)
{
    blue(); printf("\nSTRLEN\n"); reset();
    STRLEN_TEST("test");
    STRLEN_TEST("testasdlfjaldkflaskdfjlkasdflkasjdflkjadslkfjsdlakjflkasdjflkjasdflkjasdlfkjdaslkf");
    STRLEN_TEST("");
}

static void test_strcpy(void)
{
    char dst[100];

    blue(); printf("\nSTRCPY\n"); reset();
    STRCPY_TEST(dst, "hola");
    STRCPY_TEST(dst, "adslfkjaldsfkjas;dfj;asdkfj;askdf;aklsflaksdjflkajdflkhola");
    STRCPY_TEST(dst, "");
}

static void test_strcmp(void)
{
    blue(); printf("\nSTRCPY\n"); reset();
    STRCMP_TEST("asdklfalsdf", "asdkladfdasf");
    STRCMP_TEST("hola", "hola");
    STRCMP_TEST("hola", "holz");
    STRCMP_TEST("holas", "hola");
    STRCMP_TEST("", "hola");
    STRCMP_TEST("hola", "");
    STRCMP_TEST("", "");
}

int main()
{
    //test_strlen();
    //test_strcpy();
    test_strcmp();
    return (0);
}