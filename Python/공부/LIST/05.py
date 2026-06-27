greets = ("morning", "afternoon", "evening")
print("noon" in greets)
print("afternoon" in greets)

scores = [90, 85, 78, 92, 88, 95]
print(77 in scores)
print(92 in scores)

print(greets.index("afternoon"))
print(scores.index(92))

print(sorted(scores))
print(scores)
print(sorted(scores, reverse=True))
print(scores.sort())