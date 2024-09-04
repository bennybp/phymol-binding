
program CallAverage
    interface
        function average_3(a, b, c) bind(C) result(average_3)
            use iso_c_binding
            implicit none
        
            real(c_double), intent(in), value :: a, b, c
            real(c_double) :: average_3
        end function average_3
        
        function average(v, count) bind(C) result(average)
            use iso_c_binding
            implicit none
        
            integer(c_int), intent(in), value :: count
            real(c_double), intent(in) :: v(count)
            real(c_double) :: average
        end function average
    end interface

    double precision :: avg, a, b, c, v(4)

    a = 1.0d0
    b = 2.0d0
    c = 10.0d0
    v(1) = 10.0d0;
    v(2) = 20.0d0;
    v(3) = 30.0d0;
    v(4) = 40.0d0;

    avg = average_3(a, b, c)
    write(*, *) "average_3", avg

    avg = average(v, 4)
    write(*, *) "average", avg

end program CallAverage
