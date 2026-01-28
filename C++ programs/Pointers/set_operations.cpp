#include<iostream>
using namespace std;

void inputSet(int*, int);
void displaySet(int*, int);
void unionOfSets(int*, int, int*, int);
void intersecSets(int*, int, int*, int);

int main()
{
    int sizeA, sizeB;
    
    cout << "Enter size for set A: ";
    cin >> sizeA;
    
    int* setA = new int[sizeA];
    inputSet(setA, sizeA);
    
    cout << "\nEnter size for set B: ";
    cin >> sizeB;
    
    int* setB = new int[sizeB];
    inputSet(setB, sizeB);
    
    // Calculate union and intersection
    unionOfSets(setA, sizeA, setB, sizeB);
    intersecSets(setA, sizeA, setB, sizeB);
    
    // Cleanup
    delete[] setA;
    delete[] setB;
    
    return 0;
}

void inputSet(int* set, int size)
{
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> set[i];
    }
    displaySet(set, size);
}

void displaySet(int* set, int size)
{
    cout << "Set: { ";
    for(int i = 0; i < size; i++)
    {
        cout << set[i] << " ";
    }
    cout << "}" << endl;
}

void unionOfSets(int* setA, int sizeA, int* setB, int sizeB)
{
    // Maximum possible union size
    int maxUnionSize = sizeA + sizeB;
    int* unionSet = new int[maxUnionSize];
    int unionCount = 0;
    
    // Add all elements from setA
    for(int i = 0; i < sizeA; i++)
    {
        unionSet[unionCount++] = setA[i];
    }
    
    // Add elements from setB only if not already present
    for(int i = 0; i < sizeB; i++)
    {
        bool isDuplicate = false;
        for(int j = 0; j < sizeA; j++)
        {
            if(setB[i] == setA[j])
            {
                isDuplicate = true;
                break;
            }
        }
        
        if(!isDuplicate)
        {
            unionSet[unionCount++] = setB[i];
        }
    }
    
    cout << "\nUnion: { ";
    for(int i = 0; i < unionCount; i++)
    {
        cout << unionSet[i] << " ";
    }
    cout << "}" << endl;
    
    delete[] unionSet;
}

void intersecSets(int* setA, int sizeA, int* setB, int sizeB)
{
    // Maximum possible intersection size
    int maxIntersecSize = (sizeA < sizeB) ? sizeA : sizeB;
    int* intersection = new int[maxIntersecSize];
    int intersecCount = 0;
    
    for(int i = 0; i < sizeA; i++)
    {
        for(int j = 0; j < sizeB; j++)
        {
            if(setA[i] == setB[j])
            {
                // Check if already in intersection (in case of duplicates within same set)
                bool alreadyExists = false;
                for(int k = 0; k < intersecCount; k++)
                {
                    if(intersection[k] == setA[i])
                    {
                        alreadyExists = true;
                        break;
                    }
                }
                
                if(!alreadyExists)
                {
                    intersection[intersecCount++] = setA[i];
                }
                break;
            }
        }
    }
    
    cout << "Intersection: { ";
    for(int i = 0; i < intersecCount; i++)
    {
        cout << intersection[i] << " ";
    }
    cout << "}" << endl;
    
    delete[] intersection;
}