with Ada.Text_IO,Ada.Strings.Unbounded, Ada.Strings.Unbounded.Text_IO; 

use Ada.Text_IO;
procedure hello is

package IO renames Ada.Text_IO;
package SU renames Ada.Strings.Unbounded;
package SU_IO renames Ada.Strings.Unbounded.Text_IO;

input : SU.Unbounded_String;
i : integer;

procedure func (c : character) is
begin
		if( c = 'A') then
            IO.put(".- ");            
        elsif( c = 'B') then
            IO.put("-... ");            
        elsif( c = 'C') then
            IO.put("-.-. ");            
        elsif( c = 'D') then
            IO.put("-.. ");
        elsif( c = 'E') then
            IO.put(". ");
        elsif( c = 'F') then
            IO.put("..-. ");
        elsif( c = 'G') then
            IO.put("--. ");
        elsif( c = 'H') then
            IO.put(".... ");
        elsif( c = 'I') then
            IO.put(".. ");
        elsif( c = 'J') then
            IO.put(".--- ");
        elsif( c = 'K') then
            IO.put("-.- ");
        elsif( c = 'L') then
            IO.put(".-.. ");
        elsif( c = 'M') then
            IO.put("-- ");
        elsif( c = 'N') then
            IO.put("-. ");
        elsif( c = 'O') then
            IO.put("--- ");
        elsif( c = 'P') then
            IO.put(".--. ");
        elsif( c = 'Q') then
            IO.put("--.- ");
        elsif( c = 'R') then
            IO.put(".-. ");
        elsif( c = 'S') then
            IO.put("... ");
        elsif( c = 'T') then
            IO.put("- ");
        elsif( c = 'U') then
            IO.put("..- ");
        elsif( c = 'V') then
            IO.put("...- ");
        elsif( c = 'W') then
            IO.put(".-- ");
        elsif( c = 'X') then
            IO.put("-..- ");
        elsif( c = 'Y') then
            IO.put("-.-- ");
        elsif( c = 'Z') then
            IO.put("--.. ");
			
        elsif( c = '1') then
            IO.put(".---- ");
        elsif( c = '2') then
            IO.put("..--- ");
        elsif( c = '3') then
            IO.put("...-- ");
        elsif( c = '4') then
            IO.put("....- ");
        elsif( c = '5') then
            IO.put("..... ");
        elsif( c = '6') then
            IO.put("-.... ");
        elsif( c = '7') then
            IO.put("--... ");
        elsif( c = '8') then
            IO.put("---.. ");
        elsif( c = '9') then
            IO.put("----. ");
        elsif( c = '0') then
            IO.put("----- ");
            
        elsif( c = ' ') then
            IO.put("  ");            
        else
            IO.put("Invalid character ");
		end if;
end func;

begin
   SU_IO.get_line(input);
	
   for j in 1 .. SU.length(input) loop
		func(SU.element(input, j));		
   end loop;
end Hello;