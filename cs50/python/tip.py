#tip calculator

def main():
    dollars = dollar_to_float()
    percentage = percent_to_float()
    tip = dollars * percentage
    print(f"Leave ${tip:,.2f}")

def dollar_to_float():
   x = input("How much was the meal? ")
   x = x.replace("$", "")
   return float(x)
   

def percent_to_float():
   y = input("What percentage would you like to tip? ")
   y = y.replace("%", "")
   return float(y)/100
  
   
main()


