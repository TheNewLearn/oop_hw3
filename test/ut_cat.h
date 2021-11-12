#include "../src/cat.h"
#include<string>
#include <gtest/gtest.h>

// add your test here
TEST(CATTEST,cat){
Cat w ("winny",12.5);
ASSERT_EQ(12.5,w.getWeight());
ASSERT_EQ("winny",w.getName());
ASSERT_NEAR(12.5,w.getWeight(),0.0001);

}

TEST(CATEST2,add_toy){
    Cat b("denny",5);
    b.addNewToy("car");
    b.addNewToy("gun");
    b.addNewToy("gun2");

    

    ASSERT_EQ(b.getToy(2),"gun2");
    ASSERT_EQ(b.getToy(0),"car");
    ASSERT_EQ(b.getToy(1),"gun");
    ASSERT_THROW(b.getToy(-1),std::string);
    ASSERT_THROW(b.getToy(3),std::string);
}