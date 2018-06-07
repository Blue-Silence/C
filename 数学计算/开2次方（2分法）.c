
double square(double input)
    {
        double result;
        int beginning = 0, end = (int)(input + 1), middle;
        
        if (end % 2 == 0)
            ;
        else
            end++;

        if (end * end == input)
            return end;
        else
            ;

        while (end - beginning > 1 )
        {
            middle = (end+beginning) / 2;

            if (middle * middle > input)
                end = middle;
            else if (middle * middle < input)
                beginning = middle;
            else
                return middle;
        }
        result=beginning;
        
        

        double x = 1.0;
        while (x > 0.00000000001)
        {
            x = x / 10;
            end = 9, beginning = 1;

            if ((end * x + result) * (end * x + result) == input)
                return (end * x + result);

            else if ((beginning * x + result) * (beginning * x + result) == input)
                return (beginning * x + result);
            else
                ;

            while (end - beginning > 1)
            {
                middle = (end+beginning) / 2;

                if ((middle * x + result) * (middle * x + result) > input)
                    end = middle;
                else if ((middle * x + result) * (middle * x + result) < input)
                    beginning = middle;
                else
                    return (middle * x + result);
            }

            result = result + beginning * x;
        }
        return result;
    }