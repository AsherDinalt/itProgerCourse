#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

#ifndef FILE_WORK
    #define FILE_WORK
    class FilesWork {
    private: 
        std::string name;
    public:
        FilesWork(std::string name);
        void write_file(std::string text);
        void read_file();
        void operator +=(std::string text);
};
#endif