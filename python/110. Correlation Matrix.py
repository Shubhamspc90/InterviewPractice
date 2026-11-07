# Used in Data Science and ML.

import pandas as pd
import seaborn as sns
import matplotlib.pyplot as plt

data = {
    "Math":[90,80,70,60],
    "Science":[88,78,68,58],
    "English":[85,75,65,55]
}

df = pd.DataFrame(data)

corr = df.corr()

sns.heatmap(corr, annot=True)

plt.show()