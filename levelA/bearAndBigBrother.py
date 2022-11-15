def hello(n1,n2):
    i = 0
    if n1 < n2 :
        while True:
            if n1 > n2:
                return i
            n1*=3 
            n2*=2
            i+=1

print(hello(1,1))
