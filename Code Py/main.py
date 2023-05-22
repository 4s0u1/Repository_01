import array as arr
n = int(input())
m = n
a = arr.array('i', []) 
kiemtra = False
while m > 0:
    if m % 10 != 0:
        a.append(int(m % 10))
        if m % 10 != 1:
            kiemtra = True
    m = m // 10
tong = 0
j = 0
while tong < n and kiemtra == True:
    tong = 0
    for i in a:
        tong += i ** j
    j += 1
if tong == n or n == 1:
    print('co')
else:
    print('khong')