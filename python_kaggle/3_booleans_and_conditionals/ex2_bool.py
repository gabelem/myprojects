def to_smash(total_candies):
    if total_candies == 1:
        print("Splitting", total_candies, "candy")
    else:
        print("Splitting", total_candies, "candies")
        return total_candies % 3

to_smash(1)