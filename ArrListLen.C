int solution(int A[], int N) {
    // Implement your solution here
    int count = 0, found = 0, iter = 0;
    while(!found)
    {
        //printf("The iter value is %d ", iter);
        //printf("The count value is %d ", count);
        if (A[iter] == -1)
            found = 1;
        else
        {
            iter = A[iter];
            ++count;
        }
    }
    return count + 1;
}
