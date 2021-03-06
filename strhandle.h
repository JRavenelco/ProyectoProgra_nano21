#ifndef STRHANDLE_H
    #define STRHANDLE_H

    #include <stdio.h>
    #include <string.h>

    #define PATH_SIZE 256
    #define MESSAGE_START 0
    #define MESSAGE_FINISH 1
    #define MESSAGE_CRASH 2
    #define PROCESS_READING 10
    #define PROCESS_IMPORTING 11
    #define PROCESS_GENERATING 12
    #define ERROR_SRCFILE 20
    #define ERROR_DSTFILE 21
    #define ERROR_HEADER 22

    typedef char path[PATH_SIZE];

    void remove_newline(path);
    void get_readpath(path);
    void get_writepath(path);
    void show_message(unsigned short int);
#endif // STRHANDLE_H
