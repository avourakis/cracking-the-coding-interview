#include <iostream>

void zero_matrix(int ** matrix, int m, int n)
{
   for (int r = 0; r < m; ++r)
   {
       for(int c = 0; c < n; ++c)
       {    
            if(matrix[r][c] == 0)
            {
                // do something
            }
       }
   } 
}


int main()
{
    int m = 3;
    int n = 2;
    
    // Create an array of pointers that points to more arrays
    // Assign 1s
    int ** matrix;

    matrix = new int*[m];
    for (int r = 0; r < m; ++r)
    {
        matrix[r] = new int[n];
        
        for(int c = 0; c < n; ++c)
            matrix[r][c] = 1;
    }

    // Assign one 0
    matrix[1][0] = 0;

    // Printing array

    for (int r = 0; r < m; ++r)
    {
        for(int c = 0; c < n; ++c)
        {
            std::cout << matrix[r][c];
        }
        std::cout << "\n";
    }

    zero_matrix(matrix, m, n);

    // Free each sub-array
    for(int r = 0; r < m; ++r)
        delete[] matrix[r];

    // Free the array of pointers
    delete[] matrix;


    return 0;
}
