if __name__ == '__main__':
    python_students = []
    grade = []
    for i in range(int(input())):
        name = input()
        score = float(input())
        python_students.append([name, score])
        grade.append(score)
    grade = sorted(set(grade))
    el = grade[1]
    name = []
    for item in python_students:
        if item[1] == el:
            name.append(item[0])
    for j in sorted(name):
        print(j)



