//
//  Checkout.hpp
//  googletest_test
//
//  Created by Giles Carlos on 4/24/19.
//  Copyright © 2019 Giles Carlos. All rights reserved.
//

#ifndef Checkout_hpp
#define Checkout_hpp

#include <stdio.h>
#include <string>
#include <map>

class Checkout {
public:
    Checkout();
    virtual ~Checkout();
    
    void addItemPrice(std::string item, int price);
    
    void addItem(std::string item);
    
    void addDiscount(std::string item, int nbrOfItems, int discountPrice);
    
    int calculateTotal();
    
protected:
    struct Discount {
        int nbrOfItems;
        int discountPrice;
    };
    
    std::map<std::string, int> prices;
    std::map<std::string, Discount> discounts;
    std::map<std::string, int> items;

    int total;
    
    void calculateItem(std::string item, int itemCnt);
    void calculateDiscount(std::string item, int itemCnt, Discount discount);
};

#endif /* Checkout_hpp */
