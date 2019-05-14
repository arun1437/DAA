def insertion_sort(l):
    for i in range(1, len(l)):
        j = i-1
        key = l[i]
        while (l[j] > key) and (j >= 0):
           l[j+1] = l[j]
           j -= 1
        l[j+1] = key
    print(l)
import random,time
alist=[random.randint(0,100) for i in range(10)]
start=time.time()
insertion_sort(alist)
end=time.time()
print(end-start,"Seconds")
print(alist)
