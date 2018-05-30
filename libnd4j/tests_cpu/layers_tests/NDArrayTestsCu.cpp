//
// @author Yurii Shyrma (iuriish@yahoo.com), created on 29.05.2018
//

#include "testlayers.h"
#include <NDArray.h>

using namespace nd4j;

//////////////////////////////////////////////////////////////////////
class NDArrayTestCu : public testing::Test {
public:    
    
};


//////////////////////////////////////////////////////////////////////
// just draft, will be rewritten and amplified !!!
TEST_F(NDArrayTestCu, test1) { 
    
    Nd4jLong cShapeInfo[8] = {2, 2, 2, 2, 1, 0, 1, 99};
    Nd4jLong fShapeInfo[8] = {2, 2, 2, 1, 2, 0, 1, 102};
    float buffer[4] = {1,2,3,4};

    NDArray<float> arr1(cShapeInfo, true);
    // NDArray<float> arr2('f', {2, 2}, {1,2,3,4});
    // NDArray<float> arr3('c', {2, 2});
    // NDArray<float> arr4(buffer, 'c', {2,2}, nullptr);
    // NDArray<float> arr5(&arr4, true);
    // NDArray<float> arr6 = arr5;

    ASSERT_TRUE(true);    
}

//////////////////////////////////////////////////////////////////////
// just draft, will be rewritten and amplified !!!
TEST_F(NDArrayTestCu, test2) {
    
    Nd4jLong cShapeInfo[8] = {2, 2, 2, 2, 1, 0, 1, 99};
    Nd4jLong fShapeInfo[8] = {2, 2, 2, 1, 2, 0, 1, 102};
    double buffer[4] = {1,2,3,4};

    NDArray<double> arr1(cShapeInfo, true);
    NDArray<double> arr2('f', {2, 2}, {1,2,3,4});
    NDArray<double> arr3('c', {2, 2});
    NDArray<double> arr4(buffer, 'c', {2,2}, nullptr);
    NDArray<double> arr5(&arr4, true);
    NDArray<double> arr6 = arr5;

    ASSERT_TRUE(true);    
}

//////////////////////////////////////////////////////////////////////
TEST_F(NDArrayTestCu, test3_form_only) {
    
    Nd4jLong cShapeInfo[8] = {2, 2, 2, 2, 1, 0, 1, 99};
    Nd4jLong fShapeInfo[8] = {2, 2, 2, 1, 2, 0, 1, 102};
    float buffer[4] = {1.f,2.f,3.f,4.f};

    NDArray<float> x(cShapeInfo, true);
    NDArray<float> exp('c', {2, 2});
    x(0) = buffer[0];
    x(1) = buffer[1];
    x(2) = buffer[2];
    x(3) = buffer[3];
//    exp = x;
    ASSERT_TRUE(x.isSameShape(&exp));
//    x.printIndexedBuffer("Hello");
//    ASSERT_TRUE(x.equalsTo(&exp));
    
}

//////////////////////////////////////////////////////////////////////
TEST_F(NDArrayTestCu, test3) {
    
    NDArray<float> x(12.f);
    NDArray<float> exp(12.f);

    ASSERT_TRUE(x.isSameShape(&exp));
    ASSERT_TRUE(x.equalsTo(&exp));
    
}




//////////////////////////////////////////////////////////////////////
TEST_F(NDArrayTestCu, test4) {
    
    Nd4jLong cShapeInfo[8] = {2, 2, 2, 2, 1, 0, 1, 99};
    Nd4jLong fShapeInfo[8] = {2, 2, 2, 1, 2, 0, 1, 102};
    float buffer[4] = {1.f,2.f,3.f,4.f};

    NDArray<float> x(cShapeInfo, true);
    NDArray<float> exp('c', {2, 2});
    x(0) = buffer[0];
    x(1) = buffer[1];
    x(2) = buffer[2];
    x(3) = buffer[3];
    exp = x;
    ASSERT_TRUE(x.isSameShape(&exp));
    x.printIndexedBuffer("Hello");
    ASSERT_TRUE(x.equalsTo(&exp));
    
}



