@interface _XCTestCaseImplementation : NSObject
{
    NSInvocation *_invocation;
    XCTestCaseRun *_testCaseRun;
    BOOL _continueAfterFailure;
    unsigned long long _numberOfTestIterations;
    NSMutableSet *_expectations;
    NSMutableArray *_fulfillments;
    NSObject<OS_dispatch_source> *_timeoutSource;
    double _timeoutDuration;
    BOOL _waiting;
    CDUnknownBlockType _completionHandler;
    NSArray *_performanceMetricIDs;
    NSArray *_activePerformanceMetricIDs;
    NSMutableDictionary *_perfMetricDataForID;
    unsigned long long _startWallClockTime;
    struct time_value _startUserTime;
    struct time_value _startSystemTime;
    unsigned long long _measuringIteration;
    BOOL _isMeasuringMetrics;
    BOOL _didMeasureMetrics;
    BOOL _didStartMeasuring;
    BOOL _didStopMeasuring;
    NSString *_filePathForUnexpectedFailure;
    unsigned long long _lineNumberForUnexpectedFailure;
    unsigned long long _callAddressForCurrentWait;
    XCSymbolicationRecord *_symbolicationRecordForLastCreatedExpectation;
    NSMutableArray *_failureRecords;
}

@property(retain, nonatomic) NSMutableArray *failureRecords; // @synthesize failureRecords=_failureRecords;
@property(nonatomic) NSObject<OS_dispatch_source> *timeoutSource; // @synthesize timeoutSource=_timeoutSource;
@property(retain, nonatomic) XCSymbolicationRecord *symbolicationRecordForLastCreatedExpectation; // @synthesize symbolicationRecordForLastCreatedExpectation=_symbolicationRecordForLastCreatedExpectation;
@property unsigned long long callAddressForCurrentWait; // @synthesize callAddressForCurrentWait=_callAddressForCurrentWait;
@property unsigned long long lineNumberForUnexpectedFailure; // @synthesize lineNumberForUnexpectedFailure=_lineNumberForUnexpectedFailure;
@property(copy) NSString *filePathForUnexpectedFailure; // @synthesize filePathForUnexpectedFailure=_filePathForUnexpectedFailure;
@property unsigned long long numberOfTestIterations; // @synthesize numberOfTestIterations=_numberOfTestIterations;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property double timeoutDuration; // @synthesize timeoutDuration=_timeoutDuration;
@property BOOL waiting; // @synthesize waiting=_waiting;
@property(retain, nonatomic) NSMutableArray *fulfillments; // @synthesize fulfillments=_fulfillments;
@property(retain, nonatomic) NSMutableSet *expectations; // @synthesize expectations=_expectations;
@property BOOL didStopMeasuring; // @synthesize didStopMeasuring=_didStopMeasuring;
@property BOOL didStartMeasuring; // @synthesize didStartMeasuring=_didStartMeasuring;
@property BOOL didMeasureMetrics; // @synthesize didMeasureMetrics=_didMeasureMetrics;
@property BOOL isMeasuringMetrics; // @synthesize isMeasuringMetrics=_isMeasuringMetrics;
@property unsigned long long measuringIteration; // @synthesize measuringIteration=_measuringIteration;
@property struct time_value startUserTime; // @synthesize startUserTime=_startUserTime;
@property struct time_value startSystemTime; // @synthesize startSystemTime=_startSystemTime;
@property unsigned long long startWallClockTime; // @synthesize startWallClockTime=_startWallClockTime;
@property(retain) NSMutableDictionary *perfMetricDataForID; // @synthesize perfMetricDataForID=_perfMetricDataForID;
@property(copy) NSArray *activePerformanceMetricIDs; // @synthesize activePerformanceMetricIDs=_activePerformanceMetricIDs;
@property(copy) NSArray *performanceMetricIDs; // @synthesize performanceMetricIDs=_performanceMetricIDs;
@property BOOL continueAfterFailure; // @synthesize continueAfterFailure=_continueAfterFailure;
@property(retain) XCTestCaseRun *testCaseRun; // @synthesize testCaseRun=_testCaseRun;
@property(retain) NSInvocation *invocation; // @synthesize invocation=_invocation;
- (void)resetExpectations;
- (void)addExpectation:(id)arg1;
- (id)init;
- (void)dealloc;

@end
