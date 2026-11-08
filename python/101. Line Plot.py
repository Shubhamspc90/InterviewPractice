# Used to show trends over time.

import matplotlib.pyplot as plt

x = [1,2,3,4,5]
y = [10,20,30,40,50]

plt.plot(x, y)

plt.title("Line Plot")
plt.xlabel("X Axis")
plt.ylabel("Y Axis")

plt.show()