#include "students.h"
void AddStudent(int* numberOfStudents, char*** namesList, char*** surnamesList, int** semesterList, char* name,char* surname, int id)
{
    int static maxid=0;
    int i=0;
    if(numberOfStudents==0)
    {
    int cols=20;
    char** namesList2=new char* [id];
        for(int i=0; i<id; i++)
            namesList2[i]=new char [cols];
 
        while(name[i++]!=NULL)
            namesList2[id][i]=name[i];
    }
    else if(id>maxid)
    {
        int cols=20;
    char **namesList2=new char* [id];
        for(int i=0; i<id; i++)
            namesList2[i]=new char [cols];
        while(name[i++]!=NULL)
            namesList2[id][i]=name[i];


        
        
    }else
     while(name[i++]!=NULL)
            *namesList[id][i]=name[i];

    if(id>maxid)
    maxid=id;
    


}
void PrintListContent (int numberOfStudents, char** surnamesList)
{



}
void PrintListContent (int numberOfStudents, int* semesterList)
{



}
void PrintListContent (int numberOfStudents, char** namesList,char** surnamesList)
{



}
void PrintListContent (int numberOfStudents, char** namesList, char** surnamesList, int* semesterList)
{


}
void DeleteStudent (int * numberOfStudents, char*** namesList, char*** surnamesList, int** semesterList,int ID)
{


}
void ClearStudents (int* numberOfStudents, char*** namesList, char*** surnamesList, int** semesterList)
{



}