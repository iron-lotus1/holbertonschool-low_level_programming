# Hello World
> shebang - is placed at the absolute beggining of the text file to tell the operating system to execute script using the Bash Shell
```
#!/bin/bash
```
<br>

---
[0-preprocessor](./0-preprocessor)

```
gcc -E $CFILE -o c
```
| Options | Description |
| --- | --- |
|GCC | (GNU Compiler Collection)|
|-E | Input files that don't require preprocessing are ignored.|
| $CFILE | Varible being used |
| -o | Place output in file file |
| c | name of the executable file |
---
<br>

[1-compiler](./1-compiler)
```
gcc -c $CFILE
```
| Options | Description |
| --- | --- |
|GCC | (GNU Compiler Collection)|
|-c | Compile or assemble the source files, but do not link. |
| $CFILE | Varible being used |
---
<br>

[2-assembler](./2-assembler)
```
gcc -S "$CFILE" 
```

| Options | Description |
| --- | --- |
|GCC | (GNU Compiler Collection)|
|-S | Stop after the stage of compilation proper; do not assemble. |
| $CFILE | Varible being used |
---
<br>

[3-name](./3-name)
```c
gcc -c $CFILE -o cisfun
```
| Options | Description |
| --- | --- |
|GCC | (GNU Compiler Collection)|
|-c | Compile or assemble the source files, but do not link. |
| $CFILE | Varible being used |
| -o | Place output in file file |
| cisfun | name of the executable file |
---
<br>

[4-puts.c](./4-puts.c)
```c
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
```
> puts() outputs a string and a trailing newline to stdout

---
<br>

[5-printf.c](./5-printf.c)
```c
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
```
> printf() is a standard function in C and a shell command in Linux used to format and print text to the screen.
---
<br>

[6-size.c](./6-size.c)
```c
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
```
> sizeof() is used when actual size of object or type needs to be known