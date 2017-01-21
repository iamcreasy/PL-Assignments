program main
  implicit none
  character (len=100):: line
  integer :: i, length

  ! Ask for input string
  write(*,'(A)', advance="no") "Enter String : "
  read(*,'(A)') line

  ! Get the size of the string excluding the trailing empty spaces
  length = len_trim(line)

  ! call getMorseCode for every character in the input string
  write(*,'(A)', advance="no") "Morse code : "
  do i = 1, length
    call getMorseCode(line(i:1))
  end do

stop
end

! print morse code for every character it gets as an argument
subroutine getMorseCode(i)
    implicit none
    character :: i

    select case (i)
        case('A')
            write(*,'(A)', advance="no") ".- "
        case('B')
            write(*,'(A)', advance="no") "-... "
        case('C')
            write(*,'(A)', advance="no") "-.-. "
        case('D')
            write(*,'(A)', advance="no") "-.. "
        case('E')
            write(*,'(A)', advance="no") ". "

        case('F')
            write(*,'(A)', advance="no") "..-. "
        case('G')
            write(*,'(A)', advance="no") "--. "
        case('H')
            write(*,'(A)', advance="no") ".... "
        case('I')
            write(*,'(A)', advance="no") ".. "
        case('J')
            write(*,'(A)', advance="no") ".--- "

        case('K')
            write(*,'(A)', advance="no") "-.- "
        case('L')
            write(*,'(A)', advance="no") ".-.. "
        case('M')
            write(*,'(A)', advance="no") "-- "
        case('N')
            write(*,'(A)', advance="no") "-. "
        case('O')
            write(*,'(A)', advance="no") "--- "

        case('P')
            write(*,'(A)', advance="no") ".--. "
        case('Q')
            write(*,'(A)', advance="no") "--.- "
        case('R')
            write(*,'(A)', advance="no") ".-. "
        case('S')
            write(*,'(A)', advance="no") "... "
        case('T')
            write(*,'(A)', advance="no") "- "

        case('U')
            write(*,'(A)', advance="no") "..- "
        case('V')
            write(*,'(A)', advance="no") "...- "
        case('W')
            write(*,'(A)', advance="no") ".-- "
        case('X')
            write(*,'(A)', advance="no") "-..- "
        case('Y')
            write(*,'(A)', advance="no") "-.-- "

        case('Z')
            write(*,'(A)', advance="no") "--.. "

        case('1')
            write(*,'(A)', advance="no") ".---- "
        case('2')
            write(*,'(A)', advance="no") "..--- "
        case('3')
            write(*,'(A)', advance="no") "...-- "
        case('4')
            write(*,'(A)', advance="no") "....- "
        case('5')
            write(*,'(A)', advance="no") "..... "

        case('6')
            write(*,'(A)', advance="no") "-.... "
        case('7')
            write(*,'(A)', advance="no") "--... "
        case('8')
            write(*,'(A)', advance="no") "---.. "
        case('9')
            write(*,'(A)', advance="no") "----. "
        case('0')
            write(*,'(A)', advance="no") "----- "

        case(' ')
            write(*,'(A)', advance="no") " "
        case default
            write(*,'(A)', advance="no") "Unknowns character"
    end select

end subroutine getMorseCode
