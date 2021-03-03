#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */

    int arr[100], size, search, index;
    bool flag = false;
    cin>>size;

    for(index = 0; index < size; index++){
        cin>>arr[index];
    }

    cin>>search;

    for(index = 0; index < size; index++){
        if(search == arr[index]){
            flag = true;
        }
    }

    if(flag){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}
