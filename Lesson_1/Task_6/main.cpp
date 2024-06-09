#include <iostream>

using namespace std;

int main()
{
    int Christmas_tree_size=0,Current_row_of_leaves=1,space=0,star=1;
    cout << "Please measure the Christmas tree you want: ";
    cin >> Christmas_tree_size;

    while (Current_row_of_leaves<=Christmas_tree_size){
        for (space = 0; space < Christmas_tree_size-Current_row_of_leaves; ++space){
            cout << " ";
        }
        cout << "*";
        for(star = 1; star < Current_row_of_leaves; ++star){
            cout << "**";
        }
        cout<<endl;
        Current_row_of_leaves=Current_row_of_leaves+1;
    }
    for (space = 0; space < Christmas_tree_size-1; ++space){
        cout << " ";
    }
    cout << "*";
    return 0;
}
