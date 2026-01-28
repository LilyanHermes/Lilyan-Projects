int main();
   // # Input the genome from the user
    genome = input("Enter the genome: ")

    length = len(genome)
    g_count = 0

    //# Check if the length is 23
    if length != 23:
        print("NEGATIVE: Length is not 23.")
    else:
        //# Check if the first letter is 'a'
        if genome[0] != 'a':
            print("Length is 23")
            print("NEGATIVE: First letter is not 'a'.")
        else:
        //    # Check if the last letter is 't'
            if genome[-1] != 't':
                print("Length is 23")
                print("First letter is 'a'")
                print("NEGATIVE: Last letter is not 't'.")
            else:
    //            # Count occurrences of 'g'
                for char in genome:
                    if char == 'g':
                        g_count += 1

  //              # Check if there are exactly 7 'g's
                if g_count != 7:
                    print("First letter is 'a'")
                    print("Last letter is 't'")
                    print("NEGATIVE: Does not contain exactly 7 'g's.")
                else:
//                    # All conditions are met
                    print("First letter: 'a'")
                    print("Last letter: 't'")
                    print("Contains exactly 7 'g's:")
                    print("POSITIVE: All conditions met")

      //              # Additional processing related to 'g' characters can be added here

if __name__ == "__main__":
    main()
