#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

ssize_t read_textfile(const char *filename, size_t letters);


#endif

