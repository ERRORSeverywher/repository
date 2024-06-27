from cs50 import get_string
import re

def count_letters(text):
    return len([c for c in text if c.isalpha()])

def count_words(text):
    return len(text.split())

def count_sentences(text):
    return len(re.findall(r'[.!?]', text))

def compute_cl_index(letters, words, sentences):
    L = (letters / words) * 100
    S = (sentences / words) * 100
    return round(0.0588 * L - 0.296 * S - 15.8)

text = get_string("Text: ")
letters = count_letters(text)
words = count_words(text)
sentences = count_sentences(text)

index = compute_cl_index(letters, words, sentences)

if index < 1:
    print("Before Grade 1")
elif index >= 16:
    print("Grade 16+")
else:
    print(f"Grade {index}")
