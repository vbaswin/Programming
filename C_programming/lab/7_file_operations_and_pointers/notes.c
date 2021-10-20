/* 
POINTER : is a variable which stores the address of another variable.

FILE POINTER : handli and keep track on the files, do operations on 
    the file 

r – Opens a file in read mode and sets pointer to the first character 
in the file. It returns null if file does not exist.

w – Opens a file in write mode. It returns null if file could not be 
opened. If file exists, data are overwritten.

a – Opens a file in append mode.  It returns null if file couldn’t be
opened. >>==>> append or add data to the existing data of file

r+ – Opens a file for read and write mode and sets pointer to the first 
character in the file.

w+ – opens a file for read and write mode and sets pointer to the first 
character in the file.

a+ – Opens a file for read and write mode and sets pointer to the first 
character in the file. But, it can’t modify existing contents.

fopen() - creates a new file or opens an existing file
fclose() - closes the file opened by the file pointer fp
fgetc() - reads a character from file
fputc() - write a character to file
fputs() - writes string into a file pointed by fp
fgets() - read the string 
rewind() - moves the file pointer position to the beginning of the file
ftell() - gives current position of the pointer
fseek() - moves file pointer position to the given location
fprintf() - writes formatted data to a file
fscanf() - reads formatted data from a file
remove() - deletes a file

fgets reads till newline'\n' fscanf reads till space ' ' 

*/