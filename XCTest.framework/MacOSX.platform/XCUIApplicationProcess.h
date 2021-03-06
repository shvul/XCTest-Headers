//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTElementSnapshotAttributeDataSource.h"

@class NSObject<OS_dispatch_queue>, NSString, XCAccessibilityElement, XCElementSnapshot;

@interface XCUIApplicationProcess : NSObject <XCTElementSnapshotAttributeDataSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _accessibilityActive;
    unsigned long long _applicationState;
    int _processID;
    id _token;
    int _exitCode;
    BOOL _eventLoopHasIdled;
    BOOL _animationsHaveFinished;
    BOOL _suspended;
    BOOL _hasExitCode;
    BOOL _hasCrashReport;
    BOOL _bridged;
    unsigned long long _alertCount;
    NSString *_bundleID;
    id <XCTRunnerAutomationSession> _automationSession;
    XCElementSnapshot *_lastSnapshot;
    XCUIApplicationProcess *_bridgedProcess;
    long long _activationPolicy;
    id <XCUIApplicationMonitor> _applicationMonitor;
    id <XCUIAccessibilityInterface> _axInterface;
}

+ (id)keyPathsForValuesAffectingIsQuiescent;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingHasBridgedProcess;
+ (id)keyPathsForValuesAffectingIsProcessIDValid;
+ (id)keyPathsForValuesAffectingForeground;
+ (id)keyPathsForValuesAffectingBackground;
+ (id)keyPathsForValuesAffectingRunning;
+ (id)keyPathsForValuesAffectingIsApplicationStateKnown;
@property(readonly) id <XCUIAccessibilityInterface> axInterface; // @synthesize axInterface=_axInterface;
@property(readonly) id <XCUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property(nonatomic) long long activationPolicy; // @synthesize activationPolicy=_activationPolicy;
@property(retain, nonatomic) XCUIApplicationProcess *bridgedProcess; // @synthesize bridgedProcess=_bridgedProcess;
@property(retain) XCElementSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(retain) id <XCTRunnerAutomationSession> automationSession; // @synthesize automationSession=_automationSession;
@property(getter=isBridged) BOOL bridged; // @synthesize bridged=_bridged;
@property BOOL hasCrashReport; // @synthesize hasCrashReport=_hasCrashReport;
@property BOOL hasExitCode; // @synthesize hasExitCode=_hasExitCode;
@property(readonly) BOOL suspended; // @synthesize suspended=_suspended;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
@property(readonly) BOOL usePointTransformationsForFrameConversions;
@property(readonly) BOOL supportsHostedViewCoordinateTransformations;
- (id)parameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 error:(id *)arg4;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
@property(readonly) BOOL allowsRemoteAccess;
- (id)_underlyingDataSourceForElement:(id)arg1;
- (BOOL)terminate:(id *)arg1;
- (void)acquireBackgroundAssertion;
- (void)waitForFutureAutomationSession:(id)arg1;
- (id)futureAutomationSession;
- (void)waitForAutomationSession;
@property(readonly, getter=isQuiescent) BOOL quiescent;
- (void)_initiateQuiescenceChecksIncludingAnimationsIdle:(BOOL)arg1;
- (void)waitForQuiescenceIncludingAnimationsIdle:(BOOL)arg1;
- (id)_makeQuiescenceExpectation;
- (void)_notifyWhenAnimationsAreIdle:(CDUnknownBlockType)arg1;
- (BOOL)_supportsAnimationsIdleNotifications;
- (void)_notifyWhenMainRunLoopIsIdle:(CDUnknownBlockType)arg1;
- (void)resetAlertCount;
- (void)incrementAlertCount;
@property(readonly) unsigned long long alertCount; // @synthesize alertCount=_alertCount;
@property BOOL animationsHaveFinished;
@property BOOL eventLoopHasIdled;
@property int exitCode;
@property(retain) id token;
- (BOOL)hasBridgedProcess;
@property(nonatomic) int processID;
@property(readonly, getter=isProcessIDValid) BOOL processIDValid;
@property(readonly) BOOL foreground;
@property(readonly) BOOL background;
@property(readonly) BOOL running;
- (BOOL)isApplicationStateKnown;
- (void)_awaitKnownApplicationState;
@property(nonatomic) unsigned long long applicationState;
@property(nonatomic) BOOL accessibilityActive;
@property(readonly, copy) XCAccessibilityElement *accessibilityElement;
@property(readonly, copy) NSString *shortDescription;
- (id)_queue_description;
@property(readonly, copy) NSString *description;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 applicationMonitor:(id)arg2 axInterface:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

