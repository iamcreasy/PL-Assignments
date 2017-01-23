! Student : Quazi Irfan
! Course : CSC-461 Programming Languages (Assignment 1)
! Instructor : Dr. Sung Shin
! Due Date : Jan 23rd, 2017
! File Name : MergeAndSort.f95
!
! Program description :
! This program asks the user to input two list of double numbers.
! For every list the program asks how many numbers there should be in the list, and then it prompts the user that many time to enter those numbers.
! Note that each number has to be entered into a separate line.
! Then the program prints both the lists.
! Then we copy the numbers on the first list that are not repeated on the second list to a new array(narray1).
! Then we merge the second list and new array together in a separate array(merge).
! Finally we feed the merge array in the method insertionSort to sort the number using insertion sort.
! The program terminates by printing the sorted array.
!
! Sample I/O:
!Enter length of first array : 3
!Array element  1 : 1.1
!Array element  2 : 1.2
!Array element  3 : 1.3
!Enter length of second array : 2
!Array element  1 : 2.1
!Array element  2 : 1.2
!First array [  3] :    1.100   1.200   1.300
!Second array [  2] :    2.100   1.200
!Merged and Sorted [  4] :    1.100   1.200   1.300   2.100
!
! Input restriction :
! Each list of double numbers can't contain any repeating numbers.

program main
    implicit none
    integer :: i, j, array1Length, array2Length, notEqual, counter, mergedLength
    real, dimension(:), allocatable :: array1, array2, narray1, merged
    real :: temp

    ! ask for first list of double numbers
    write(*, '(A)', advance = "no")  "Enter length of first array : "
    read *, array1Length
    allocate(array1(array1Length))
    do i = 1, array1Length
        write(*, '(A,I2,A)', advance = "no") "Array element ", i, " : "
        read *, array1(i)
    end do

    ! ask for second list of double numbers
    write(*, '(A)', advance = "no")  "Enter length of second array : "
    read *, array2Length
    allocate(array2(array2Length))
    do i = 1, array2Length
        write(*, '(A,I2,A)', advance = "no") "Array element ", i, " : "
        read *, array2(i)
    end do

    ! print first and second array
    write(*, '(A,I3,A)', advance = "no") "First array [", array1Length, "] : "
    do i = 1, array1Length
        write(*, '(3f8.3)', advance = "no") array1(i)
    end do
    print *, ' '
    write(*, '(A,I3,A)', advance = "no") "Second array [", array2Length, "] : "
    do i = 1, array2Length
        write(*, '(3f8.3)', advance = "no") array2(i)
    end do
    print *, ' '

    ! allocate another array of same size as array1
    allocate(narray1(array1Length))

    counter = 0
    notEqual = 0

    ! add all unique numbers in array1 into narray1, and keep the count using counter variable
    do i = 1, array1Length
        do j = 1, array2Length
            if(array1(i) /= array2(j)) then
                notEqual = notEqual + 1
            end if
        end do
        if(notEqual == array2Length) then
            narray1(counter+1) = array1(i)
            counter = counter + 1
        end if
        notEqual = 0
    end do

    ! allocate merged array with the size of array2 and narray1, and copy all the elements
    mergedLength = counter + array2Length
    allocate(merged(mergedLength))
    do i = 1, array2Length
        merged(i) = array2(i)
    end do
    do i = 1, counter
        merged(array2Length+i) = narray1(i)
    end do

    ! run insertionSort on merged array
    do i = 2, mergedLength
        j = i

        do while(j > 1 .and. merged(j-1) > merged(j))
            temp = merged(j)
            merged(j) = merged(j-1)
            merged(j-1) = temp

            j = j - 1
        end do
    end do

    ! print the sorted array
    write(*, '(A,I3,A)', advance = "no") "Merged and Sorted [" , mergedLength , "] : "
    do i = 1, mergedLength
        write (*,"(3f8.3)",advance="no") merged(i)
    end do

stop
end
