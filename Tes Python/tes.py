def jam_digital(j,m,s,k) :
    if k == "am" :
        return j,m,s,"am"
    elif k== "pm" :
        return (j+12),m,s,"pm"

print(jam_digital(5,5,5,"am"))