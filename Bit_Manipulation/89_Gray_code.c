/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* grayCode(int n, int* returnSize) {
    
     int range = pow(2, n);

     int *result = (int *)malloc(sizeof(int) * range);

     for(int i = 0; i < range; i++)
     {
            int gray = i ^ (i >> 1) ;
            result[i] = gray;
     }

    *returnSize = range;
     return result;
}
