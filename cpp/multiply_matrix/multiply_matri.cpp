#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiply (vector<vector<int>> a, vector<vector<int>> b){
    unsigned int size_mat_ai = a.size(), size_mat_aj = a[0].size();
    unsigned int size_mat_bi = b.size(), size_mat_bj = b[0].size();

    if(size_mat_aj != size_mat_bi){
        cout << "Cannot multilply" << endl;
    } else {
        vector<vector<int>> result(size_mat_ai);
        for(int y = 0; y<size_mat_ai; y++){
            for(int x=0; x<size_mat_bj; x++){
                int sum=0;
                for(int i=0; i<size_mat_aj; i++){
                    sum += a[y][i]*b[i][x];
                }
                result[y].push_back(sum);
            }
        }
        return result;
    }
    vector<vector<int>> error = {{-1}};
    return error;
}

int main (){
    vector<vector<int>> A = {
        {1, 2},
        {-1, -3},
        {4, -2}
    };

    vector<vector<int>> B = {
        {7, 0},
        {-2, 4}
    };

    vector<vector<int>> result = multiply(A,B);
    unsigned int tam = result.size();

    for(int i=0; i<tam; i++){
        for(int j=0; j<result[0].size(); j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

