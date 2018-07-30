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

#import "XCElementSnapshot.h"

@interface XCElementSnapshot (Hitpoint)
- (BOOL)_canTransformPoint:(CGPoint)arg1;
- (id)_hitPointTransformationRequestOrError:(id *)arg1;
- (id)_snapshotForAccessibilityElement:(id)arg1 error:(id *)arg2;
- (id)_transformParametersFromDictionary:(id)arg1 error:(id *)arg2;
- (id)_transformParametersOrError:(id *)arg1;
- (id)_transformPointWithRequest:(id)arg1 error:(id *)arg2;
- (id)_transformRectWithRequest:(id)arg1 error:(id *)arg2;
- (id)hitPoint:(id *)arg1;
- (id)hitPointForScrolling:(id *)arg1;
- (id)hitTest:(CGPoint)arg1;
- (id)hostingAndOrientationTransformedPoint:(CGPoint)arg1 error:(id *)arg2;
- (id)hostingAndOrientationTransformedRect:(CGRect)arg1 error:(id *)arg2;
@end

