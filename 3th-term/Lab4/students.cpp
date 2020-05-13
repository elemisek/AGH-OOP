#include "students.h"
#include <cstring>
#include <cstdlib>
using namespace std;
char* first_names(char* name)
{
	char* new_names_list=new char [strlen(name)];
    strcpy(new_names_list,name);
    return new_names_list;
}
char* surname_(char* surname)
{
    char* new_surnames_list=new char [strlen(surname)];
    strcpy(new_surnames_list,surname);
    return new_surnames_list;
}
void rewriteList(int n, char** nameList, char*** newNameList)
{
    for(int i=0;i<n;i++)
        (*newNameList)[i]=nameList[i];
}
void rewriteList(int n, int* semList, int** newSemList)
{
    for(int i=0;i<n;i++)
        (*newSemList)[i]=semList[i];
}
void AddStudent(int* numberOfStudents,char*** namesList,char*** surnamesList,int** semesterList, char* name, char* surname,int newsemester)
{
    char** new_names_list=new char* [(*numberOfStudents+1)];
    char** new_surname_list=new char* [(*numberOfStudents+1)];
    int* new_semester_list=new int [(*numberOfStudents+1)];
    char* newname=first_names(name);
    char* newsurname=surname_(surname);
    rewriteList(*numberOfStudents,*namesList,&new_names_list);
    rewriteList(*numberOfStudents,*surnamesList,&new_surname_list);
    rewriteList(*numberOfStudents,*semesterList,&new_semester_list);
    *(new_names_list+*numberOfStudents)=newname;
    *(new_surname_list+*numberOfStudents)=newsurname;
    *(new_semester_list+*numberOfStudents)=newsemester;
    *namesList=new_names_list;
    *surnamesList=new_surname_list;
    *semesterList=new_semester_list;
    *numberOfStudents=*numberOfStudents+1;

}
void PrintListContent (int numberOfStudents, char** surnamesList)
{
	for(int i=0; i<numberOfStudents; i++)
	{
		std::cout<<surnamesList[i]<<std::endl;
	}
}

void PrintListContent (int numberOfStudents, char** namesList, char** surnamesList)
{
	for(int i=0; i<numberOfStudents; i++)
	{
		std::cout<<namesList[i]<<" "<<surnamesList[i]<<std::endl;
	}
}

void PrintListContent (int numberOfStudents, int* semesterList)
{
	for(int i=0; i<numberOfStudents; i++)
	{
		std::cout<<semesterList[i]<<std::endl;
	}
}

void PrintListContent (int numberOfStudents, char** namesList, char** surnamesList, int* semesterList)
{
	for(int i=0; i<numberOfStudents; i++)
	{
		std::cout<<namesList[i]<<" "<<surnamesList[i]<<" "<<semesterList[i]<<std::endl;
	}
}

void DeleteStudent (int* numberOfStudents, char*** namesList, char*** surnamesList, int** semesterList,int id)
{
	
    char** new_names_list=new char* [(*numberOfStudents-1)];
    char** new_surname_list=new char* [(*numberOfStudents-1)];
    int* new_semester_list=new int [(*numberOfStudents-1)];
	for(int i=0;i<id;i++)
	{
		strcpy(new_names_list[i],*namesList[i]);
		strcpy(new_surname_list[i],*surnamesList[i]);
		new_semester_list[i]=*semesterList[i];
	}
	for(int i=id;i<*numberOfStudents;i++)
	{
		strcpy(new_names_list[i],*namesList[i+1]);
		strcpy(new_surname_list[i],*surnamesList[i+1]);
		new_semester_list[i]=*semesterList[i+1];
	}
	*namesList=new_names_list;
    *surnamesList=new_surname_list;
    *semesterList=new_semester_list;
    *numberOfStudents=*numberOfStudents-1;
}
void ClearStudents (int* numberOfStudents, char*** namesList, char*** surnamesList, int** semesterList)
{
	if(*namesList==NULL || *surnamesList==NULL || semesterList==NULL)
		return;
	for(int i=0; i<*numberOfStudents; i++)
	{
		delete [] (*(*namesList+i));
		delete [] (*(*surnamesList+i));
	}
	delete [] (*namesList);
	delete [] (*surnamesList);
	delete [] (*semesterList);
	*numberOfStudents=0;
}
