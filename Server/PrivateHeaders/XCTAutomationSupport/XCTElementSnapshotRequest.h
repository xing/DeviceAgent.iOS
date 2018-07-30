// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  9 2018 18:32:08).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, XCAccessibilityElement, XCElementSnapshot, XCTAccessibilitySnapshot_iOS;
@protocol NSCopying, OS_dispatch_queue;

@interface XCTElementSnapshotRequest : NSObject
{
    BOOL _loadResult;
    BOOL _hasLoaded;
    XCAccessibilityElement *_element;
    NSArray *_attributes;
    NSDictionary *_parameters;
    XCElementSnapshot *_elementSnapshot;
    id <NSCopying> _accessibilitySnapshot;
    double _mainThreadResponsivenessTolerance;
    double _snapshotDurationTolerance;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_loadError;
}

@property(copy) id <NSCopying> accessibilitySnapshot;
@property(readonly) XCTAccessibilitySnapshot_iOS *accessibilitySnapshot_iOS;
@property(readonly) NSArray *attributes;
@property(readonly) XCAccessibilityElement *element;
@property(retain) XCElementSnapshot *elementSnapshot;
@property BOOL hasLoaded;
@property(retain) NSError *loadError;
@property BOOL loadResult;
@property double mainThreadResponsivenessTolerance;
@property(copy) NSDictionary *parameters;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property double snapshotDurationTolerance;

- (id)_childrenOfElement:(id)arg1 userTestingSnapshot:(id)arg2 frameTransformer:(CDUnknownBlockType)arg3 outError:(id *)arg4;
- (id)_snapshotFromRemoteElementUserTestingSnapshot:(id)arg1 parentElement:(id)arg2 error:(id *)arg3;
- (id)_snapshotFromUserTestingSnapshot:(id)arg1 frameTransformer:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)accessibilitySnapshotOrError:(id *)arg1;
- (id)elementSnapshotOrError:(id *)arg1;
- (id)initWithElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3;
- (id)initWithElement:(id)arg1 rawAttributes:(id)arg2 parameters:(id)arg3;
- (BOOL)loadSnapshotAndReturnError:(id *)arg1;
- (id)safeAttributesForAttributes:(id)arg1;
- (id)safeParametersForParameters:(id)arg1;

@end

