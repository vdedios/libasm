# Libasm

Libasm is a simple set of functions from `lib c` written in assembly. The aim of this project is to introduce to the amazing world of low level programming.

## Project specifications

Functions must be written in x64 assembly (in the Intel syntax). The coded functions are:
 ```c
int		ft_strlen(char const *str);
int		ft_strcmp(char const *s1, char const *s2);
char		*ft_strcpy(char *dst, char const *src);
ssize_t		ft_write(int fd, void const *buf, size_t nbyte);
ssize_t		ft_read(int fd, void *buf, size_t nbyte);
char		*ft_strdup(char const *s1);
 ```

## Usage

Clone the project

```bash
    git clone https://github.com/vdedios/libasm
```

Go to the project directory

```bash
    cd project-directory
```

Compile source code in order to create `libasm.a` library archive.

```bash
    make
```

## Tests

A custom set of tests have been coded. Just run:

```c
    make test
```

For exhaustive testing I highly recommend you to use [@cacharle](https://github.com/cacharle/libasm_test) libasm tester:
```bash
    git clone https://github.com/cacharle/libasm_test
    make
```
## Author
<table>
    <tr>
        <td>
          <img src="https://cdn.intra.42.fr/users/small_vde-dios.jpg" width=140px>
          </br>
          <a href="https://github.com/vdedios">@vdedios</a>
        </td>
    </tr>
</table>

## Support

If you find any issue I suggest you to open a PR with the fix 🙂
