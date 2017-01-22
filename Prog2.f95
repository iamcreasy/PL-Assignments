program main
    implicit none
    integer :: i, j, array1Length, array2Length, notEqual, counter, mergedLength
    real, dimension(:), allocatable :: array1, array2, narray1, merged
    real :: temp

!    array1 = (/1.5, 2.2,2.5, 0.5, 7.8, 5.8 /)
!    array2 = (/1.6 /)
!    array1Length = 6
!    array2Length = 1
!    merged = (/1.1, 9.3, 3.2, 5.6, 2.3/)
!    mergedLength = 5

    print *, "# of elements in First Array :"
    read *, array1Length
    allocate(array1(array1Length))
    do i = 1, array1Length
        read *, array1(i)
    end do

    print *, "# of elements in Second Array :"
    read *, array2Length
    allocate(array2(array2Length))

    do i = 1, array2Length
        read *, array2(i)
    end do

    allocate(narray1(array1Length))

    counter = 0
    notEqual = 0

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

    mergedLength = counter + array2Length
    allocate(merged(mergedLength))

    do i = 1, array2Length
        merged(i) = array2(i)
    end do

    do i = 1, counter
        merged(array2Length+i) = narray1(i)
    end do

    do i = 2, mergedLength
        j = i

        do while(j > 1 .and. merged(j-1) > merged(j))
            temp = merged(j)
            merged(j) = merged(j-1)
            merged(j-1) = temp

            j = j - 1
        end do
    end do

    print *, "Merged and sorted array :"
    do i = 1, mergedLength
        write (*,"(3f8.3)",advance="no") merged(i)
    end do

stop
end
