import math
x = float(input())
if x > 1:
    print('%.2f' %(math.sqrt(x*x - 1)))
elif x >= -1:
    print('%.2f' %(6 - 2 * x))
else:
    print('0.00');
if x > 2:
    print('%.2f' %(x*x+1))
elif x >= -2:
    print('%.2f' %(2*x -1))
else:
    print('%.2f' %(6-5*x))