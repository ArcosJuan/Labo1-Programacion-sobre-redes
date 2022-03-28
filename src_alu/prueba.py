def decompose(number):
    """ Returns the list of prime numbers 
        in which the given number can be decomposed. 
    """

    factors = [int(number)]
    while True:

        decomposed_factors=list()
        for factor in factors:

            residing = int(factor**(1/2))
            print(f"residing = {residing} factor: {factor} factor**(1/2): {factor**(1/2)}")
            for n in range(residing, 1, -1):
                if factor % n == 0:
                    decomposed_factors.extend([n, factor // n])
                    break

            else:
                print(n,factor) 
                decomposed_factors.append(int(factor))
            
        if factors == decomposed_factors: return factors

        factors = decomposed_factors


print(decompose(input("aca: ")))