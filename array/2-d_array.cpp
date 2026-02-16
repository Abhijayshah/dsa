// 1-D and 2-D Array

// Different Types-Array

// Array types mentioned:

// ROW-Wise transversal array

// Col-Wise transversal

// Snake/Wave (zig-zag pattern)

// Diagonal traverse

// Spiral traverse Array

// Boundary transversal -> HW 







#include <iostream>
#include <vector>
using namespace std;

// 1. Row-wise traversal
void rowWiseTraversal(vector<vector<int>>& arr) {
    cout << "Row-wise Traversal: ";
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}

// 2. Column-wise traversal
void colWiseTraversal(vector<vector<int>>& arr) {
    cout << "Column-wise Traversal: ";
    for(int j = 0; j < arr[0].size(); j++) {
        for(int i = 0; i < arr.size(); i++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
}

// 3. Snake/Wave pattern (zig-zag)
void snakeTraversal(vector<vector<int>>& arr) {
    cout << "Snake/Wave Traversal: ";
    for(int i = 0; i < arr.size(); i++) {
        if(i % 2 == 0) {
            // Left to right
            for(int j = 0; j < arr[i].size(); j++) {
                cout << arr[i][j] << " ";
            }

        } else {
            // Right to left
            for(int j = arr[i].size() - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

// 4. Diagonal traversal
void diagonalTraversal(vector<vector<int>>& arr) {
    cout << "Diagonal Traversal: ";
    int n = arr.size();
    int m = arr[0].size();
    
    // Upper half (including main diagonal)
    for(int k = 0; k < m; k++) {
        int i = 0, j = k;
        while(i < n && j >= 0) {
            cout << arr[i][j] << " ";
            i++;
            j--;
        }
    }
    
    // Lower half
    for(int k = 1; k < n; k++) {
        int i = k, j = m - 1;
        while(i < n && j >= 0) {
            cout << arr[i][j] << " ";
            i++;
            j--;
        }
    }
    cout << endl;
}

// 5. Spiral traversal
void spiralTraversal(vector<vector<int>>& arr) {
    cout << "Spiral Traversal: ";
    int top = 0, bottom = arr.size() - 1;
    int left = 0, right = arr[0].size() - 1;
    
    while(top <= bottom && left <= right) {
        // Right
        for(int i = left; i <= right; i++) {
            cout << arr[top][i] << " ";
        }
        top++;
        
        // Down
        for(int i = top; i <= bottom; i++) {
            cout << arr[i][right] << " ";
        }
        right--;
        
        // Left
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }

        // Up
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
    cout << endl;
}

// 6. Boundary traversal
void boundaryTraversal(vector<vector<int>>& arr) {
    cout << "Boundary Traversal: ";
    int n = arr.size();
    int m = arr[0].size();
    
    if(n == 1) {
        for(int j = 0; j < m; j++) cout << arr[0][j] << " ";
        cout << endl;
        return;
    }
    
    if(m == 1) {
        for(int i = 0; i < n; i++) cout << arr[i][0] << " ";
        cout << endl;
        return;
    }
    
    // Top row
    for(int j = 0; j < m; j++) {
        cout << arr[0][j] << " ";
    }
    
    // Right column (excluding corners)
    for(int i = 1; i < n; i++) {
        cout << arr[i][m-1] << " ";
    }
    
    // Bottom row (excluding right corner)
    for(int j = m-2; j >= 0; j--) {
        cout << arr[n-1][j] << " ";
    }
    
    // Left column (excluding corners)
    for(int i = n-2; i > 0; i--) {
        cout << arr[i][0] << " ";
    }
    
    cout << endl;
}

int main() {
    // Test matrix
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    cout << "Original Matrix:" << endl;
    for(auto row : arr) {
        for(auto val : row) {
            cout << val << "\t";
        }
        cout << endl;
    }
    cout << endl;
    
    // Test all traversals
    rowWiseTraversal(arr);
    colWiseTraversal(arr);
    snakeTraversal(arr);
    diagonalTraversal(arr);
    spiralTraversal(arr);
    boundaryTraversal(arr);
    
    return 0;
}