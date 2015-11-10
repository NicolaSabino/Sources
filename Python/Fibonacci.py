#implementazione ricorsiva di fibonacci

def Fibonacci(n):
    if n==0 or n==1:
        return 1;
    else:
        return Fibonacci(n-1)+Fibonacci(n-2);
