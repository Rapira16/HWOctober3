#include<iostream>
#include<list>

void list_work(){
    list<int> n{ 1, 2, 3 };
    int sum = 0;
    double average = 0;
    int numbers = 0;
    while(n.begin <= n.end){
        sum = sum + n.begin;
        numbers++;
        n.begin++;
    }
    average = sum/numbers;
    n.push_back(average);
}
int main(){
    list_work();
    return 0;
}