//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SenTestingKit/SenTestRun.h>

@class NSMutableArray;

@interface SenTestCaseRun : SenTestRun
{
    NSMutableArray *exceptions;
    unsigned int failureCount;
    unsigned int unexpectedExceptionCount;
}

- (void)addException:(id)arg1;
- (unsigned int)unexpectedExceptionCount;
- (unsigned int)failureCount;
- (void)stop;
- (void)start;
- (id)exceptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTest:(id)arg1;

@end

