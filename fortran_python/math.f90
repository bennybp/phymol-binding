function average_3(a, b, c) bind(C)
    use iso_c_binding
    implicit none

    real(c_double), intent(in), value :: a, b, c
    real(c_double) :: average_3

    average_3 = (a+b+c)/3.0d0
end function average_3


function average(v, count) bind(C)
    use iso_c_binding
    implicit none

    integer(c_int), intent(in), value :: count
    real(c_double), intent(in) :: v(count)
    real(c_double) :: average
    integer(c_int) :: i

    average = 0.0d0
    do i = 1 , count
      average = average + v(i)
    end do

    average = average / count
end function average

