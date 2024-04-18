def main():
    input_string = input("Enter a string: ")
    input_string = input_string.lower()  # Convert the input string to lowercase
    words = input_string.split()  # Split the string into words

    unique_words = set(words)  # Create a set to store unique words

    print("Unique words in the input string:")
    for word in unique_words:
        print(word)

if __name__ == "__main__":
    main()
