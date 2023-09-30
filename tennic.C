// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int P, int C) {
    // Implement your solution here
    if (P < (2 * C))
        return (P / 2);
    else
        return C;
}
