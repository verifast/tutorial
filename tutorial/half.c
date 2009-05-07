int half(int x)
    //@ requires 1 <= x;
    //@ ensures x - 1 <= result + result && result + result <= x;
{
    int y = 0;
    while (y + y < x - 1)
        //@ invariant y + y <= x;
    {
        y++;
    }
    return y;
}

int main()
    //@ requires true;
    //@ ensures true;
{
    int a = half(11);
    assert(a == 5);
    return 0;
}