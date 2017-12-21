/**
  KDVAbstractDataTests.m
  AresTests

  Created by Kenn Villegas on 12/21/17.
  Copyright © 2017 dubian. All rights reserved.

*/
#import "KDVAbstractDataController.h"
#import <CoreData/CoreData.h>
#import <XCTest/XCTest.h>

@interface KDVAbstractDataTests : XCTestCase

@property(strong, nonatomic)KDVAbstractDataController *SUT;
@end

@implementation KDVAbstractDataTests
@synthesize SUT = _SUT;
- (void)setUp {
  [super setUp];
  _SUT = [[KDVAbstractDataController alloc]initAllUp];
}

- (void)tearDown {
  [self setSUT:(nil)];
  [super tearDown];
}

- (void)testSUTExits {
  XCTAssertNotNil([self SUT]);
  XCTAssert([_SUT isKindOfClass:([KDVAbstractDataController class])]);
  XCTAssertNotNil([[self SUT]DatabaseName]);
  XCTAssertNotNil([[self SUT]EntityClassName]);
  XCTAssertTrue([[self SUT]copyDatabaseIfNotPresent]);
  XCTAssertNotNil([[self SUT]MOM]);
  XCTAssertNotNil([[self SUT]PSK]);
  
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
