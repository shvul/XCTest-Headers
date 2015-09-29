@interface XCTestEventGenerator : NSObject
{
}

+ (id)eventDispatchQueue;
+ (struct __CGEventSource *)eventSource;
+ (id)sharedTestEventGenerator;
- (void)clickAndDragFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)_startEventSequenceWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_scheduleCallback:(CDUnknownBlockType)arg1 afterInterface:(double)arg2;
- (void)hitKey:(unsigned short)arg1;
- (void)rightClickAtPoint:(struct CGPoint)arg1;
- (void)doubleClickAtPoint:(struct CGPoint)arg1;
- (void)clickAtPoint:(struct CGPoint)arg1;
- (void)_clickMouseButton:(unsigned int)arg1 withCount:(unsigned long long)arg2 atPoint:(struct CGPoint)arg3;
- (void)_moveMouseToPoint:(struct CGPoint)arg1;
- (struct CGRect)frameForViewInGlobalCoordinates:(id)arg1;
- (struct CGRect)globalCoordinatesForRect:(struct CGRect)arg1 inView:(id)arg2;

@end
