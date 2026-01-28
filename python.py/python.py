def main():
    str_input = input("Enter the genome: ")
    Length = len(str_input)
    gCount = 0

    if Length != 23:
        print("NEGATIVE: Length is not 23.")
    else:
        if str_input[0] != 'a':
            print("Length is 23")
            print("NEGATIVE: First letter is not 'a'.")
        else:
            if str_input[-1] != 't':
                print("Length is 23")
                print("First letter is 'a'")
                print("NEGATIVE: Last letter is not 't'.")
            else:
                for char in str_input:
                    if char == 'g':
                        gCount += 1

                if gCount != 7:
                    print("First letter is 'a'")
                    print("Last letter is 't'")
                    print("NEGATIVE: Does not contain exactly 7 'g's.")
                else:
                    print("First letter: 'a'")
                    print("Last letter: 't'")
                    print("Contains exactly 7 'g's:")
                    print("POSITIVE: All conditions met")
                    for char in str_input:
                        if char == 'g':
                            pass
                    print()

if __name__ == "__main__":
    main()
