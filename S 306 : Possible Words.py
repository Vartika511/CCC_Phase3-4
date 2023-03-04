def generate_words(code, index, result, words):
    if index >= len(code):
        words.append(result)
        return

    current = int(code[index])
    generate_words(code, index+1, result+chr(current+64), words)

    if index+1 < len(code):
        current = int(code[index] + code[index+1])
        if current <= 26:
            generate_words(code, index+2, result+chr(current+64), words)

code = input().strip()
words = []
generate_words(code, 0, "", words)
for word in sorted(words):
    print(word)
