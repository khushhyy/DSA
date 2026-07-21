# DSA
int calculate factorial(int n)
    if(n<=1){
        return 1; 
}
else{
return n*calculate factorial(n-1);
}