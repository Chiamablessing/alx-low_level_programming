File I/O File Input/Output (I/O) refers to the process of reading data from and writing data to files on a computer's storage. In programming, file I/O is essential for tasks such as reading configuration files, processing data sets, and persistently storing information.
 Here's an overview of file I/O concepts:
Here  use the fopen( ) function to create a new file or to open an existing file. This call will initialize an object of the type FILE,and the fclose( ) function to close a file
Tasks
* 0. Tread lightly, she is near
* `0-read_textfile.c`: C function that reads a text file and prints it to the POSIX standard output.
* The parameter `letters` is the number of letters the function should read and print.
* If the file is `NULL` or cannot be opened or read - returns 0.
* If the write call fails or does not write the expected number of bytes - returns 0.
* Otherwise - returns the actual number of bytes the function can read and print.

* 1. Under the snow
* `1-create_file.c`: C function that creates a file.
* The parameter `filename` is the name of the file to create.
* The parameter `text_content` is a null-terminated string to write to the file.
  * If `text_content` is NULL, the function creates an empty file.
* The created file has the permissions `rw-------`.
  * If the file already exists, the existing permissions are not changed.
* Existing files are truncated.
* If `filename` is NULL or the function fails - returns -1.
* Otherwise - returns 1 on success.

* Speak gently, she can hear
* 2-append_text_to_file.c C function that appends text at the end of a file.

* 3. cp

* 3-cp.c: C program that copies the contents of a file to another file.

*  elf
* 100-elf_header.c C program that displays the information contained in the ELF header at the start of an ELF file.
* Displayed information: (no less, no more, do not include trailing whitespace)
_Magic
_Class
_Data
_Version
_OS/ABI
_ABI Version
_Type
_Entry point address
