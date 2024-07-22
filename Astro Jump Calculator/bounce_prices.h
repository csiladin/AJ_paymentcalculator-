// bounce_prices.h
#ifndef BOUNCE_PRICES_H
#define BOUNCE_PRICES_H

#include <map>
#include <string>

const std::map<std::string, double> BOUNCE_PRICES = {
    {"Backyard Cotton Candy Machines", 10.00},
    {"Event Cotton Candy Machines", 20.00},
    {"Frozen Drink Machines", 10.00},
    {"Popcorn Machines", 10.00},
    {"Sno Cone Machines", 10.00},
    {"18' Dolphin Wave Slide (Dry)", 35.00},
    {"18' Tropical Slide (Dry)", 35.00},
    {"20' Dual Lane Climb and Slide", 60.00},
    {"22' Giant Slide", 60.00},
    {"22' Roaring River Dual Lane Slide (Dry)", 60.00},
    {"22' Tropical Dual Lane Slides", 75.00},
    {"27' Tropical Dual Lane Slides", 90.00},
    {"Atomic Vertical Rush Slide", 90.00},
    {"Blue Ice Dual Lane Dry Slide", 60.00},
    {"Cars Dual Lane Slides", 90.00},
    {"Cliff Hanger Slide", 90.00},
    {"Vertical Rush Slide", 45.00},
    {"20' Fire Rock Ice Dual Lane Water Slide", 55.00},
    {"Crayon 3-n-1 Combo 11' x 13'", 20.00},
    {"Crayon 3-n-1 Combo 15' x 13'", 20.00},
    {"Crayon Ultra Combo with 2 slides", 20.00},
    {"Fun House Deluxe 3-n-1 Combos", 20.00},
    {"Jungle 3-n-1 Combo 11' x 13'", 20.00},
    {"Jungle 3-n-1 Combo 15' x 13'", 20.00},
    {"Mini Castle Jump", 15.00},
    {"Mini Fun House", 20.00},
    {"Under the Sea 3-n-1 Combo 15' x 13'", 20.00},
    {"Under the Sea 3-n-1 Combos 11' x 13'", 20.00},
    {"Mechanical Bull Rental", 90.00},
    {"High Output Generators", 15.00},
    {"Outdoor Movie Screen", 35.00},
    {"Outdoor Movie Screen Package Rental", 90.00},
    {"Standard Generator", 10.00},
    {"Tailgate Speaker Systems", 5.00},
    {"4-N-1 Birthday Cake Combo Rentals", 35.00},
    {"5-N-1 Crayon Playland", 40.00},
    {"5-N-1 Moonbounce Obstacle Combo Rental", 40.00},
    {"Animal Kingdom Safari Playground Rentals", 30.00},
    {"Bounce N Double Dip Castle (Dry)", 30.00},
    {"Buccaneer Pirate Ship Activity Centers", 45.00},
    {"Castle 5-N-1 Activity Center Rental", 40.00},
    {"Crayon Playland Moon Bounce Combo Rental", 40.00},
    {"Dazzling Castle Combo", 35.00},
    {"Disney Frozen 5-n-1 Inflatable Activity Center Rental", 40.00},
    {"Disney Princess 5-n-1 Activity Centers", 40.00},
    {"Fire Truck 3-n-1 Activity Centers", 35.00},
    {"Jumbo Sports Arena", 35.00},
    {"Mickey Mouse Clubhouse 5-n-1 Inflatable Activity Center Rental", 45.00},
    {"Mickey Mouse Park Learning Club Moonbounce Combo Rental", 40.00},
    {"My Little Farm Moonbounce Combo Rental", 30.00},
    {"Mystery Machine Jump-n-Climb-n-Slide Combos", 35.00},
    {"Princess Palace Moonbounce Combo Rental", 30.00},
    {"Royal Princess Carriage Combos", 30.00},
    {"Sesame Street 5-n-1 Activity Centers", 40.00},
    {"Spider Man Combo", 35.00},
    {"Sports 5-N-1 Moonbounce Obstacle Combo Rental", 40.00},
    {"Star Wars 5 in 1 Combo", 35.00},
    {"Tiny Shark Playground Moonbounce Combo", 30.00},
    {"Unicorn Moonbounce Combo", 30.00},
    {"Cars Deluxe Jumps", 40.00},
    {"Disney Princess Club Jumps", 20.00},
    {"Dream Castle Moon Bounce", 25.00},
    {"Finding Nemo Club Jumps", 20.00},
    {"Jumbo Fun House Jumps", 25.00},
    {"Large Castle Jumps", 35.00},
    {"Monster Wheels Jumps", 20.00},
    {"Nick Toons Club Jumps", 20.00},
    {"Race Car Jumps", 20.00},
    {"Sesame Street Deluxe Jumps", 20.00}
};

double calculateCleaningPrice(double deliveryPrice) {
    return deliveryPrice / 2.0;
}

#endif
