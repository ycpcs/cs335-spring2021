gcc -DBUF_SIZE=212 -o stack -z execstack -fno-stack-protector stack.c
sudo chown root stack
sudo chmod 4755 stack
/bin/ls -l
