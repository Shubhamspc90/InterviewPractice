# Used to show percentage distribution.

import matplotlib.pyplot as plt

labels = ["Python","Java","C++"]
sizes = [50,30,20]

plt.pie(sizes, labels=labels, autopct="%1.1f%%")

plt.show()