#include "MyFile.h"
    
MyFile* MyFile::clone() const
{
    return new MyFile(*this);
}

void MyFile::ls(unsigned int op) const
{
   printName(op);
}

void MyFile::cat() const
{
    std::cout<<content<<std::endl;
}

MyFile& operator<< (MyFile& file, const std::string& txt)
{
    if(file.content.size())
        file.content.append("\n");
        
    file.content.append(txt);
    return file;
}