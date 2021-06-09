function primeNumbers(n) {
    for (let counter = 1; counter <= n; counter++)


    {
        let not_prime = false;


        for (let div = 2; div <= (counter - 1); div++)

        {
            if (counter % div === 0)
            {not_prime = true;}
        }

        if (not_prime === false)
        {console.log(counter);}
    }
}

primeNumbers(7)