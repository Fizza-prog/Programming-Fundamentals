#include<iostream>
using namespace std;

void sortScores(int*, char**, int, int);
double calcAvg(int*, int);

int main()
{
    int n;
    double average;
    
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore();
    
    while(n <= 0)  
    {
        cout << "Invalid! Enter positive number: ";
        cin >> n;
        cin.ignore();
    }
    
    
    char **names = new char*[n];
    for(int i = 0; i < n; i++)
    {
        names[i] = new char[101];  
    }
    
   
    int *scores = new int[n];
    
   
    for(int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i+1 << ":\n";
        cout << "Name: ";
        cin.getline(names[i], 101);
        
        cout << "Score (0-100): ";
        cin >> scores[i];
        
        while(scores[i] < 0 || scores[i] > 100)  
        {
            cout << "Invalid! Enter score between 0-100: ";
            cin >> scores[i];
        }
        cin.ignore();
    }
    
   
    sortScores(scores, names, n, 101);
    average = calcAvg(scores, n);
    
    cout << "\n";
    cout << "Class Average: " << average << endl;
    
    // Cleanup
    delete[] scores;
    for(int i = 0; i < n; i++)
    {
        delete[] names[i];
    }
    delete[] names;
    
    return 0;  
}

void sortScores(int* scores, char** names, int n, int col)
{
   
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(scores[j] > scores[j+1])
            {
               
                int tempScore = scores[j];
                scores[j] = scores[j+1];
                scores[j+1] = tempScore;
                char* tempName = names[j];
                names[j] = names[j+1];
                names[j+1] = tempName;
            }
        }
    }
    
    cout << " Sorted Results (Ascending)\n";
    for(int i = 0; i < n; i++)
    {
        cout << i+1 << ". " << names[i] << ": " << scores[i] << endl;
    }
}

double calcAvg(int* scores, int n)
{
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    return sum / n;
}