"""Display First 5 Rows"""

import pandas as pd

df = pd.read_csv("./python/student.csv")

print(df.head())