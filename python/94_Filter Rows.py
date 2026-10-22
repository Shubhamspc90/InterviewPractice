"""Display First 5 Rows"""

import pandas as pd

df = pd.read_csv("./python/student.csv")

# Filter students who scored more than 85 marks
filtered_df = df[df["Marks"] > 85]
print("Students who scored more than 85 marks:")
print(filtered_df)
    
