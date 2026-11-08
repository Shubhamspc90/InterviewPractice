# Most asked interview visualization.

import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd

data = pd.DataFrame(
    [[1,2,3],
     [4,5,6],
     [7,8,9]]
)

sns.heatmap(data, annot=True)

plt.show()