#include "pch.h"
#include "CppUnitTest.h"




using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace vec;

namespace My2DPhysicsEnginenUnitTest{

	TEST_CLASS(VectorTest){
		Vector testVector = Vector(-34.67f, 56.3f);
	public:

		TEST_METHOD(length){
			Assert::AreEqual(testVector.length(), 66.1188f, 4);
		}
		TEST_METHOD(sqrLength) {
			Assert::AreEqual(testVector.sqrLength(), 4371.6989f, 4);
		}
		
		TEST_METHOD(normalized) {
			Vector normalizedVector = testVector.normalized();
			Assert::AreEqual(normalizedVector.getX(), -0.524359f, 4);
			Assert::AreEqual(normalizedVector.getY(), 0.851497f, 4);
		}
		TEST_METHOD(normalize) {
			Vector normalizedVector = testVector;
			normalizedVector.normalize();
			Assert::AreEqual(normalizedVector.getX(), -0.524359f, 4);
			Assert::AreEqual(normalizedVector.getY(), 0.851497f, 4);
		}
		TEST_METHOD(scalarProduct) {
			Assert::AreEqual(testVector.scalarProduct(-0.5f).getX(), 17.335f, 3);
			Assert::AreEqual(testVector.scalarProduct(0.5f).getY(), 28.15f, 3);
		}
		TEST_METHOD(dotProduct) {
			Vector secondVector(4.6f, -9.34f);
			float result = testVector.dotProduct(secondVector);
			Assert::AreEqual(result, -685.324f, 4);
		}
	};
}
