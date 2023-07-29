program si
    real p, t, r, interest

    write(*, *) 'Enter principal, time & rate'
    read(*, *) p, t, r
    interest = (p * t * r) / 100
    write(*, *) 'Simple interest = ', interest
end program si
