student_grades = [
    {"name": "Alice", "score": 85},
    {"name": "Bob", "score": 92},
    {"name": "Charlie", "score": 78},
    {"name": "David", "score": 89},
    {"name": "Eve", "score": 95}
]

total_score = sum(student['score'] for student in student_grades)
average_score = total_score / len(student_grades)

print(f"Average Score: {average_score}")
