#include <iostream>

int main()
{
    double decpounds;
    int pounds, shillings, pence;

    std::cout << "Enter decimal pounds: ";
    std::cin >> decpounds;

    pounds = static_cast<int>(decpounds);

    double frac = decpounds - pounds;
    int total_old_pence = static_cast<int>(frac * 240 + 0.5); // rounding

    shillings = total_old_pence / 12;
    pence = total_old_pence % 12;

    std::cout << "Equivalent in old notation = "
              << u8"\u00A3" << pounds << "."
              << shillings << "."
              << pence << '\n';

    return 0;
}
