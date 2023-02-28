# Nama file: pangkat3_v2.py
# Pembuat: Muhamad Aditya Yusuf
# Tanggal: 30 Agustus 2021
# Deskripsi: menghitung nilai pangkat 3 dari sebuah masukan integer melalui fungsi antara

# Definisi dan spesifikasi dari fungsi pangkat3 (versi 2) bernama fx3v2(x) adalah:
# fx2 : integer --> integer
#   fx3v2(x) menghitung pangkat dua dari x, sebuah bilangan integer

# Realisasi
def fx2(x):
    return(x*x)

def fx3v2(x):
    return(x*fx2(x))

# Aplikasi
print(fx3v2(4))
print(fx3v2(4+2))