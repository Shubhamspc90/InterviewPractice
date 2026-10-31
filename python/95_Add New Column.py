import pandas as pd

# DataFrame with the exact columns and data shown in your output
df = pd.DataFrame(
    {
        "StudentID": [101, 102, 104, 106, 110],
        "Name": [
            "Aarav Sharma",
            "Priya Verma",
            "Ananya Gupta",
            "Neha Kumari",
            "Isha Khan",
        ],
        "Age": [20, 21, 22, 21, 20],
        "Gender": ["Male", "Female", "Female", "Female", "Female"],
        "Department": [
            "Computer Science",
            "Mathematics",
            "Physics",
            "Computer Science",
            "Computer Science",
        ],
        "Marks": [87, 92, 88, 95, 90],
        "Attendance": [92, 96, 89, 98, 94],
        "City": ["Delhi", "Ghaziabad", "Delhi", "Noida", "Noida"],
        "Passed": [True, True, True, True, True],
    }
)

# Add New Column based on Marks
df["Grade"] = df["Marks"].apply(
    lambda x: "A+" if x >= 90 else ("A" if x >= 80 else "B")
)

print(df)

#  method 2

import pandas as pd

df = pd.read_csv("./python/student.csv")

filtered_df = df[df["Marks"] > 85].copy()

# Grade ki jagah 'Performance' column add kar rahe hain
filtered_df["Performance"] = filtered_df["Marks"].apply(
    lambda x: "Outstanding" if x >= 90 else "Excellent"
)

print("Students who scored more than 85 marks:")
print(filtered_df)