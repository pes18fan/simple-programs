program concat
    character fname * 10, lname * 10, full * 20

    write(*, *)'Enter first name'
    read(*, *)fname
    write(*, *)'Enter last name'
    read(*, *)lname

    full = fname // ' ' // lname

    write(*, *)'Full name is ', full
end program concat
