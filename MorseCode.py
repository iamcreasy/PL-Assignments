# Morse Code

def getMorseCode(char):	        
            if char =='A':
                return ".-"                
            elif char =='B':
                return "-..."           
            elif char =='C':
                return "-.-."
            elif char =='D':
                return "-.."
            elif char =='E':
                return "."
            elif char =='F':
                return "..-."
            elif char =='G':
                return "--."
            elif char =='H':
                return "...."
            elif char =='I':
                return ".."
            elif char =='J':
                return ".---"
            elif char =='K':
                return "-.-"
            elif char =='L':
                return ".-.."
            elif char =='M':
                return "--"
            elif char =='N':
                return "-."
            elif char =='O':
                return "---"
            elif char =='P':
                return ".--."
            elif char =='Q':
                return "--.-"
            elif char =='R':
                return ".-."
            elif char =='S':
                return "..."
            elif char =='T':
                return "-"
            elif char =='U':
                return "..-"
            elif char =='V':
                return "...-"
            elif char =='W':
                return ".--"
            elif char =='X':
                return "-..-"
            elif char =='Y':
                return "-.--"
            elif char =='Z':
                return "--.."

            elif char =='1':
                return ".----"
            elif char =='2':
                return "..---"
            elif char =='3':
                return "...--"
            elif char =='4':
                return "....-"
            elif char =='5':
                return "....."
            elif char =='6':
                return "-...."
            elif char =='7':
                return "--..."
            elif char =='8':
                return "---.."
            elif char =='9':
                return "----."
            elif char =='0':
                return "-----"

            elif char ==' ':
                return " "
            else:
                return "Invalid character"
		
string = raw_input("Enter string ")
print "Mourse Code ",
for s in string:
	print getMorseCode(s),


	