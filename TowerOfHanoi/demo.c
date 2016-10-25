

void towerOfHanoi(int n, char fromrod, char torod, char auxrod)
{
    if (n == 1)
    {  printf("i am in n==1 \n");
        printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
        return;
    }
    towerOfHanoi(n-1, fromrod, auxrod, torod);
    printf(" \n outside, value of n is %d",n);
    printf("\n Move disk %d from rod %c to rod %c \n", n, fromrod, torod);
    towerOfHanoi(n-1, auxrod, torod, fromrod);
}

int main()
{
    int n = 4;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
