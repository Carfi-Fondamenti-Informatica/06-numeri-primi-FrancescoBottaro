bool num_prim(int n, int i)
{
    int r;
    if (i < 2)
        return true;
    r = n % i;
    if (r == 0)
        return false;
    else
        r = num_prim(n, i - 1);
}
