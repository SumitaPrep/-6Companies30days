void rotate(vector<vector<int> >& matrix)
{
   int row = matrix.size(), col = matrix[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    // print(matrix);
    int i = 0, j = row - 1;
    while(i < j){
        swap(matrix[i],matrix[j]);
        i++;
        j--;
    }  // Your code goes here
}