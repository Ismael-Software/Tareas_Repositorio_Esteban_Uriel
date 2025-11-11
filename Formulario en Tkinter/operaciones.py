# operaciones.py

def serie1(n):
    """Suma de los primeros n números naturales"""
    return sum(range(1, n + 1))


def serie2(n):
    """Serie de números pares: 2 + 4 + 6 + ..."""
    return sum([2 * i for i in range(1, n + 1)])


def serie3(n):
    """Serie factorial: 1! + 2! + 3! + ... + n!"""
    def factorial(x):
        f = 1
        for i in range(1, x + 1):
            f *= i
        return f
    return sum([factorial(i) for i in range(1, n + 1)])
