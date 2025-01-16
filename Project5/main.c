#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/sysctl.h"
#include "driverlib/fpu.h"
#include "driverlib/gpio.h"

int main(void) {
    // Sistem clock hızı 40 MHz olarak ayarlandı
    SysCtlClockSet(SYSCTL_SYSDIV_5 | SYSCTL_USE_PLL | SYSCTL_OSC_MAIN | SYSCTL_XTAL_16MHZ);

    // FPU'yu etkinleştiriliyor
    FPUEnable();
    FPULazyStackingEnable();

    // GPIOF portu etkinleştirildi
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3);

    // Floating point işlemleri
    float value = 0.0f;
    float increment = 0.1f;

    while (1) {
        // LED parlaklık hesaplaması (örnek floating point işlemi)
        value += increment;
        if (value > 1.0f || value < 0.0f) {
            increment = -increment; // Yön değiştir
        }

        // Kırmızı LED parlaklığı için PWM benzeri kontrol
        if (value > 0.5f) {
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, GPIO_PIN_1); // LED açık
        } else {
            GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_1, 0); // LED kapalı
        }

        SysCtlDelay(SysCtlClockGet() / 10); // Bekleme (100 ms)
    }
}
