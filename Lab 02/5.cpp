/*
You need to make a program that works like a Matrix Wizard. First, it will ask the user for
the size of a 2D matrix and then create it using memory magic (dynamic allocation). Next,
the program will fill the matrix with numbers given by the user. After that, it will show off
by doing matrix addition, subtraction, and multiplication (only if the sizes match). Finally,
it will display the arrayAnss and clean up the memory like a good, tidy wizard.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

void addMatrix(int **array,int ** array2,int n, int m)
{
    cout<<"arrayAns of Matrix Addition:"<<endl;
    for (int i = 0; i < n; i++) 
    
    {
        for (int j = 0; j < m; j++) 
        {
            cout<<array[i][j]+array2[i][j]<<" ";
        }
        cout<<endl;
    }
}

void subMatrix(int **array,int **array2,int n,int m)
{
    cout<< "arrayAns of Matrix Subtraction:"<<endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++){
            cout<<array2[i][j] -array[i][j]<<" ";
        }
        cout<<endl;
    }
}

void mulMatrix(int **array, int **array2,int n,int m, int p)

{
    int **arrayAns = (int**)malloc(sizeof(int*)*n);
    
    for (int i = 0; i < n; i++)
    {
        arrayAns[i] = (int*)malloc(sizeof(int)*p);
        for (int j = 0; j < p; j++)
        {
            arrayAns[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                arrayAns[i][j] += array[i][k]*array2[k][j];
            }
        }
    }
    cout << "arrayAns of Matrix Multiplication:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < p; j++) 
        {
            cout<<arrayAns[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++) 
    {
        free(arrayAns[i]);
    }
    free(arrayAns);
}
int main() 
{
    int n,m;
    cout<<"Enter size for matrix row: "<<endl; cin>>n;
    cout<<"Enter size for matrix column: "<<endl; cin>>m;
    int **array = (int**)malloc(sizeof(int**)*n);
    cout<<"Input for matrix 1: "<<endl;
    for (int i = 0; i < m; i++)
    {
        int **array = (int**)malloc(sizeof(int**) * m);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<"Enter element["<<i<<"]["<<j<<"]: ";
            cin>>array[i][j];
            cout<<"\n";
        }
    }

    cout<<"Your matrix 1: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    int o,p;
    cout<<"Enter size for matrix row: "<<endl; cin>>o;
    cout<<"Enter size for matrix column: "<<endl; cin>>p;
    int **array2 = (int**)malloc(sizeof(int**)*o);
    cout<<"Input for matrix 2: "<<endl;
    for (int i = 0; i < p; i++)
    {
        int **array2 = (int**)malloc(sizeof(int**) * p);
    }
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout<<"Enter element["<<i<<"]["<<j<<"]: ";
            cin>>array2[i][j];
            cout<<"\n";
        }
    }

    cout<<"Your matrix 2: "<<endl;
    for (int i = 0; i < o; i++)

    {
        for (int j = 0; j < p; j++)
        {
            cout<<array2[i][j]<<" ";
        
        }
        cout<<endl;
    }
    int choice;
    cout<<"Enter:\n1. Matrix Addition "/*(Condition: Rows/Col of matrix 1 should be same as matrix 2)*/<<
    "\n2. Matrix Subtraction (Matrix 2 - Matrix 1) "/*(Condition: Rows/Col of matrix 1 should be same as matrix 2)*/<<
    "\n 3. Matrix Multiplication "/*(Condition: Matrix 1 column should be equal to row of matrix 2)*/"\n4. Exit\nYour choice: ";
    cin>>choice;
    
    switch(choice)

    {

        case 1:
        addMatrix(array,array2,n,m);
        break;
        case 2:
        subMatrix(array,array2,n,m);
        break;


        case 3:
        mulMatrix(array,array2,n,m,p);

        break;

        case 4:
        cout<<"Program End Sucessfully"<<endl;
        break;
 
        default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    
    delete array;
    delete array2;
    
    return 0;
}