import seaborn as sns
import matplotlib.pyplot as plt

tips = sns.load_dataset("tips") # Loads Seaborn's built-in tips dataset

sns.countplot(x="day", data=tips)

plt.show()