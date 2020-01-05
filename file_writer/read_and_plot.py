import matplotlib.pyplot as plt

f = open("data.txt", "r")
f = f.read()
lst = f.split('\n')
lst = lst[0:-1]
lst = list(map(int,lst))
plt.plot(lst)
plt.show()
