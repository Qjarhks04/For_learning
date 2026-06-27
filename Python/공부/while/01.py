counter = 1
while counter <= 10:
    print(counter)
    counter += 1

total = 0
index = 0
subjects = [90, 85, 78, 92, 88, 95]
while index < len(subjects):
    total += subjects[index]
    index += 1

average = total / len(subjects)
print("총점 : %d, 평균 : %.2f" % (total, average))