#include <iostream>
#include <vector>

/*
 * Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are to 0.
 *
 */


void nullify_rows(std::vector<std::vector<int>> &matrix, int row)
{
    for(int i = 0; i < matrix[0].size(); ++i)
        matrix[row][i] = 0;
}

void nullify_cols(std::vector<std::vector<int>> &matrix, int col)
{
    for(int i = 0; i < matrix.size(); ++i)
        matrix[i][col] = 0;
}

void set_zeros(std::vector<std::vector<int>> &matrix)
{
    // Vectors to keep track of rows and cols with zeros
    std::vector<bool> rows(matrix.size());
    std::vector<bool> cols(matrix[0].size());

    // Iterate over matrix to find rows and cols with zeros
    for(int r = 0; r < matrix.size(); ++r)
    {
        for(int c = 0; c < matrix[r].size(); ++c)
        {
            if(matrix[r][c] == 0)
            {
                rows[r] = true;
                cols[c] = true;
            }
        }
    }


    // nullify rows
    for(int i = 0; i < rows.size(); ++i)
    {
        if(rows[i] == true)
            nullify_rows(matrix, i);
    }

    // nullify cols
    for(int i = 0; i < cols.size(); ++i)
    {
        if(cols[i] == true)
            nullify_cols(matrix, i);
    }

}

void print_matrix(std::vector<std::vector<int>> &matrix)
{
    std::vector<std::vector<int>>::iterator row;
    for(row = matrix.begin(); row != matrix.end(); ++row)
    {
        std::vector<int>::iterator col;
        for(col = row->begin(); col != row->end(); ++col)
        {
            std::cout << *col;
        }
        std::cout << "\n";
    }
}

int main()
{
    // initializing matrix
    std::vector<std::vector<int>> matrix(3, std::vector<int>(4, 1));

    // adding a zero element
    matrix[0][1] = 0;

    // printing matrix
    print_matrix(matrix);

    // nullifying 
    set_zeros(matrix);

    // printing matrix
    print_matrix(matrix);

    return 0;
}
