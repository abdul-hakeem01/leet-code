bool isPalindrome(int x) {
    if(x<0)
        return false;
    long orginal,reversed=0,remainder;
    orginal=x;
    while(orginal)
    {
        remainder=orginal % 10;
        reversed=reversed*10+remainder;
        orginal /=10;
    }
    return x==reversed;
}