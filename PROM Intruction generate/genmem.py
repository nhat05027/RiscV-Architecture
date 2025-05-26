import os
import numpy as np

lenAddr = 9

with open('addr.txt', 'r') as file:
    Addrarray = [line.strip() for line in file]
with open('mem.txt', 'r') as file:
    Memarray = [line.strip() for line in file]


# print(Memarray)
# print(Addrarray)

f = open('rom.mem', 'w')

for i in range(512):
    tempaddr = np.binary_repr(i, width=lenAddr)
    invalid = 1
    doub = 0
    for k, addr in enumerate(Addrarray):
        count = 0
        for j, t in enumerate(tempaddr):
            if(t == addr[j] or addr[j] == 'X'):
                count += 1
        if (count == lenAddr):
            f.write(Memarray[k]+'\n')
            invalid = 0
            if (doub>0):
                print(tempaddr)
                print(addr)
            doub +=1
            break
    if (invalid):
        f.write(np.binary_repr(0, width=19)+'\n')
f.close()
