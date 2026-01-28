#include<iostream>
using namespace std;
int main()
{
    int words=0;
    int n;
    cout<<"Enter maximum length of sentence: ";
    cin>>n;
    cin.ignore();
    
    char *string = new char[n+1];
    
    cout<<"Enter sentence: ";
    cin.getline(string, n+1);
    
    cout<<"Sentence: "<<string<<endl;
    
    int i=0;
    while(string[i]!='\0')
    {
        if(string[i]==' ')
            words++;
        i++;
    }
    
    cout<<"Total words: "<<words+1<<endl;
    delete[] string;
    return 0;
}