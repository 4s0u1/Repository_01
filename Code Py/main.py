import math
n = int(input())
sc = 0.0
sd = 0.0
j = 1 
for i in range(1,n+1): 
    sc = math.sqrt(3 + sc)
    sd = sd + j*i
    j=j*i
print('%.3f' % sc)
print('%.3f' % sd)