import pandas as pd

df = pd.read_csv("student.csv")

# Create missing values for practice
df.loc[1, "Marks"] = None
df.loc[3, "City"] = None
df.loc[5, "Attendance"] = None

print("DataFrame with missing values:")
print(df)

# Check missing values in each column
print("\nMissing values count:")
print(df.isnull().sum())

# Fill missing Marks with the average
df["Marks"] = df["Marks"].fillna(df["Marks"].mean())

# Fill missing City with the most frequent city
df["City"] = df["City"].fillna(df["City"].mode()[0])

# Fill missing Attendance with the average attendance
df["Attendance"] = df["Attendance"].fillna(
    df["Attendance"].mean()
)

print("\nDataFrame after handling missing values:")
print(df)

# Verify that missing values are handled
print("\nRemaining missing values:")
print(df.isnull().sum())