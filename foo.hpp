#pragma once

#include "Human.hpp"
#include<iostream>
#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    // Twoja implementacja tutaj
    std::for_each(people.rbegin(), people.rend(), [&](auto& a) {
        static int i=0;
        a.birthday();
        if (a.isMonster()) {
            retval[i]= 'n';
        }
        else {
             retval[i]= 'y';
        }
        i++;
    }); 
    return retval;
}
