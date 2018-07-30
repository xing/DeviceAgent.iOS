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

@class NSNotificationCenter, NSString, XCTNSNotificationExpectation;
@protocol OS_dispatch_queue;

@interface _XCTNSNotificationExpectationImplementation : NSObject
{
    XCTNSNotificationExpectation *_expectation;
    id _observedObject;
    NSString *_notificationName;
    NSNotificationCenter *_notificationCenter;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasCleanedUp;
}

@property(copy) CDUnknownBlockType handler;
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly, copy) NSString *notificationName;
@property(readonly) id observedObject;

- (void)_observeExpectedNotification:(id)arg1;
- (void)cleanup;
- (id)initWithName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 expectation:(id)arg4;

@end

