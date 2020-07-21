#include <iostream>

using namespace std;

int main() {

    //display a squared triangle
    /*
    #####
    ####
    ###
    ##
    #
    */
    int i, j;
    for(i=0; i<5; i++) {
        for(j=5-i; j > 0; j--) {
            cout << "#";
        }
        cout << "\n";
    }

    cout << endl << endl;

    //count up to down by going down to up
    /*
    5
    4
    3
    2
    1
    */
    int row;
    for(row = 1; row <= 5; row++) {
        cout << 6-row << endl;
    }

    //display a triangle with left being the greater size
    /*
    #
    ##
    ###
    ####
    ###
    ##
    #
    */
    int k, s;
    for(k=0; k < 3; k++) {
        for(s=0; s <= k; s++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    for(k=0; k < 4; k++) {
        cout << "#";
    }
    cout << "\n";
    for(k=3; k > 0; k--) {
        for(s=0; s < k; s++) {
            cout << "#";
        }
        cout << "\n";
    }

    return 0;
}