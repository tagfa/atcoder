'''
H 行 W列の白色のマス目があります。
あなたは h個の行と w個の列を選び、選んだ行または列に含まれるマス目を全て黒色で塗りつぶします。
白色のマス目はいくつ残るでしょうか。
なお、残る白色のマス目の数は行や列の選び方によらないことが証明できます。
'''

H, W = map(int,input().split())
h, w = map(int,input().split())
print(H*W-(h*W+H*w-h*w))