# Initialize variables to store counts
positive_count = 0
negative_count = 0
zero_count = 0

while True:
    try:
        num = int(input("Enter a number (or 00 to stop): "))
        
        if num == 0:
            break
        elif num > 0:
            positive_count += 1
        elif num < 0:
            negative_count += 1
        else:
            zero_count += 1
    except ValueError:
        print("Invalid input. Please enter a valid number.")

# Display the counts
print("Count of positive numbers:", positive_count)
print("Count of negative numbers:", negative_count)
print("Count of zeros:", zero_count)

