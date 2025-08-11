#include<stdio.h>

int findBiggest(int ar[], int position)
{
    if (position == 1) {
        return ar[0];
    }
    int biggestNumber = findBiggest(ar,position - 1);
    if (ar[position - 1] > biggestNumber) {
        return ar[position-1];
    }
    return biggestNumber;
}

int main()
{
    int ar[] = {9,2,3,1,29,3,5,3,6,8,10,11};
    printf("%d",findBiggest(ar, (sizeof(ar)/sizeof(int)) - 1));
    return 0;
}
