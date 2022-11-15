def lemonadeChange(bills):
    '''    lit=[]
    for i in bills:
        if i == 5:
                lit.append(5)
        elif i == 10:
            if lit.count(5) == 0:
                return False 
            else: 
                lit.remove(5)
                lit.append(10) 
        else:
            if lit.count(5) == 0:
                return False
            elif lit.count(5) <3 and lit.index(5):
                return False
            else :
                lit.remove(5)
                lit.remove(10)
    return True
    '''
    lit=[]
    for i in bills:
            if i == 5:
                lit.append(5)
            elif i == 10:
                if lit.count(5) == 0:
                    return False
                else:
                    lit.remove(5)
                    lit.append(10)
            else:
                if lit.count(5) == 0:
                    return False
                elif lit.count(5) <3 and lit.index(5):
                    return False
                else :
                    if lit.count(10) == 0 and lit.count(5) > 2:
                        lit.remove(5)
                        lit.remove(5)
                        lit.remove(5)
                    elif lit.count(10)!= 0 and lit.count(5)>=1:
                        lit.remove(5)
                        lit.remove(10)
    return True

print(lemonadeChange([5,5,5,10,5,5,10,20,20,20]))

