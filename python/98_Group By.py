import pandas as pd

df = pd.read_csv("./python/student.csv")

# Group by Department and calculate average marks
result = df.groupby("Department")["Marks"].mean()

print("Average Marks by Department:")
print(result)

# Count students in each department
print(df.groupby("Department")["StudentID"].count())

# Maximum marks in each department
print(df.groupby("Department")["Marks"].max())

# Minimum marks in each department
print(df.groupby("Department")["Marks"].min())

# Multiple calculations
print(df.groupby("Department")["Marks"].agg(
    ["mean", "max", "min", "count"]
))