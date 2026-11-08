import matplotlib.pyplot as plt

x = [1,2,3,4,5]

y1 = [10,20,30,40,50]
y2 = [5,10,15,20,25]

plt.plot(x, y1, label="Sales")
plt.plot(x, y2, label="Profit")

plt.legend()

plt.show()