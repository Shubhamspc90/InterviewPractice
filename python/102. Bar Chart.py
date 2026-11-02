# Used for category comparison.

import matplotlib.pyplot as plt

subjects = ["Python","Java","C++"]
marks = [90,80,85]

plt.bar(subjects, marks)

plt.title("Student Marks")

plt.show()