/* call_shellcode.c  */
 #include <unistd.h>

int main(int argc, char **argv)
{
   char *name[2];
   name[0] = "/bin/zsh";
   name[1] = NULL;
   execve(name[0], name, NULL);
}
