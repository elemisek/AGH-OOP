#include <iostream>
#include "File.h"
#include "Directory.h"

int main()
{
	Directory* ppo = new Directory("PPO");
	*ppo / new File("main.cpp");
	ppo->print();

	Directory* src = new Directory("src");
	File* cppFile = new File("Klasa.h");
	cppFile->print();
	*src / cppFile;
	*src / new File("Klasa.cpp");

	std::cout << "=========== src: ===========" << std::endl;
	File* srcPtr = src;
	srcPtr->print();

	std::cout << "=========== ppo: ===========" << std::endl;
	*ppo / src;
	ppo->print();

	Directory* lab02 = new Directory("Lab02");
	// przekopiowanie do lab02 całego katalogu z podkatalogami
	lab02->copy(src);
	src->rename("SOURCE");

	std::cout << "========= copied: =========" << std::endl;
	lab02->print();
	std::cout << "======== original: ========" << std::endl;
	src->print();

	delete ppo;
	delete lab02;
}
/* wynik

PPO/
__main.cpp
Klasa.h
=========== src: ===========
src/
__Klasa.h
__Klasa.cpp
=========== ppo: ===========
PPO/
__main.cpp
__src/
____Klasa.h
____Klasa.cpp
========= copied: =========
Lab02/
__src/
____Klasa.h
____Klasa.cpp
======== original: ========
SOURCE/
__Klasa.h
__Klasa.cpp

 */