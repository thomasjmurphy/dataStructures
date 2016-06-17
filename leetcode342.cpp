bool isPowerOfFour(int n) {
        int test = 1;
        for(int i=2;i<=32;i+=2)
        {
            if(n == test){return 1;}
            test = 1 << i;
        }
        return 0;
    }
