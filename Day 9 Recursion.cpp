/*
 * Complete the 'factorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int factorial(int n) {
int r;
    if(n != 1){
        r = n * factorial(n-1);
    }
    else
        r = 1;
    return r;
}