# TM4C123GXL-projects
You can find  here the Tiva C Series Arm Cortex projects I have written.

Proje 1: LCD Ekran Üzerine Bilgi Yazımı
Açıklama
Bu proje, istenilen herhangi bir harf veya kelimeyi LCD ekran üzerine yazdırır
________________________________________
Proje 2: LCD Ekran Üzerinde Zaman Gösterimi
Açıklama
Bu proje, mikrodenetleyiciye bağlı bir LCD ekran üzerinden saat bilgilerini göstermek için zamanlayıcı ve kesme kullanır.
Fonksiyonlar
•	Zamanlayıcı ve Kesme Kullanımı: Her saniye kesme fonksiyonu tetiklenir ve zaman bilgisi güncellenir.
•	LCD Ekran: Zaman bilgisi LCD ekranda gösterilir.
Kullanım
Zaman bilgisi sürekli olarak güncellenir ve 2 satırlı LCD ekranda gösterilir.
________________________________________
Proje 3: UART ile Saat değerinin alınması ve Gönderilmesi LCD Ekran Kullanımı
Açıklama
Bu proje, bilgisayardan seri haberleşme ile elde edilen saatin başlangıç değerinden itibaren saati saniye saniye hesaplayıp LCD ekran üzerinde saat bilgisini göstermemize yarar. Ayrıca bilgisayardan istenildiği herhangi bir zamanda saat değeri UART ile okunabilir.
Fonksiyonlar
•	Kesme Fonksiyonu: Saat, dakika ve saniye bilgileri her saniye güncellenir.
•	LCD Ekran: Saat bilgisi LCD ekranda gösterilir.
Kullanım
Saat her saniye güncellenir ve LCD ekran üzerinde formatlanmış şekilde gösterilir.
________________________________________
Proje 4: UART ile Saat değerinin alınıp ve ADC ile sıcaklık ölçümü yapıldıktan sonra LCD ekrana bilgilerin yazdılmasını sağlar
Açıklama
Bu projede, UART kullanılarak bilgisayardan alınan saat başlangıç değeri ve mikrodenetleyicinin ADC kanalından okunan sıcaklık değeri LCD ekrana yazılır.
Fonksiyonlar
•	UART İletişimi: Sistem saati rUART üzerinden seri olarak alınır.
•	ADC Ölçümü: ADC değerleri okunur ve her gönderimle birlikte iletilir.
Kullanım
UART ile bağlı bir bilgisayar veya cihaz üzerinden gelen komutlarla saat bilgisi sıfırlanabilir veya güncellenebilir.
________________________________________
Proje 5: Floating Point İşlemleri ve LED Parlaklık Kontrolü
Açıklama
Bu proje, Floating Point Unit (FPU) kullanarak floating point hesaplamalar yapar ve bu hesaplamalarla LED parlaklığını kontrol eder.
Fonksiyonlar
•	FPU Kullanımı: Floating point işlemleri ile bir değeri artırır ve azalttıkça LED parlaklığını kontrol eder.
•	PWM Benzeri LED Kontrolü: Kırmızı LED'in parlaklığı, floating point işlemleriyle belirlenen değere göre ayarlanır.
Kullanım
Kırmızı LED, floating point hesaplamaları ile parlaklığını değiştiren bir uygulamadır.
________________________________________
Proje 6: Hibernation Modu ve LED Kontrolü
Açıklama
Bu proje, mikrodenetleyici hibernation moduna girer ve RTC alarmı kullanarak 10 saniye sonra uyanır. Uyanınca LED yeniden yanar.
Fonksiyonlar
•	Hibernation Modu: Mikrodenetleyici düşük güç moduna geçer.
•	RTC Alarmı: Hibernation modundan uyanmak için RTC alarmı kullanılır.
•	LED Kontrolü: Hibernation modundan uyanınca LED'in yanmasını sağlar.
Kullanım
Mikrodenetleyici hibernation moduna geçtikten sonra 10 saniye boyunca uyur ve LED tekrar yanar.
________________________________________
Proje Genel Yapı
Tüm projeler için Tiva C Series TM4C123GH6PM mikrodenetleyicisi kullanılmıştır ve tüm projeler, mikrodenetleyicinin çeşitli özelliklerini kullanarak farklı fonksiyonları yerine getirir. Bu projeler, düşük seviye donanım erişimi ve çeşitli mikrodenetleyici özelliklerini öğrenmek ve kullanmak isteyenler için uygun örnekler sunmaktadır.

