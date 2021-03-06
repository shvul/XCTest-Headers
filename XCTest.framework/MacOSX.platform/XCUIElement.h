//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XCTNSPredicateExpectationObject.h"
#import "XCUIElementAttributes.h"
#import "XCUIElementAttributesPrivate.h"
#import "XCUIElementSnapshotProviding.h"
#import "XCUIElementTypeQueryProvider.h"
#import "XCUIScreenshotProviding.h"

@class NSString, XCElementSnapshot, XCUIApplication, XCUICoordinate, XCUIElementQuery;

@interface XCUIElement : NSObject <XCUIScreenshotProviding, XCUIElementSnapshotProviding, XCTNSPredicateExpectationObject, XCUIElementAttributesPrivate, XCUIElementAttributes, XCUIElementTypeQueryProvider>
{
    BOOL _hasKeyboardFocus;
    BOOL _safeQueryResolutionEnabled;
    XCUIElementQuery *_query;
    XCElementSnapshot *_lastSnapshot;
}

+ (id)standardAttributeNames;
+ (BOOL)_dispatchEvent:(CDUnknownBlockType)arg1 inContext:(id)arg2 withSnapshot:(id)arg3 applicationSnapshot:(id)arg4 process:(id)arg5 error:(id *)arg6;
+ (BOOL)_isInvalidEventDuration:(double)arg1;
+ (void)performWithKeyModifiers:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (unsigned long long)_setModifiers:(unsigned long long)arg1 merge:(BOOL)arg2 description:(id)arg3;
@property BOOL safeQueryResolutionEnabled; // @synthesize safeQueryResolutionEnabled=_safeQueryResolutionEnabled;
@property(readonly) BOOL hasKeyboardFocus; // @synthesize hasKeyboardFocus=_hasKeyboardFocus;
@property(retain) XCElementSnapshot *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(readonly) XCUIElementQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
@property(readonly, copy) XCUIElementQuery *statusItems;
@property(readonly, copy) XCUIElementQuery *otherElements;
@property(readonly, copy) XCUIElementQuery *handles;
@property(readonly, copy) XCUIElementQuery *layoutItems;
@property(readonly, copy) XCUIElementQuery *layoutAreas;
@property(readonly, copy) XCUIElementQuery *cells;
@property(readonly, copy) XCUIElementQuery *levelIndicators;
@property(readonly, copy) XCUIElementQuery *grids;
@property(readonly, copy) XCUIElementQuery *rulerMarkers;
@property(readonly, copy) XCUIElementQuery *rulers;
@property(readonly, copy) XCUIElementQuery *dockItems;
@property(readonly, copy) XCUIElementQuery *mattes;
@property(readonly, copy) XCUIElementQuery *helpTags;
@property(readonly, copy) XCUIElementQuery *colorWells;
@property(readonly, copy) XCUIElementQuery *relevanceIndicators;
@property(readonly, copy) XCUIElementQuery *splitters;
@property(readonly, copy) XCUIElementQuery *splitGroups;
@property(readonly, copy) XCUIElementQuery *valueIndicators;
@property(readonly, copy) XCUIElementQuery *ratingIndicators;
@property(readonly, copy) XCUIElementQuery *timelines;
@property(readonly, copy) XCUIElementQuery *decrementArrows;
@property(readonly, copy) XCUIElementQuery *incrementArrows;
@property(readonly, copy) XCUIElementQuery *steppers;
@property(readonly, copy) XCUIElementQuery *webViews;
@property(readonly, copy) XCUIElementQuery *maps;
@property(readonly, copy) XCUIElementQuery *menuBarItems;
@property(readonly, copy) XCUIElementQuery *menuBars;
@property(readonly, copy) XCUIElementQuery *menuItems;
@property(readonly, copy) XCUIElementQuery *menus;
@property(readonly, copy) XCUIElementQuery *textViews;
@property(readonly, copy) XCUIElementQuery *datePickers;
@property(readonly, copy) XCUIElementQuery *secureTextFields;
@property(readonly, copy) XCUIElementQuery *textFields;
@property(readonly, copy) XCUIElementQuery *staticTexts;
@property(readonly, copy) XCUIElementQuery *scrollBars;
@property(readonly, copy) XCUIElementQuery *scrollViews;
@property(readonly, copy) XCUIElementQuery *searchFields;
@property(readonly, copy) XCUIElementQuery *icons;
@property(readonly, copy) XCUIElementQuery *images;
@property(readonly, copy) XCUIElementQuery *links;
@property(readonly, copy) XCUIElementQuery *toggles;
@property(readonly, copy) XCUIElementQuery *switches;
@property(readonly, copy) XCUIElementQuery *pickerWheels;
@property(readonly, copy) XCUIElementQuery *pickers;
@property(readonly, copy) XCUIElementQuery *segmentedControls;
@property(readonly, copy) XCUIElementQuery *activityIndicators;
@property(readonly, copy) XCUIElementQuery *progressIndicators;
@property(readonly, copy) XCUIElementQuery *pageIndicators;
@property(readonly, copy) XCUIElementQuery *sliders;
@property(readonly, copy) XCUIElementQuery *collectionViews;
@property(readonly, copy) XCUIElementQuery *browsers;
@property(readonly, copy) XCUIElementQuery *outlineRows;
@property(readonly, copy) XCUIElementQuery *outlines;
@property(readonly, copy) XCUIElementQuery *tableColumns;
@property(readonly, copy) XCUIElementQuery *tableRows;
@property(readonly, copy) XCUIElementQuery *tables;
@property(readonly, copy) XCUIElementQuery *statusBars;
@property(readonly, copy) XCUIElementQuery *toolbars;
@property(readonly, copy) XCUIElementQuery *tabGroups;
@property(readonly, copy) XCUIElementQuery *tabs;
@property(readonly, copy) XCUIElementQuery *tabBars;
@property(readonly, copy) XCUIElementQuery *navigationBars;
@property(readonly, copy) XCUIElementQuery *keys;
@property(readonly, copy) XCUIElementQuery *keyboards;
@property(readonly, copy) XCUIElementQuery *popovers;
@property(readonly, copy) XCUIElementQuery *toolbarButtons;
@property(readonly, copy) XCUIElementQuery *menuButtons;
@property(readonly, copy) XCUIElementQuery *comboBoxes;
@property(readonly, copy) XCUIElementQuery *popUpButtons;
@property(readonly, copy) XCUIElementQuery *disclosureTriangles;
@property(readonly, copy) XCUIElementQuery *checkBoxes;
@property(readonly, copy) XCUIElementQuery *radioGroups;
@property(readonly, copy) XCUIElementQuery *radioButtons;
@property(readonly, copy) XCUIElementQuery *buttons;
@property(readonly, copy) XCUIElementQuery *dialogs;
@property(readonly, copy) XCUIElementQuery *alerts;
@property(readonly, copy) XCUIElementQuery *drawers;
@property(readonly, copy) XCUIElementQuery *sheets;
@property(readonly, copy) XCUIElementQuery *windows;
@property(readonly, copy) XCUIElementQuery *groups;
@property(readonly, copy) XCUIElementQuery *touchBars;
- (id)coordinateWithNormalizedOffset:(struct CGVector)arg1;
@property(readonly, copy) XCUICoordinate *hitPointCoordinate;
- (id)valueForAccessibilityAttribute:(id)arg1 error:(id *)arg2;
- (id)valuesForAccessibilityAttributes:(id)arg1 error:(id *)arg2;
@property(readonly) BOOL isTopLevelTouchBarElement;
@property(readonly) BOOL isTouchBarElement;
@property(readonly, getter=isHittable) BOOL hittable;
@property(readonly) long long horizontalSizeClass;
@property(readonly) long long verticalSizeClass;
@property(readonly) unsigned long long elementType;
@property(readonly, copy) NSString *label;
@property(readonly, getter=isSelected) BOOL selected;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly) NSString *identifier;
@property(readonly) NSString *placeholderValue;
@property(readonly, copy) NSString *title;
@property(readonly) struct CGRect frame;
@property(readonly) id value;
- (BOOL)resolveHandleUIInterruption:(BOOL)arg1 error:(id *)arg2;
- (void)resolveHandleUIInterruption:(BOOL)arg1;
- (BOOL)resolve:(id *)arg1;
- (void)resolve;
- (BOOL)waitForNonExistenceWithTimeout:(double)arg1;
- (id)makeNonExistenceExpectation;
- (BOOL)waitForExistenceWithTimeout:(double)arg1;
- (BOOL)_waitForExistenceWithTimeout:(double)arg1;
- (BOOL)evaluatePredicateForExpectation:(id)arg1 debugMessage:(id *)arg2;
- (id)_debugDescriptionWithSnapshot:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) XCUIElement *firstMatch;
- (id)childrenMatchingType:(unsigned long long)arg1;
- (id)descendantsMatchingType:(unsigned long long)arg1;
@property(readonly) BOOL exists;
@property(readonly, nonatomic) XCUIApplication *application;
@property(readonly, copy) NSString *description;
- (id)elementBoundByAccessibilityElement;
- (id)initWithElementQuery:(id)arg1;
- (id)screenshot;
- (id)_screen;
- (id)snapshotWithError:(id *)arg1;
- (BOOL)_shouldDispatchEvent:(id *)arg1;
- (void)_dispatchEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_dispatchEvent:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)typeKey:(id)arg1 modifierFlags:(unsigned long long)arg2;
- (void)typeText:(id)arg1;
- (unsigned long long)_indexOfTargetMenuItem:(id)arg1 inMenuItemSnapshots:(id)arg2 scrollPointAccessibilityElement:(id)arg3 scrollPointMenuItemIndex:(unsigned long long *)arg4;
- (long long)_lineScrollDeltaFromPoint:(struct CGPoint)arg1 toMenuItem:(id)arg2;
- (struct CGPoint)_hitPointByAttemptingToScrollToVisibleMenuItem:(id)arg1;
- (void)_performMenuTraversalPath:(id)arg1;
- (id)_traversalPathForMenuItem:(id)arg1 eventType:(unsigned int)arg2;
- (void)_hoverMenuItem:(id)arg1;
- (void)scrollByDeltaX:(double)arg1 deltaY:(double)arg2;
- (void)clickForDuration:(double)arg1 thenDragToElement:(id)arg2;
- (void)rightClick;
- (void)doubleClick;
- (void)click;
- (void)hover;
- (struct CGPoint)_hitPointByAttemptingToScrollToVisibleSnapshot:(id)arg1;
- (id)_refreshedHitPoint;
- (void)pressForDuration:(double)arg1 thenDragToElement:(id)arg2;
- (void)pressForDuration:(double)arg1;
- (void)doubleTap;
- (void)tap;
@property(readonly) double normalizedSliderPosition;
- (void)adjustToNormalizedSliderPosition:(double)arg1;
- (void)tapOrClick;
- (void)tripleClick;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

