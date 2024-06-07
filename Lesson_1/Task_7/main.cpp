#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y,N,distance;
    cout << "Please keep the coordinates of the stalker:" << endl;
    cout <<"x : ";
    cin  >> x;
    cout << "y : ";
    cin >> y;
    cout << "Please enter the radius of the field in the center of which the artifacts are located" << endl;
    cin >> N;
    distance = pow((pow(x,2 )+pow(y,2 )),  1.0/2);
    if (distance > N){
        cout<<"Cold! Stalker, you are too far away, let's get even closer "<<distance-N<<" kilometers"<<endl;
    }else {
        cout<<"Hot! Stalker, you are quite close to the artifact, it remains to go "<<N-distance<<" kilometers"<<endl;
    }
    return 0;
}
