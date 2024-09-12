#include <iostream>
#include <cmath>
using namespace std;

// Kamus
struct Balok
{
    int p;
    int l;
    int t;
};

// Deklarasi fungsi
int volumeBalok(int p, int l, int t);
void volumeeBalok(int volume);
int luasBalok(int p, int l, int t);
void luaseBalok(int luas);
int kelilingBalok(int p, int l, int t);
void kelilingeBalok(int keliling);
double diagonalBalok(double p, double l, double t);
void diagonaleBalok(double diagonal);
bool isKubus(Balok balok); 
int main()
{
    const int JUMLAH_BALOK = 3;
    Balok balok[JUMLAH_BALOK];

    int menu = 0;
    int i = 0; // indeks balok

    do
    {
        cout << "==========================" << endl;
        cout << "|          Menu:         |" << endl;
        cout << "|  1. Input Data Balok   |" << endl;
        cout << "|  2. Hitung volume      |" << endl;
        cout << "|  3. Hitung Luas        |" << endl;
        cout << "|  4. Hitung Keliling    |" << endl;
        cout << "|  5. Hitung diagonal    |" << endl;
        cout << "|  6. Keluar             |" << endl;  // Pilihan baru untuk keluar
        cout << "==========================" << endl;
        cout << "     Pilih menu (1-6):    " << endl;

        cin >> menu;

        switch (menu)
        {
        case 1:
            if (i < JUMLAH_BALOK)
            {
                cout << "Masukkan Panjang balok ke-" << i + 1 << ": ";
                cin >> balok[i].p;

                cout << "Masukkan Lebar balok ke-" << i + 1 << ": ";
                cin >> balok[i].l;

                cout << "Masukkan Tinggi balok ke-" << i + 1 << ": ";
                cin >> balok[i].t;

                cout << endl;

                i++; // Pindah ke balok berikutnya
            }
            else
            {
                cout << "Sudah mencapai batas maksimum balok." << endl;
            }
            break;

        case 2:
            if (i > 0)
            {
                int volume = volumeBalok(balok[i - 1].p, balok[i - 1].l, balok[i - 1].t);

                cout << "Volume ";
                if (isKubus(balok[i - 1])) //jika semua sisi sama
                {
                    cout << "kubus";
                }
                else //jika semua sisi berbeda
                {
                    cout << "balok";
                }
                cout << ": ";
                volumeeBalok(volume);
                cout << endl;
            }
            else
            {
                cout << "Belum ada data balok. Silakan input data balok terlebih dahulu." << endl;
            }
            break;
            case 3:
            if (i>0)
            {

                int luas = luasBalok(balok[i - 1].p, balok[i - 1].l, balok[i - 1].t);

                cout << "Luas ";
                if (isKubus(balok[i-1]))
                {
                  cout << "kubus :";
                }
                else
                {
                  cout << "balok :";
                }
                cout << ":";
                luaseBalok(luas);
            }
            else
            {
                cout << "Belum ada data balok. Silakan input data balok terlebih dahulu" << endl;
            }
            break;
        case 4 :
            if (i>0)
            {

                int keliling = kelilingBalok(balok[i - 1].p, balok[i - 1].l, balok[i - 1].t);

                cout << "Keliling ";
                if (isKubus(balok[i-1]))
                {
                    cout << "Kubus";
                }
                else
                {
                    cout << "balok";
                }
                cout << ":";
                kelilingeBalok(keliling);
            }
            else
            {
                cout << "Belum ada data balok. Silakan input data balok terlebih dahulu" << endl;
            }

            break;
        case 5:
            if (i>0)
            {

                double diagonal = diagonalBalok(balok[i - 1].p, balok[i - 1].l, balok[i - 1].t);

                cout << "Diagonal ";
                if (isKubus(balok[i-1]))
                {
                    cout << "Kubus";
                }
                else
                {
                    cout << "Balok";
                }
                cout << ":";
                diagonaleBalok(diagonal);
            }
            else
            {
                cout << "Belum ada data balok. Silakan input data balok terlebih dahulu" << endl;
            }
            break;


        // ... (Case-case lain tetap sama)

        case 6:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Menu tidak valid. Silakan pilih menu yang benar." << endl;
        }

    } while (menu != 6);

    return 0;
}

// deklarasi fungsi

bool isKubus(Balok balok)
{
    return balok.p == balok.l && balok.l == balok.t;
}

// Implementasi fungsi
int volumeBalok(int p, int l, int t)
{
    return p * l * t;
}

void volumeeBalok(int volume)
{
    cout << volume << endl;
}

int luasBalok(int p, int l, int t)
{
    return 2 * (p * l + p * t + l * t);
}

void luaseBalok(int luas)
{
    cout << luas << endl;
}

int kelilingBalok(int p, int l, int t)
{
    return 4 * (p + l + t);
}

void kelilingeBalok(int keliling)
{
    cout << keliling << endl;
}

double diagonalBalok(double p, double l, double t)
{
    return sqrt(pow(p, 2) + pow(l, 2) + pow(t, 2));
}

void diagonaleBalok(double diagonal)
{
    cout << diagonal << endl;
}

