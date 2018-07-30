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

@class NSException, NSString, XCTFailureLocation;

@interface XCTFailure : NSObject
{
    NSString *_description;
    XCTFailureLocation *_location;
    NSException *_exception;
}

@property(readonly, copy) NSString *description;
@property(readonly) NSException *exception;
@property(retain) XCTFailureLocation *location;

+ (id)failureWithDescription:(id)arg1;
+ (id)failureWithException:(id)arg1;
+ (id)failureWithException:(id)arg1 description:(id)arg2;
- (id)initWithDescription:(id)arg1 location:(id)arg2 exception:(id)arg3;

@end

