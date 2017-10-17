//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
int pin[100][100], best=0;

int main()
{
    int r;
    int i, j;
    
    cin >> r;
    for(i=0;i<r;i++){
        for(j=1;j<=i+1;j++){
            cin >> pin[i][j];
        }
    }
    
    for(i=1;i<r;i++){
        for(j=1;j<=i+1;j++){
            pin[i][j]+=max(pin[i-1][j], pin[i-1][j-1]);
        }
    }
    for(i=1;i<=r;i++){
        best=max(pin[r-1][i], best);
    }
    
    cout << best << endl;
    
    return 0;
}
