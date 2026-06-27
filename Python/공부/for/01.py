total = 0
subjects = [90, 85, 78, 92, 88, 95]
for score in subjects:
    total += score
average = total / len(subjects)
print("총점 : %d, 평균 : %.2f" % (total, average))