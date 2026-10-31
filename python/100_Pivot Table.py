import pandas as pd

df = pd.read_csv("./python/student.csv")

pivot = pd.pivot_table(
    df,
    values="Marks",
    index="Department",
    columns="Gender",
    aggfunc="mean"
)

print("Pivot Table:")
print(pivot)

# Total marks department-wise and gender-wise
print(pd.pivot_table(
    df,
    values="Marks",
    index="Department",
    columns="Gender",
    aggfunc="sum"
))

# Maximum marks department-wise
print(pd.pivot_table(
    df,
    values="Marks",
    index="Department",
    aggfunc="max"
))

# Count students department-wise and gender-wise
print(pd.pivot_table(
    df,
    values="StudentID",
    index="Department",
    columns="Gender",
    aggfunc="count",
    fill_value=0
))

####  OUTPUT

# Pivot Table:
# Gender                  Female  Male
# Department                          
# Computer Science          92.5  80.5
# Information Technology    57.0  39.0
# Mathematics               92.0  81.0
# Physics                   88.0  32.0
# Gender                  Female  Male
# Department                          
# Computer Science           185   161
# Information Technology      57    39
# Mathematics                 92    81
# Physics                     88    32
#                         Marks
# Department                   
# Computer Science           95
# Information Technology     57
# Mathematics                92
# Physics                    88
# Gender                  Female  Male
# Department                          
# Computer Science             2     2
# Information Technology       1     1
# Mathematics                  1     1
# Physics                      1     1