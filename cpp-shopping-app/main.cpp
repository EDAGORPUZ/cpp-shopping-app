#include <iostream>
#include <math.h>
#include <locale.h>
#include <fstream>

using namespace std;

/*
    Menü
    1- Firma hakkında
    2-Ürün inceleme ve alısveris
    3 - cikis
    Seciminizi yapiniz
*/

int urunler()
{
    struct urun
    {
        string markacik;
        float fiyat;
    };

    urun marka1 = { "Lenovo İdeapad - İşlemcisi iyi olan bir laptoptur.", 150 };
    urun marka2 = { "hp victus - İşlemcisi kötü olan şarji az giden bir laptoptur.", 20 };
    int sepettutari = 0;
    string sepetismi[5];

    while (true)
    {
        int secim = 0;
        cout << "1-" << marka1.markacik << ":" << marka1.fiyat << endl;
        cout << "2-" << marka2.markacik << ":" << marka2.fiyat << endl;
        cout << "3- Sepet görüntüle" << endl;
        cout << "4- Ana menüye dön" << endl;
        cout << "5- alisverisi tamamla" << endl;
        cout << "seciminizi yapiniz" << endl;
        cin >> secim;
        switch (secim)
        {
        case 1:
            sepetismi[0] = "Lenovo idepad : 150 tl";
            sepettutari = sepettutari + marka1.fiyat;
            break;
        case 2:
            sepetismi[1] = "Hp victus : 20 tl";
            sepettutari = sepettutari + marka2.fiyat;
            break;
        case 3:
            for (int i = 0; i < 2; i++)
            {
                cout << sepetismi[i] << endl;
            }
            cout << sepettutari << endl;
            break;
        case 4:
            cout << "ana menuye yönlendiriliyosunuz" << endl;
            return 0;
        case 5:
            cout << "alisverisi tamamladiniz" << endl;
            cout << "toplamtutar: " << sepettutari << endl;
            int n;
            cout << "taksit yapmak istediğiniz sayiyi giriniz---- 0 - 12 arasi";
            cin >> n;
            if (n < 12 && n > 0)
            {
                float sonuc = sepettutari / n;
                cout << "ödeyeceğiniz aylik tutar :" << sonuc << endl;
            }
            else
            {
                cout << "yanlıs taksit sayisi sectiniz" << endl;
            }
            cout << "alısveris icin tesekkur ederiz faturanız fatura.txt dosyasına eklenmiştir." << endl;

            break;
        default:
            cout << "Hatali secim yaptiniz. Lutfen tekrar deneyiniz." << endl;
            break;
        }

    }

    return 0;
}

int calisanlar()
{
    struct calisan
    {
        string isim;
        string eposta;
        int telefon;
    };

    calisan sahis1 = { "Furkan UZUN - Yazilimci", "fuzun096@gmail.com", 123 };
    calisan sahis2 = { "Eda Görpüz -  Yazilimci", "edagorpuz@gmail.com", 234 };
    calisan sahis3 = { "Ziya Coşğun- Yazilimci", "ziya@gmail.com", 345 };
    calisan sahis4 = { "Enver Karaca - Yazilimci", "enver@gmail.com", 456 };
    calisan sahis5 = { "Nasuh Erdem - Yazilimci", "nasuh@gmail.com", 123 };

    while (true)
    {
        cout << "1." << sahis1.isim << endl;
        cout << "2." << sahis2.isim << endl;
        cout << "3." << sahis3.isim << endl;
        cout << "4." << sahis4.isim << endl;
        cout << "5." << sahis5.isim << endl;
        cout << "6." << "Ana menüye dön" << endl;
        cout << "ayrintili bilgi icin calisan secimi yapiniz" << endl;
        int secim;
        cin >> secim;
        switch (secim)
        {
        case 1:
            cout << "calisan:" << sahis1.isim << endl;
            cout << "eposta:" << sahis1.eposta << endl;
            cout << "telefon:" << sahis1.telefon << endl;
            break;

        case 2:
            cout << "calisan:" << sahis2.isim << endl;
            cout << "eposta:" << sahis2.eposta << endl;
            cout << "telefon:" << sahis2.telefon << endl;
            break;
        case 3:
            cout << "calisan:" << sahis3.isim << endl;
            cout << "eposta:" << sahis3.eposta << endl;
            cout << "telefon:" << sahis3.telefon << endl;
            break;
        case 4:
            cout << "calisan:" << sahis4.isim << endl;
            cout << "eposta:" << sahis4.eposta << endl;
            cout << "telefon:" << sahis4.telefon << endl;
            break;
        case 5:
            cout << "calisan:" << sahis5.isim << endl;
            cout << "eposta:" << sahis5.eposta << endl;
            cout << "telefon:" << sahis5.telefon << endl;
            break;
        case 6:
            cout << "Ana menuye donuluyor..." << endl;
            return 0; // Programı sonlandırıyoruz.
        default:
            cout << "Hatali secim yaptiniz. Lutfen tekrar deneyiniz." << endl;
        }
    }
    return 1;
}

int main()
{
    setlocale(LC_ALL, "Turkish");

    while (true)
    {
        int secim = 0;

        cout << "Menü:" << endl;
        cout << "1 - Firma hakkinda" << endl;
        cout << "2 - Ürün inceleme ve Alisveris" << endl;
        cout << "3 - Cikis yapiniz" << endl;
        cin >> secim;
        switch (secim)
        {
        case 1:
            calisanlar();
        case 2:
            urunler();
        case 3:
            cout << "güle güle" << endl;
            return 0;
        }
    }

}