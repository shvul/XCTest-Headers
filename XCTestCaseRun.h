@interface XCTestCaseRun : XCTestRun
{
}

- (void)_recordValues:(id)arg1 forPerformanceMetricID:(id)arg2 name:(id)arg3 unitsOfMeasurement:(id)arg4 baselineName:(id)arg5 baselineAverage:(id)arg6 maxPercentRegression:(id)arg7 maxPercentRelativeStandardDeviation:(id)arg8 maxRegression:(id)arg9 maxStandardDeviation:(id)arg10 file:(id)arg11 line:(unsigned long long)arg12;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(BOOL)arg4;
- (void)recordFailureInTest:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4 expected:(BOOL)arg5;
- (void)stop;
- (void)start;

@end
