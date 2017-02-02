with Ada.Text_IO; use  Ada.Text_IO;
with Ada.Integer_Text_IO; use  Ada.Integer_Text_IO;
with Ada.Float_Text_IO; use  Ada.Float_Text_IO;

procedure mergeandsort is
	package IO renames Ada.Text_IO;
	package I_IO renames Ada.Integer_Text_IO;
	package F_IO renames Ada.Float_Text_IO;

   type float_list is array (Natural range <>) of float;         
   arrayA : float_list(0..100);
   arrayB : float_list(0..100);
   merge : float_list(0..100);
   arrayAcount : Integer ;
   arrayBcount : Integer ;
   
   temp : float;   
   count : integer;
   mergeCount : integer;
   k : integer;

begin	
	-- arrayA	
   IO.put("Enter length of first array ");
   I_IO.get(arrayAcount);         
	for i in 0 .. arrayAcount-1 loop
		F_IO.get(temp);
		arrayA(i) := temp;
	end loop;	
   IO.put("Enter length of second array ");
   I_IO.get(arrayBcount);        
	for i in 0 .. arrayBcount-1 loop
		F_IO.get(temp);
		arrayB(i) := temp;
	end loop;
	
	-- arrayB
	IO.put("Contents of first array ");
	for i in 0 .. arrayAcount-1 loop
		F_IO.Put(arrayA(i), Fore => 5, Aft => 3, Exp => 2);		
	end loop;	
	new_line;
	IO.put("Contents of second array ");
	for i in 0 .. arrayBcount-1 loop
		F_IO.Put(arrayB(i), Fore => 5, Aft => 3, Exp => 2);		
	end loop;
	new_line;
	
	-- merge
	mergeCount := 0;
	for i in 0 .. arrayBcount-1 loop
		merge(mergeCount) := arrayB(i);
		mergeCount := mergeCount + 1;
	end loop;	
		
	count := 0;
	for i in 0 .. arrayAcount-1 loop
		for j in 0 .. arrayBcount-1 loop
			if arrayA(i) /= arrayB(j) then
				count := count + 1;								
			end if;
		end loop;
		if count = arrayBcount then
			merge(mergeCount) := arrayA(i);
			mergeCount := mergeCount + 1;				
		end if;
		count := 0;
	end loop;
	
	
	-- sort
	IO.put("Merged ");
	for i in 0 .. mergeCount-1 loop
		F_IO.put(merge(i));
	end loop;
	new_line;
	
	for i in 1 .. mergeCount-1 loop		
		k := i;
		
		while k > 0 and then merge(k-1) > merge(k) loop
			temp := merge(k);
			merge(k) := merge(k-1);
			merge(k-1) := temp;
			
			k := k - 1;			
		end loop;
	end loop;
	
	IO.put("Sorted ");
	for i in 0 .. mergeCount-1 loop
			F_IO.put(merge(i));
	end loop;
	
end mergeandsort;