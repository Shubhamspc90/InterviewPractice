import pandas as pd

df = pd.read_csv("student.csv")

print("Original DataFrame:")
print(df.head())

# Delete the Attendance column
df = df.drop("Attendance", axis=1)

print("\nDataFrame after deleting Attendance:")
print(df.head())