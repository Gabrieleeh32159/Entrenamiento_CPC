gems = {
        "purple": "Power",
        "green": "Time",
        "blue": "Space",
        "orange": "Soul",
        "red": "Reality",
        "yellow": "Mind"
    }



n = int(input())
colors_input = {input() for _ in range(n)}
colors = {key for key in gems.keys()}
diff = colors.difference(colors_input)

print(len(diff))
for color in diff:
    print(gems[color])

