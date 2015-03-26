void exch(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
void swap(int *a, int *b)
{
    *a = *b - *a;
    *b = *b - *a;
    *a = *b + *a;
}
