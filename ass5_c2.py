def reverse_list(input_list):
    reversed_list = []
    for item in input_list:
        reversed_list.insert(0, item)  # Insert each item at the beginning of the reversed list
    return reversed_list

def main():
    user_input = input("Enter a list of elements separated by spaces: ")
    input_list = user_input.split()  # Split the input into a list of elements

    reversed_result = reverse_list(input_list)
    
    print("Original list:", input_list)
    print("Reversed list:", reversed_result)

if __name__ == "__main__":
    main()
