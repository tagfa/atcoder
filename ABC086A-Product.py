'''
シカのAtCoDeerくんは二つの正整数 a,b を見つけました。 a と bの積が偶数か奇数か判定してください。
'''

a, b = map(int, input().split())
if (a*b)%2==0:
    print("Even")
else:
    print("Odd")
