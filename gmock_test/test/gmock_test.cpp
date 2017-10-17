#include <gmock/gmock.h>

using ::testing::Return;
class Base
{
	public:
    virtual bool foo() = 0;
};

class MockDerived : public Base
{
	public:
  MOCK_METHOD0(foo, bool());

};
TEST(DummyTest, test)
{
  MockDerived bar;
  
  EXPECT_CALL(bar, foo())
      .Times(1)
      .WillOnce(Return(true));
  EXPECT_TRUE(bar.foo());
}


int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

