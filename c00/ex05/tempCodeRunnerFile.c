	for (int a = '0'; a <= '7'; a++)
    {
        for (int b = a + 1; b <= '8'; b++)
        {
            for (int c = b + 1; c <= '9'; c++)
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a != '7')
                {
                    write(1, ",", 1);
                }
            }
        }
    }