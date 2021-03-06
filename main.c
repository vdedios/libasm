#include "libasm.h"

#define STRLEN_TEST(str) printf("->[\"%s\"]\n(ft_strlen):%d; (strlen):%d\n\n", str, ft_strlen(str), (int)strlen(str));
#define STRCPY_TEST(dst, src) printf("->[\"%s\"]\n(ft_strcpy):%s; (strcpy):%s\n\n", src, ft_strcpy(dst, src), strcpy(dst, src));
#define STRCMP_TEST(s1, s2) printf("->[\"%s, %s\"]\n(ft_strcmp):%d; (strcmp):%d\n\n", s1, s2, ft_strcmp(s1, s2), strcmp(s1, s2));
#define STRDUP_TEST(s1) printf("->[\"%s\"]\n(ft_strdup):%s; (strdup):%s\n\n", s1, ft_strdup(s1), strdup(s1));
#define WRITE_TEST(fd, buff, nbyte) printf("->[\"%d, %s, %d\"]\n(ft_write):%d; (write):%d\n\n", fd, (char *)buff, (int)nbyte, (int)ft_write(fd, buff, nbyte), (int)write(fd, buff, nbyte));

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

static void test_strdup(void)
{
    blue(); printf("\nSTRCPY\n"); reset();
    STRDUP_TEST("asdklfalsdf");
    STRDUP_TEST("hola");
    STRDUP_TEST("");
}

static void test_write(void)
{
    blue(); printf("\nWRITE\n"); reset();
    WRITE_TEST(1, "asdklfalsdf", 5);
    WRITE_TEST(2, "err", 3);
    WRITE_TEST(1, "", 0);
    //ft_write(-1, "paco", 5);
    //printf("ERR %s\n", strerror(errno));
    //int fd = open("./test.txt", O_WRONLY);
    //ft_write(fd, "hola\n", 5);
    //ft_write(fd, "caca", 4);
    //close(fd);
}

static void test_read(void)
{
    char buff[100];

    memset(buff, 0, 100);
    blue(); printf("\nREAD\n"); reset();
    //int fd = open("./test.txt", O_RDONLY);
    //ft_read(fd, buff, 6);
    //printf("%s\n", buff);
    //close(fd);
    ft_read(1, buff, 6);
    printf("%s\n", buff);
}

int main()
{
    test_strlen();
    test_strcpy();
    test_strcmp();
    test_strdup();
    test_write();
    //test_read();
    return (0);
}
