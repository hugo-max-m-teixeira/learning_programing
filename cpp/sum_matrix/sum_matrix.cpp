#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> sum(vector<vector<int>> mat1, vector<vector<int>> mat2){
    unsigned int size = mat1.size(); // Size of the vector
     vector<vector<int>> result_vector(size);

    for(int i = 0; i < size; i++){
        for(int j = 0; j<size; j++){
            result_vector[i].push_back(mat1[i][j] + mat2[i][j]);
        }
    }
    return result_vector;
}


int main() {

    vector<vector<int>> matrix1 = {{1,2},{3,4}};
    vector<vector<int>> matrix2 = {{5,6},{7,8}};
    vector<vector<int>> result_vector = sum(matrix1, matrix2);

    for(int i = 0; i< result_vector.size(); i++){
        for(int j = 0; j< result_vector.size(); j++){
            cout << result_vector[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

  return 0;
}
