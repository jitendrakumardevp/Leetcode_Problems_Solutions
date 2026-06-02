/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int countSetBits(int n)
 {
    int count = 0; 

    while(n > 0)
    {
        n &= (n -1);
        count++;
    }
    return count;
 }
int* countBits(int n, int* returnSize) {
    
    int *result = (int *)malloc(sizeof(int)* (n+1));

    result[0] = 0;
    int i = 0; 

    for( i = 1; i <= n; i++)
    {
        int count = countSetBits(i);

        result[i] = count;
    }
    *returnSize = i ;
    return result;
}
