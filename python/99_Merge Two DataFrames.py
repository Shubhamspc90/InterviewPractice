import pandas as pd

# First DataFrame
df1 = pd.read_csv("./python/student.csv")

# Select student details
df1 = df1[["StudentID", "Name", "Department"]]

# Second DataFrame
df2 = pd.DataFrame({
    "StudentID": [101, 102, 103, 104, 105],
    "Course": ["Python", "Java", "Python", "SQL", "Java"],
    "Fees": [5000, 6000, 5000, 4000, 6000]
})

print("First DataFrame:")
print(df1)

print("\nSecond DataFrame:")
print(df2)

# Merge both DataFrames
merged_df = pd.merge(df1, df2, on="StudentID", how="inner")

print("\nMerged DataFrame:")
print(merged_df)




# All rows from left DataFrame
pd.merge(df1, df2, on="StudentID", how="left")

# All rows from right DataFrame
pd.merge(df1, df2, on="StudentID", how="right")

# All rows from both DataFrames
pd.merge(df1, df2, on="StudentID", how="outer")


### OUTPUT
# First DataFrame:
#    StudentID          Name              Department
# 0        101  Aarav Sharma        Computer Science
# 1        102   Priya Verma             Mathematics
# 2        103   Rahul Singh        Computer Science
# 3        104  Ananya Gupta                 Physics
# 4        105  Vikram Patel  Information Technology
# 5        106   Neha Kumari        Computer Science
# 6        107   Arjun Mehta             Mathematics
# 7        108   Sneha Yadav  Information Technology
# 8        109     Rohan Das                 Physics
# 9        110     Isha Khan        Computer Science

# Second DataFrame:
#    StudentID  Course  Fees
# 0        101  Python  5000
# 1        102    Java  6000
# 2        103  Python  5000
# 3        104     SQL  4000
# 4        105    Java  6000

# Merged DataFrame:
#    StudentID          Name              Department  Course  Fees
# 0        101  Aarav Sharma        Computer Science  Python  5000
# 1        102   Priya Verma             Mathematics    Java  6000
# 2        103   Rahul Singh        Computer Science  Python  5000
# 3        104  Ananya Gupta                 Physics     SQL  4000
# 4        105  Vikram Patel  Information Technology    Java  6000