student = {
    "A": 80,
    "B": 60,
    "C": 90,
    "D": 70
}

sorted_dict = dict(
    sorted(student.items(), key=lambda x: x[1])
)

print(sorted_dict)