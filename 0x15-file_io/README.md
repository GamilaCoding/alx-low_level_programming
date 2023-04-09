## 0x15-file_io

# man or help:

open
close
read
write
dprintf
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
Look for the right source of information online
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call
## Tasks
 #  0. Tread lightly, she is near
   - Prototype: ssize_t read_textfile(const char *filename, size_t letters);
   - where letters is the number of letters it should read and print
   - returns the actual number of letters it could read and print
   - if the file can not be opened or read, return 0
   - if filename is NULL return 0
   - if write fails or does not write the expected amount of bytes, return 0
 # 1. Under the snow
  - int create_file(const char *filename, char *text_content);
 # 2. Speak gently, she can hear
  - int append_text_to_file(const char *filename, char *text_content);
 # 3. cp
  - cp file_from file_to
 # 4. elf
  - Usage: elf_header elf_filename
