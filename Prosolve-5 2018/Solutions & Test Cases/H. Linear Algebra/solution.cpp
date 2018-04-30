#include <iostream>
using namespace std;

/*void print_matrix(float matrix[][11], int size, const char *str) {
    cout << endl << str << endl;
    for (int i=0; i<size; i++) {
        for (int j=0; j<size+1; j++)
            cout << matrix[i][j] << ' ';
        cout << endl;
    }
    cout << endl;
}*/

int main() {

    int T;
    cin >> T;

    for (int i=1; i<=T; i++) {

        int size;
        float matrix[10][11];
        
        // 1) get user input
        cin >> size;
        for (int j=0; j<size; j++)
            for (int k=0; k<size+1; k++)
                cin >> matrix[j][k];
        
        // 2) reduce to gauss-jordan form
        for (int j=0; j<size; j++) { //  -> [j][j] form
        
            // let the [j][j] be into 1
            float val = matrix[j][j];
            for (int k=0; k<size+1; k++)
                matrix[j][k] /= val;

            // let column below and above [j][j] to be zero
            for (int k=0; k<size; k++) {
                if (k != j) {
                    float val = matrix[k][j];
                    for (int l=0; l<size+1; l++) {
                        matrix[k][l] = (val * matrix[j][l]) - matrix[k][l];
                    }
                }
            }
        }

        // verify if the final matrix is kind of "identity matrix"
        //print_matrix(matrix, size, "Final matrix:");

        // 3) print answer
        cout << "Case #" << i << ": ";
        for (int j=0; j<size; j++)
            cout << matrix[j][j] * matrix[j][size] << ' ';
        cout << endl;
    }

    return 0;
}