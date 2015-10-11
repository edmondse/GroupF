# The following programming accepts a partial or complete MAC
# address from the user and then returns the vendor back.
# Written by Group F (FSociety), 11-Oct-15, Python v3.4.3, version 1.0

# I CAN'T FIGURE OUT HOW TO DO THE WHOLE POST/GET THING,
# HERE'S THE WORLD'S LAZIEST SOLUTION TO THIS PROBLEM.

import webbrowser

print("Hello and welcome to the Wireshark MAC Address Looker-Upper")

ans = input("Would you like to look up a MAC address vendor? (Y/N): ")

if(ans=='Y' or ans=='y'):
    webbrowser.open('https://www.wireshark.org/tools/oui-lookup.html')
    print("Please be patient, a webpage will be with you shortly...")
elif(ans=='N' or ans=='n'):
    print("Why bother running this program then?")
else:
    print("I don't understand, please try again later.")
