// program showing the concept of enum

#include<stdio.h>
enum week{sun,mon=399,tue,wed,thur=-3,fri,sat};
int main(){
    enum week day = wed;
    printf("sun : %d\n",sun);
    printf("mon : %d\n",mon);
    printf("tue : %d\n",tue);
    printf("wed : %d\n",wed);
    printf("thur : %d\n",thur);
    printf("fri : %d\n",fri);
    printf("sat : %d\n",sat);
    printf("day : %d\n",day);
}