# Used to detect outliers.

import seaborn as sns
import matplotlib.pyplot as plt

data = [10,20,30,40,50,100]

sns.boxplot(x=data)

plt.show()