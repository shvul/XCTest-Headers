//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCUIApplicationManaging.h"

@protocol XCUIXcodeApplicationManaging <XCUIApplicationManaging>
- (void)terminateProcessWithToken:(id)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestLaunchProgressForProcessWithToken:(id)arg1 completion:(void (^)(_Bool, float, NSError *))arg2;
@end

