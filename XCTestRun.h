@interface XCTestRun : NSObject
{
    XCTest *_test;
    double _startDate;
    double _stopDate;
    unsigned long long _executionCount;
    unsigned long long _failureCount;
    unsigned long long _unexpectedExceptionCount;
}

+ (id)testRunWithTest:(id)arg1;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
@property(readonly) BOOL hasSucceeded;
@property(readonly) unsigned long long testCaseCount;
@property(readonly) unsigned long long unexpectedExceptionCount;
@property(readonly) unsigned long long failureCount;
@property(readonly) unsigned long long totalFailureCount;
@property(readonly) unsigned long long executionCount;
- (void)stop;
- (void)start;
@property(readonly, copy) NSDate *stopDate;
@property(readonly, copy) NSDate *startDate;
@property(readonly) double testDuration;
@property(readonly) double totalDuration;
- (BOOL)_hasBeenStopped;
- (BOOL)_hasBeenStarted;
@property(readonly) XCTest *test;
- (id)description;
- (void)dealloc;
- (id)initWithTest:(id)arg1;

@end
