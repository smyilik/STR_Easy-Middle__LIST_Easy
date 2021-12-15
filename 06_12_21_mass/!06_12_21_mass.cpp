#include "easy_list.h"

int main()
{
    vector <int> vec { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 17 };
    vector<int> vec2 { 9, 8, 7, 6};
    //cout << itc_same_parts_list(vec);
    itc_super_shift_list(vec, -1);
    for (int i = 0; i < vec.size(); i++) cout << vec[i] << endl;
}

/*vector<int> plus_vector(vector<int> a)
{
    for (int i = 0; i < a.size(); i++) a[i]++;
    return a;
}

void plus_vector1(const vector<int> a)
{
    for (int i = 0; i < a.size(); i++) cout << a[i] << endl;
}

int main()
{
    /*int mass[5];
    mass[0] = 1;
    mass[1] = 2;
    mass[2] = 3;
    mass[3] = 4;
    mass[4] = 5;
    //for (int i = 0; i < 5; i++) cout << mass[i] << endl;

    /*vector<int> a = {1, 2, 3};
    plus_vector1(a);
    a.pop_back();// удаляет последний элемент
    for (int i = 0; i < a.size(); i++) cout << a[i] << endl;



    return 0;
}*/

