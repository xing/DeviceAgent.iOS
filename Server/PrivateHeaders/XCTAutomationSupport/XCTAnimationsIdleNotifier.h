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

@interface XCTAnimationsIdleNotifier : NSObject
{
}

+ (void)addAnimationIdleHandler:(CDUnknownBlockType)arg1;
+ (void)animationDidStart;
+ (void)animationDidStop;
+ (void)handleAnimationsIdle;
+ (BOOL)swizzleUIViewAnimationStateMethodsWithError:(id *)arg1;
- (void)notifyWhenIdle:(CDUnknownBlockType)arg1;

@end

