// function definition // with return type
int factorial(int terms){
    int fact=1,i;
    for(i=1;i<=terms;i++){
        fact=fact*i;
    }
    return fact;
}
