//
// Created by Jayce Lee on 25. 7. 4.
//

#include <iostream>
#include <string>

using namespace std;

int main() {

    struct CandyBar {
        string brand_name;
        float weight;
        int calories;
    };

    CandyBar * candy_bar_arr = new CandyBar[3];

    candy_bar_arr->brand_name = "Jack";
    candy_bar_arr->weight = 1.5;
    candy_bar_arr->calories = 10;

    candy_bar_arr[1].brand_name = "Mary";
    candy_bar_arr[1].weight = 2.5;
    candy_bar_arr[1].calories = 20;

    candy_bar_arr[2].brand_name = "Tom";
    candy_bar_arr[2].weight = 3.5;
    candy_bar_arr[2].calories = 30;
    cout << candy_bar_arr[0].brand_name << endl;
    cout << candy_bar_arr[1].brand_name << endl;
    cout << candy_bar_arr[2].brand_name << endl;

    cout << candy_bar_arr[0].weight << endl;
    cout << candy_bar_arr[1].weight << endl;
    cout << candy_bar_arr[2].weight << endl;

    cout << candy_bar_arr[0].calories << endl;
    cout << candy_bar_arr[1].calories << endl;
    cout << candy_bar_arr[2].calories << endl;

    delete [] candy_bar_arr;
    return 0;

}