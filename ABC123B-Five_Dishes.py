def deltime(x):
    return (int((x+9)/10))*10

def subtime(x):
    return deltime(x)-x

a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

sumtime=deltime(a)+deltime(b)+deltime(c)+deltime(d)+deltime(e)
sumtime -= max([subtime(a),subtime(b),subtime(c),subtime(d),subtime(e)])

print(sumtime)