def fib_search(arr: list[int], x: int, n: int) -> int:

    Fib2 = 0  # (m-2)'th Fibonnaci no
    Fib1 = 1    # (m-1)'th Fibonnaci no
    FibM = Fib1 + Fib2  # m'th Fibonnaci

    # FibM is going to store the smallest Fibonnaci
    # number greater than or equals to 10
    while (FibM < n):
        Fib2 = Fib1
        Fib1 = FibM
        FibM = Fib1 + Fib2

        offset = -1

    while (FibM > 1):

        i = min(offset+Fib2, n-1)

        # New FibM becomes the m-1'th Fibonacci no, and FibM is moved backward
        if (arr[i] < x):
            FibM = Fib1  # New m'th Fibonacci no
            Fib1 = Fib2  # New (m-1)'th Fibonacci no
            Fib2 = FibM - Fib1  # New (m-2)'th Fibonacci no
            offset = i

        # New FibM becomes the m-2'th Fibonacci no, and FibM is moved backward by 2 steps backwards
        elif (arr[i] > x):
            FibM = Fib2  # New m'th Fibonacci no
            Fib1 = Fib1 - Fib2  # New (m-1)'th Fibonacci no
            Fib2 = FibM - Fib1  # New (m-2)'th Fibonacci no

        else:
            return i

    # comparing last element with x
    if Fib1 and arr[n - 1] == x:
        return n - 1

    return -1


if __name__ == "__main__":
    ar = [10, 13, 15, 26, 28, 30, 50, 56, 58]
    n = len(ar)
    key = 30

    ans = fib_search(ar, key, n)
    print(ans)
