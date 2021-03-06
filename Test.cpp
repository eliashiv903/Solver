//
// Created by netanel & Or  on 28/04/2020.
//

#include "doctest.h"
#include "solver.hpp"
#include <iostream>
using namespace std;

using solver::solve,solver::RealVariable, solver::ComplexVariable;
TEST_CASE("test 1"){
    RealVariable x;
    CHECK( solve(2*x-4 == 10)==7);  // 7
    CHECK( solve((x^2) == 16)==4);
   CHECK_THROWS(solve((x^2) == -16));
   CHECK( solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4);
    double xvalue = solve(2*x-4.0 == 10.0);   // xvalue == 7
    CHECK(xvalue==7);
    }
TEST_CASE("test 2") {
    RealVariable x;
            CHECK(solve(x == 3) == 3);
            CHECK(solve(2 * x == 6) == 3);
            CHECK(solve(10 * x == 0) == 0);
            CHECK(solve(2 * x + x + 4 = -2) == -3);
            CHECK(solve(x + x + x == 9) == 3);
            CHECK(solve(x + 3 + 4 - x + 2*x - 3 - 4 == 0) == 0);
            CHECK(solve(x = 2) == 2);
            CHECK(solve(3 * x + 0 == 3) == 1);
            CHECK(solve(x / 2 + 2 + x == 0) == 0.75);
            CHECK(solve(x*(-1) - 2*x == 3) == -1);
            CHECK(solve(x == 0) == 0);
            CHECK(solve(4 + 3 == x) == 7);
            CHECK(solve(2 * x - 4 == 10) == 3);
            CHECK(solve(88 * x == 88) == 1);
            CHECK(solve(42.5 * x + 13 * x + 0.5 * x == 224) == 4);
            CHECK(solve((0.5 * x + 0.5 * x) / 2 * x + x == 0) == -0.5);
            CHECK(solve(8 * x / 2 * x / 2 * x == 0) == 2);
            CHECK(solve(10 + 10 - 10 * x == 0) == 2);
            CHECK(solve(x - x + x - x + x == 2) == 2);
            CHECK(solve(x + 1 == 4) == 3);
            CHECK(solve(4 * x + 2 * x == 6) == 1);
            CHECK(solve(18 * x == 9) == 0.5);
            CHECK(solve(99*x = x) == 0);
            CHECK(solve(12 * x + 13 = -2 * x / 2) == -1);
            CHECK(solve(120 * x / 2 / 2 / 2 == 0) == 15);
            CHECK(solve(x + x + x + x + 1 + 0 == -3) == -1);
            CHECK(solve(45 * x * 2 == 180) == 2);
            CHECK(solve(67 * x + 67 * x == 134) == 2);
            CHECK(solve(x + 1 == x*-1)==0.5);
            CHECK(solve(x*2+2*x==8)==2);
            CHECK(solve(x+2+x+2==2)==-1);
            CHECK(solve(x+x+0==16)==8);
            CHECK(solve(x+1=0)==-1);
            CHECK(solve(2*x=x+2)==2);
            CHECK(solve(x==0)==0); CHECK(0==0);
            CHECK(solve(x+8==0)==-8);
            CHECK(solve(x+4+2*x/2*x==0)==-4);
            CHECK(solve(x*6+x==7)==1);
            CHECK(solve(x*0+x==0)==0);
            CHECK(solve(2*x-4.0 == 10.0) ==7);
            CHECK(solve(3*x-5.0 == 1.0) ==2);
            CHECK(solve(4*x-4.0 == 16.0) ==5);
            CHECK(solve(2*x-4.0 == 10.0) ==7);
            CHECK(solve(5*x-6.0 == 14.0) ==4);
            CHECK(solve(1*x-4.0 == 3.0) ==7);
            CHECK(solve(5*x-4.0 == 36.0) ==8);
            CHECK(solve(2*x-3.0 == 15.0) ==9);
            CHECK(solve(5*x-2.0 == 8.0) ==2);
            CHECK(solve(5*x-3.0 == 2.0) ==1);
            CHECK(solve(3*x-1.0 == 2.0) ==1);
            CHECK(solve(3*x-2.0 == 4.0) ==2);
            CHECK(solve(4*x-1.0 == 3.0) ==1);
            CHECK(solve(4*x-2.0 == 6.0) ==2);
            CHECK(solve(5*x-1.0 == 4.0) ==1);
            CHECK(solve(5*x-2.0 == 8.0) ==2);
            CHECK(solve(6*x-1.0 == 5.0) ==1);
            CHECK(solve(6*x-2.0 == 10.0) ==2);
            CHECK(solve(7*x-1.0 == 6.0) ==1);
            CHECK(solve(7*x-2.0 == 12.0) ==2);
            CHECK(solve((x ^ 2) == 9) == 3);
            CHECK(solve(2 * (x ^ 2) == 18) == 3);
            CHECK(solve((x ^ 2) + 5 == 30) == 5);
            CHECK(solve(2 * x - 2 == 4) == 3);
            CHECK(((solve((x ^ 2) == 16) == 4) || (solve((x ^ 2) == 16) == -4)));
            CHECK((solve((x ^ 2) == 25) == 5 || solve((x ^ 2) == 25) == -5));
            CHECK(solve((x ^ 2) + 2 == 18) == 4);
            CHECK((solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0 * x / 2 - x) == 4 ||
                   solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0 * x / 2 - x) == -4));
            CHECK((solve((x ^ 2) + 2 * x == 16 + 6.0 * x / 2 - x) == 4 ||
                   solve((x ^ 2) + 2 * x == 16 + 6.0 * x / 2 - x) == -4));
            CHECK((solve(2 * (x ^ 2) == 32) == 4 || solve(2 * (x ^ 2) == 32) == -4));
            CHECK(solve(3 * (x ^ 2) - 15 == 60) == 5);
            CHECK((solve((x ^ 2) == 81) == 9 || solve((x ^ 2) == 81) == -9));
            CHECK((solve(2 * (x ^ 2) == 162) == 9 || solve(2 * (x ^ 2) == 162) == -9));
            CHECK((solve((x ^ 2) + 2 * x + 5 == 21 + 6.0 * x / 2 - x) == 4 ||
                   solve((x ^ 2) + 2 * x + 5 == 21 + 6.0 * x / 2 - x) == -4));
            CHECK(solve(3 * (x ^ 2) - 30 == 45) == 5);
            CHECK((solve((x ^ 2) == 1) == 1 || solve((x ^ 2) == 1) == -1));// also -1
            CHECK((solve((x ^ 2) == 100) == 10 || solve((x ^ 2) == 100) == -10));
}

    TEST_CASE("test 3 CHECK_THROWS") {
        RealVariable x;
            CHECK_THROWS(solve(x == x));
            CHECK_THROWS(solve(x-x==0));
            CHECK_THROWS(solve(2*x/x==0));
            CHECK_THROWS(solve(34*x-34*x==67));
            CHECK_THROWS(solve(x==x-x+x));
            CHECK_THROWS(solve(x=2+x));
            CHECK_THROWS(solve(2*x==4*x/2*x));
            CHECK_THROWS(solve((x^2) == -16));
            CHECK_THROWS(solve((x*x+10==2)));
            CHECK_THROWS(solve(x*x==-1));
            CHECK_THROWS(solve(x+0=x));
            CHECK_THROWS(solve((x^2)==(x^2)));
            CHECK_THROWS(solve((x^2)+10==11));
            CHECK_THROWS(solve(0+0+x==1+x));
            CHECK_THROWS(solve(((x^3)/x)==-2));
            CHECK_THROWS(solve((x^4)/(x^2)==-1));
            CHECK_THROWS(solve(x+x==2*x));
            CHECK_THROWS(solve((x^2)==x*x));
            CHECK_THROWS(solve((x^2)==-0.5));
            CHECK_THROWS(solve(x=0+x));
            CHECK_THROWS(solve((x^4)==-3));
            CHECK_THROWS(solve((x^2)==-290));
            CHECK_THROWS(solve((x^2)==-3));

    }

    TEST_CASE("test ComplexVariable") {

        ComplexVariable y;
                CHECK(solve(2 * y - 4 == 10) == std::complex<double>(7, 0));
                CHECK(solve(y - 4 == 10) == std::complex<double>(14, 0));
                CHECK((solve((y ^ 2) == 16) == std::complex<double>(4, 0) ||
                       solve((y ^ 2) == 16) == std::complex<double>(-4, 0)));
                CHECK((solve((y ^ 2) == -16) == std::complex<double>(0, 4) ||
                       solve((y ^ 2) == -16) == std::complex<double>(0, -4)));
    }


